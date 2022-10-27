// SPDX-License-Identifier: (GPL-2.0+ OR MIT)
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#include <linux/module.h>
#include <linux/thermal.h>
#include <linux/cpufreq.h>
#include <linux/err.h>
#include <linux/slab.h>
#include <linux/cpu.h>
#include "cpucore_cooling.h"
#include <linux/amlogic/cpu_hotplug.h>
#include <linux/cpumask.h>
#include <linux/amlogic/meson_cooldev.h>
#include "../../thermal/thermal_core.h"

/**
 * struct cpucore_cooling_device - data for cooling device with cpucore
 * @id: unique integer value corresponding to each cpucore_cooling_device
 *	registered.
 * @cool_dev: thermal_cooling_device pointer to keep track of the
 *	registered cooling device.
 * @cpucore_state: integer value representing the current state of cpucore
 *	cooling	devices.
 * @cpucore_val: integer value representing the absolute value of the clipped
 *	frequency.
 * @allowed_cpus: all the cpus involved for this cpucore_cooling_device.
 *
 * This structure is required for keeping information of each
 * cpucore_cooling_device registered. In order to prevent corruption of this a
 * mutex lock cooling_cpucore_lock is used.
 */

static DEFINE_IDR(cpucore_idr);
static DEFINE_MUTEX(cooling_cpucore_lock);
static LIST_HEAD(cpucore_dev_list);
/* notify_table passes value to the cpucore_ADJUST callback function. */
#define NOTIFY_INVALID NULL

/**
 * get_idr - function to get a unique id.
 * @idr: struct idr * handle used to create a id.
 * @id: int * value generated by this function.
 *
 * This function will populate @id with an unique
 * id, using the idr API.
 *
 * Return: 0 on success, an error code on failure.
 */
static int get_idr(struct idr *idr, int *id)
{
	int ret;

	mutex_lock(&cooling_cpucore_lock);
	ret = idr_alloc(idr, NULL, 0, 0, GFP_KERNEL);
	mutex_unlock(&cooling_cpucore_lock);
	if (unlikely(ret < 0))
		return ret;
	*id = ret;

	return 0;
}

/**
 * release_idr - function to free the unique id.
 * @idr: struct idr * handle used for creating the id.
 * @id: int value representing the unique id.
 */
static void release_idr(struct idr *idr, int id)
{
	mutex_lock(&cooling_cpucore_lock);
	idr_remove(idr, id);
	mutex_unlock(&cooling_cpucore_lock);
}

/* cpucore cooling device callback functions are defined below */

/**
 * cpucore_get_max_state - callback function to get the max cooling state.
 * @cdev: thermal cooling device pointer.
 * @state: fill this variable with the max cooling state.
 *
 * Callback for the thermal cooling device to return the cpucore
 * max cooling state.
 *
 * Return: 0 on success, an error code otherwise.
 */
static int cpucore_get_max_state(struct thermal_cooling_device *cdev,
				 unsigned long *state)
{
	struct cpucore_cooling_device *cpucore_device = cdev->devdata;
	*state = cpucore_device->max_cpu_core_num;
	pr_debug("max cpu core=%ld\n", *state);
	return 0;
}

/**
 * cpucore_get_cur_state - callback function to get the current cooling state.
 * @cdev: thermal cooling device pointer.
 * @state: fill this variable with the current cooling state.
 *
 * Callback for the thermal cooling device to return the cpucore
 * current cooling state.
 *
 * Return: 0 on success, an error code otherwise.
 */
static int cpucore_get_cur_state(struct thermal_cooling_device *cdev,
				 unsigned long *state)
{
	struct cpucore_cooling_device *cpucore_device = cdev->devdata;
	*state = cpucore_device->cpucore_state;
	pr_debug("current state=%ld\n", *state);
	return 0;
}

/**
 * cpucore_set_cur_state - callback function to set the current cooling state.
 * @cdev: thermal cooling device pointer.
 * @state: set this variable to the current cooling state.
 *
 * Callback for the thermal cooling device to change the cpucore
 * current cooling state.
 *
 * Return: 0 on success, an error code otherwise.
 */
static int cpucore_set_cur_state(struct thermal_cooling_device *cdev,
				 unsigned long state)
{
	struct cpucore_cooling_device *cpucore_device = cdev->devdata;
	int set_max_num, id;

	if (WARN_ON(state > cpucore_device->max_cpu_core_num))
		return -EINVAL;

	mutex_lock(&cooling_cpucore_lock);
	if (cpucore_device->stop_flag) {
		mutex_unlock(&cooling_cpucore_lock);
		return 0;
	}
	if ((state & CPU_STOP) == CPU_STOP) {
		cpucore_device->stop_flag = 1;
		state = state & (~CPU_STOP);
	}
	mutex_unlock(&cooling_cpucore_lock);
	if (cpucore_device->max_cpu_core_num >= state) {
		cpucore_device->cpucore_state = state;
		set_max_num = cpucore_device->max_cpu_core_num - state;
		id = cpucore_device->cluster_id;
		pr_debug("set cluster :%d, max cpu num=%d,state=%ld\n",
				id, set_max_num, state);
		cpufreq_set_max_cpu_num(set_max_num, id);
	}

	return 0;
}

/*
 * Simple mathematics model for cpu core power:
 * just for ipa hook, nothing to do;
 */
static int cpucore_get_requested_power(struct thermal_cooling_device *cdev,
				       struct thermal_zone_device *tz,
				       u32 *power)
{
	*power = 0;

	return 0;
}

static int cpucore_state2power(struct thermal_cooling_device *cdev,
			       struct thermal_zone_device *tz,
			       unsigned long state, u32 *power)
{
	*power = 0;

	return 0;
}

static int cpucore_power2state(struct thermal_cooling_device *cdev,
			       struct thermal_zone_device *tz, u32 power,
			       unsigned long *state)
{
	cdev->ops->get_cur_state(cdev, state);
	return 0;
}

static int cpucore_notify_state(void *thermal_instance,
				int trip,
				enum thermal_trip_type type)
{
	struct thermal_instance *ins = thermal_instance;
	struct thermal_zone_device *tz;
	struct thermal_cooling_device *cdev;
	struct cpucore_cooling_device *cpucore_device;
	unsigned long  ins_upper, target_upper = 0;
	long cur_state = -1;
	long upper = -1;
	int hyst = 0, trip_temp;

	if (!ins)
		return -EINVAL;

	tz = ins->tz;
	cdev = ins->cdev;

	if (!tz || !cdev)
		return -EINVAL;

	cpucore_device = cdev->devdata;

	tz->ops->get_trip_hyst(tz, trip, &hyst);
	tz->ops->get_trip_temp(tz, trip, &trip_temp);

	/* increase each hyst step */
	if (tz->temperature >= (trip_temp + cpucore_device->hot_step * hyst)) {
		cpucore_device->hot_step++;
		pr_info("temp:%d increase, hyst:%d, trip_temp:%d, hot:%x\n",
			tz->temperature, hyst, trip_temp, cpucore_device->hot_step);
	}
	/* reserve a step gap */
	if (tz->temperature <= (trip_temp + (cpucore_device->hot_step - 2) * hyst) &&
	    cpucore_device->hot_step) {
		cpucore_device->hot_step--;
		pr_info("temp:%d decrease, hyst:%d, trip_temp:%d, hot:%x\n",
			tz->temperature, hyst, trip_temp, cpucore_device->hot_step);
	}

	switch (type) {
	case THERMAL_TRIP_HOT:
		ins_upper = ins->upper;
		if (!IS_ERR_VALUE(ins_upper) &&
				ins_upper >= target_upper) {
			target_upper = ins_upper;
			upper = target_upper;
		}
		cur_state = cpucore_device->hot_step;
		/* do not exceed levels */
		if (upper != -1 && cur_state > upper)
			cur_state = upper;
		if (cur_state < 0)
			cur_state = 0;
		pr_debug("%s, cur_state:%ld, upper:%ld, step:%d\n",
			 __func__, cur_state, upper, cpucore_device->hot_step);
		cdev->ops->set_cur_state(cdev, cur_state);
		break;
	default:
		break;
	}
	return 0;
}

int __weak get_cpunum_by_cluster(int cluster)
{
	pr_info("[Thermal] Not found getting cpunum interface!!\n");
	return 0;
}

/* Bind cpucore callbacks to thermal cooling device ops */
static struct thermal_cooling_device_ops const cpucore_cooling_ops = {
	.get_max_state = cpucore_get_max_state,
	.get_cur_state = cpucore_get_cur_state,
	.set_cur_state = cpucore_set_cur_state,
	.state2power   = cpucore_state2power,
	.power2state   = cpucore_power2state,
	.notify_state  = cpucore_notify_state,
	.get_requested_power = cpucore_get_requested_power,
};

/**
 * cpucore_cooling_register - function to create cpucore cooling device.
 *
 * This interface function registers the cpucore cooling device with the name
 * "thermal-cpucore-%x". This api can support multiple instances of cpucore
 * cooling devices.
 *
 * Return: a valid struct thermal_cooling_device pointer on success,
 * on failure, it returns a corresponding ERR_PTR().
 */
struct thermal_cooling_device *
cpucore_cooling_register(struct device_node *np, int cluster_id)
{
	struct thermal_cooling_device *cool_dev;
	struct cpucore_cooling_device *cpucore_dev = NULL;
	char dev_name[THERMAL_NAME_LENGTH];
	int ret = 0;
	int cores = 0;

	cpucore_dev = kzalloc(sizeof(*cpucore_dev), GFP_KERNEL);
	if (!cpucore_dev)
		return ERR_PTR(-ENOMEM);

	ret = get_idr(&cpucore_idr, &cpucore_dev->id);
	if (ret) {
		kfree(cpucore_dev);
		return ERR_PTR(-EINVAL);
	}

	cpucore_dev->cluster_id = cluster_id;

	cores = get_cpunum_by_cluster(cluster_id);
	cpucore_dev->max_cpu_core_num = cores;
	pr_info("%s, max_cpu_core_num:%d\n", __func__, cores);

	snprintf(dev_name, sizeof(dev_name), "thermal-cpucore-%d",
		 cpucore_dev->id);
	cool_dev = thermal_of_cooling_device_register(np, dev_name, cpucore_dev,
						      &cpucore_cooling_ops);
	if (!cool_dev) {
		release_idr(&cpucore_idr, cpucore_dev->id);
		kfree(cpucore_dev);
		pr_info("%s cpucore cooling devices register fail\n", __func__);
		return ERR_PTR(-EINVAL);
	}
	cpucore_dev->cool_dev = cool_dev;
	cpucore_dev->cpucore_state = 0;
	return cool_dev;
}
EXPORT_SYMBOL_GPL(cpucore_cooling_register);

/**
 * cpucore_cooling_unregister - function to remove cpucore cooling device.
 * @cdev: thermal cooling device pointer.
 *
 * This interface function unregisters the "thermal-cpucore-%x" cooling device.
 */
void cpucore_cooling_unregister(struct thermal_cooling_device *cdev)
{
	struct cpucore_cooling_device *cpucore_dev;

	if (!cdev)
		return;

	cpucore_dev = cdev->devdata;

	thermal_cooling_device_unregister(cpucore_dev->cool_dev);
	release_idr(&cpucore_idr, cpucore_dev->id);
	kfree(cpucore_dev);
}
EXPORT_SYMBOL_GPL(cpucore_cooling_unregister);