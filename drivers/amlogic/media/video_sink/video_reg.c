// SPDX-License-Identifier: (GPL-2.0+ OR MIT)
/*
 * drivers/amlogic/media/video_sink/video_reg.c
 *
 * Copyright (C) 2017 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 */

#include <linux/amlogic/media/registers/register.h>
#include "video_reg.h"

struct hw_vd_reg_s vd_mif_reg_legacy_array[MAX_VD_LAYER_G12] = {
	{
		VD1_IF0_GEN_REG,
		VD1_IF0_CANVAS0,
		VD1_IF0_CANVAS1,
		VD1_IF0_LUMA_X0,
		VD1_IF0_LUMA_Y0,
		VD1_IF0_CHROMA_X0,
		VD1_IF0_CHROMA_Y0,
		VD1_IF0_LUMA_X1,
		VD1_IF0_LUMA_Y1,
		VD1_IF0_CHROMA_X1,
		VD1_IF0_CHROMA_Y1,
		VD1_IF0_RPT_LOOP,
		VD1_IF0_LUMA0_RPT_PAT,
		VD1_IF0_CHROMA0_RPT_PAT,
		VD1_IF0_LUMA1_RPT_PAT,
		VD1_IF0_CHROMA1_RPT_PAT,
		VD1_IF0_LUMA_PSEL,
		VD1_IF0_CHROMA_PSEL,
		VD1_IF0_LUMA_FIFO_SIZE,
		VD1_IF0_GEN_REG2,
		VD1_IF0_GEN_REG3,
		VIU_VD1_FMT_CTRL,
		VIU_VD1_FMT_W,
	},
	{
		VD2_IF0_GEN_REG,
		VD2_IF0_CANVAS0,
		VD2_IF0_CANVAS1,
		VD2_IF0_LUMA_X0,
		VD2_IF0_LUMA_Y0,
		VD2_IF0_CHROMA_X0,
		VD2_IF0_CHROMA_Y0,
		VD2_IF0_LUMA_X1,
		VD2_IF0_LUMA_Y1,
		VD2_IF0_CHROMA_X1,
		VD2_IF0_CHROMA_Y1,
		VD2_IF0_RPT_LOOP,
		VD2_IF0_LUMA0_RPT_PAT,
		VD2_IF0_CHROMA0_RPT_PAT,
		VD2_IF0_LUMA1_RPT_PAT,
		VD2_IF0_CHROMA1_RPT_PAT,
		VD2_IF0_LUMA_PSEL,
		VD2_IF0_CHROMA_PSEL,
		VD2_IF0_LUMA_FIFO_SIZE,
		VD2_IF0_GEN_REG2,
		VD2_IF0_GEN_REG3,
		VIU_VD2_FMT_CTRL,
		VIU_VD2_FMT_W,
	}
};

struct hw_vd_reg_s vd_mif_reg_g12_array[MAX_VD_LAYER_G12] = {
	{
		G12_VD1_IF0_GEN_REG,
		G12_VD1_IF0_CANVAS0,
		G12_VD1_IF0_CANVAS1,
		G12_VD1_IF0_LUMA_X0,
		G12_VD1_IF0_LUMA_Y0,
		G12_VD1_IF0_CHROMA_X0,
		G12_VD1_IF0_CHROMA_Y0,
		G12_VD1_IF0_LUMA_X1,
		G12_VD1_IF0_LUMA_Y1,
		G12_VD1_IF0_CHROMA_X1,
		G12_VD1_IF0_CHROMA_Y1,
		G12_VD1_IF0_RPT_LOOP,
		G12_VD1_IF0_LUMA0_RPT_PAT,
		G12_VD1_IF0_CHROMA0_RPT_PAT,
		G12_VD1_IF0_LUMA1_RPT_PAT,
		G12_VD1_IF0_CHROMA1_RPT_PAT,
		G12_VD1_IF0_LUMA_PSEL,
		G12_VD1_IF0_CHROMA_PSEL,
		G12_VD1_IF0_LUMA_FIFO_SIZE,
		G12_VD1_IF0_GEN_REG2,
		G12_VD1_IF0_GEN_REG3,
		G12_VIU_VD1_FMT_CTRL,
		G12_VIU_VD1_FMT_W,
	},
	{
		G12_VD2_IF0_GEN_REG,
		G12_VD2_IF0_CANVAS0,
		G12_VD2_IF0_CANVAS1,
		G12_VD2_IF0_LUMA_X0,
		G12_VD2_IF0_LUMA_Y0,
		G12_VD2_IF0_CHROMA_X0,
		G12_VD2_IF0_CHROMA_Y0,
		G12_VD2_IF0_LUMA_X1,
		G12_VD2_IF0_LUMA_Y1,
		G12_VD2_IF0_CHROMA_X1,
		G12_VD2_IF0_CHROMA_Y1,
		G12_VD2_IF0_RPT_LOOP,
		G12_VD2_IF0_LUMA0_RPT_PAT,
		G12_VD2_IF0_CHROMA0_RPT_PAT,
		G12_VD2_IF0_LUMA1_RPT_PAT,
		G12_VD2_IF0_CHROMA1_RPT_PAT,
		G12_VD2_IF0_LUMA_PSEL,
		G12_VD2_IF0_CHROMA_PSEL,
		G12_VD2_IF0_LUMA_FIFO_SIZE,
		G12_VD2_IF0_GEN_REG2,
		G12_VD2_IF0_GEN_REG3,
		G12_VIU_VD2_FMT_CTRL,
		G12_VIU_VD2_FMT_W,
	}
};

struct hw_vd_reg_s vd_mif_reg_sc2_array[MAX_VD_LAYER_G12] = {
	{
		SC2_VD1_IF0_GEN_REG,
		SC2_VD1_IF0_CANVAS0,
		SC2_VD1_IF0_CANVAS1,
		SC2_VD1_IF0_LUMA_X0,
		SC2_VD1_IF0_LUMA_Y0,
		SC2_VD1_IF0_CHROMA_X0,
		SC2_VD1_IF0_CHROMA_Y0,
		SC2_VD1_IF0_LUMA_X1,
		SC2_VD1_IF0_LUMA_Y1,
		SC2_VD1_IF0_CHROMA_X1,
		SC2_VD1_IF0_CHROMA_Y1,
		SC2_VD1_IF0_RPT_LOOP,
		SC2_VD1_IF0_LUMA0_RPT_PAT,
		SC2_VD1_IF0_CHROMA0_RPT_PAT,
		SC2_VD1_IF0_LUMA1_RPT_PAT,
		SC2_VD1_IF0_CHROMA1_RPT_PAT,
		SC2_VD1_IF0_LUMA_PSEL,
		SC2_VD1_IF0_CHROMA_PSEL,
		SC2_VD1_IF0_LUMA_FIFO_SIZE,
		SC2_VD1_IF0_GEN_REG2,
		SC2_VD1_IF0_GEN_REG3,
		SC2_VIU_VD1_FMT_CTRL,
		SC2_VIU_VD1_FMT_W,
	},
	{
		SC2_VD2_IF0_GEN_REG,
		SC2_VD2_IF0_CANVAS0,
		SC2_VD2_IF0_CANVAS1,
		SC2_VD2_IF0_LUMA_X0,
		SC2_VD2_IF0_LUMA_Y0,
		SC2_VD2_IF0_CHROMA_X0,
		SC2_VD2_IF0_CHROMA_Y0,
		SC2_VD2_IF0_LUMA_X1,
		SC2_VD2_IF0_LUMA_Y1,
		SC2_VD2_IF0_CHROMA_X1,
		SC2_VD2_IF0_CHROMA_Y1,
		SC2_VD2_IF0_RPT_LOOP,
		SC2_VD2_IF0_LUMA0_RPT_PAT,
		SC2_VD2_IF0_CHROMA0_RPT_PAT,
		SC2_VD2_IF0_LUMA1_RPT_PAT,
		SC2_VD2_IF0_CHROMA1_RPT_PAT,
		SC2_VD2_IF0_LUMA_PSEL,
		SC2_VD2_IF0_CHROMA_PSEL,
		SC2_VD2_IF0_LUMA_FIFO_SIZE,
		SC2_VD2_IF0_GEN_REG2,
		SC2_VD2_IF0_GEN_REG3,
		SC2_VIU_VD2_FMT_CTRL,
		SC2_VIU_VD2_FMT_W,
	}
};

struct hw_vd_reg_s vd_mif_reg_t7_array[MAX_VD_LAYER_T7] = {
	{
		SC2_VD1_IF0_GEN_REG,
		SC2_VD1_IF0_CANVAS0,
		SC2_VD1_IF0_CANVAS1,
		SC2_VD1_IF0_LUMA_X0,
		SC2_VD1_IF0_LUMA_Y0,
		SC2_VD1_IF0_CHROMA_X0,
		SC2_VD1_IF0_CHROMA_Y0,
		SC2_VD1_IF0_LUMA_X1,
		SC2_VD1_IF0_LUMA_Y1,
		SC2_VD1_IF0_CHROMA_X1,
		SC2_VD1_IF0_CHROMA_Y1,
		SC2_VD1_IF0_RPT_LOOP,
		SC2_VD1_IF0_LUMA0_RPT_PAT,
		SC2_VD1_IF0_CHROMA0_RPT_PAT,
		SC2_VD1_IF0_LUMA1_RPT_PAT,
		SC2_VD1_IF0_CHROMA1_RPT_PAT,
		SC2_VD1_IF0_LUMA_PSEL,
		SC2_VD1_IF0_CHROMA_PSEL,
		SC2_VD1_IF0_LUMA_FIFO_SIZE,
		SC2_VD1_IF0_GEN_REG2,
		SC2_VD1_IF0_GEN_REG3,
		SC2_VIU_VD1_FMT_CTRL,
		SC2_VIU_VD1_FMT_W,
	},
	{
		SC2_VD2_IF0_GEN_REG,
		SC2_VD2_IF0_CANVAS0,
		SC2_VD2_IF0_CANVAS1,
		SC2_VD2_IF0_LUMA_X0,
		SC2_VD2_IF0_LUMA_Y0,
		SC2_VD2_IF0_CHROMA_X0,
		SC2_VD2_IF0_CHROMA_Y0,
		SC2_VD2_IF0_LUMA_X1,
		SC2_VD2_IF0_LUMA_Y1,
		SC2_VD2_IF0_CHROMA_X1,
		SC2_VD2_IF0_CHROMA_Y1,
		SC2_VD2_IF0_RPT_LOOP,
		SC2_VD2_IF0_LUMA0_RPT_PAT,
		SC2_VD2_IF0_CHROMA0_RPT_PAT,
		SC2_VD2_IF0_LUMA1_RPT_PAT,
		SC2_VD2_IF0_CHROMA1_RPT_PAT,
		SC2_VD2_IF0_LUMA_PSEL,
		SC2_VD2_IF0_CHROMA_PSEL,
		SC2_VD2_IF0_LUMA_FIFO_SIZE,
		SC2_VD2_IF0_GEN_REG2,
		SC2_VD2_IF0_GEN_REG3,
		SC2_VIU_VD2_FMT_CTRL,
		SC2_VIU_VD2_FMT_W,
	},
	{
		VD3_IF0_GEN_REG,
		VD3_IF0_CANVAS0,
		VD3_IF0_CANVAS1,
		VD3_IF0_LUMA_X0,
		VD3_IF0_LUMA_Y0,
		VD3_IF0_CHROMA_X0,
		VD3_IF0_CHROMA_Y0,
		VD3_IF0_LUMA_X1,
		VD3_IF0_LUMA_Y1,
		VD3_IF0_CHROMA_X1,
		VD3_IF0_CHROMA_Y1,
		VD3_IF0_RPT_LOOP,
		VD3_IF0_LUMA0_RPT_PAT,
		VD3_IF0_CHROMA0_RPT_PAT,
		VD3_IF0_LUMA1_RPT_PAT,
		VD3_IF0_CHROMA1_RPT_PAT,
		VD3_IF0_LUMA_PSEL,
		VD3_IF0_CHROMA_PSEL,
		VD3_IF0_LUMA_FIFO_SIZE,
		VD3_IF0_GEN_REG2,
		VD3_IF0_GEN_REG3,
		VIU_VD3_FMT_CTRL,
		VIU_VD3_FMT_W,
	}

};

struct hw_vd_linear_reg_s vd_mif_linear_reg_t7_array[MAX_VD_LAYER_T7] = {
	{
		VD1_IF0_BADDR_Y,
		VD1_IF0_BADDR_CB,
		VD1_IF0_BADDR_CR,
		VD1_IF0_STRIDE_0,
		VD1_IF0_STRIDE_1,
		VD1_IF0_BADDR_Y_F1,
		VD1_IF0_BADDR_CB_F1,
		VD1_IF0_BADDR_CR_F1,
		VD1_IF0_STRIDE_0_F1,
		VD1_IF0_STRIDE_1_F1,
	},
	{
		VD2_IF0_BADDR_Y,
		VD2_IF0_BADDR_CB,
		VD2_IF0_BADDR_CR,
		VD2_IF0_STRIDE_0,
		VD2_IF0_STRIDE_1,
		VD2_IF0_BADDR_Y_F1,
		VD2_IF0_BADDR_CB_F1,
		VD2_IF0_BADDR_CR_F1,
		VD2_IF0_STRIDE_0_F1,
		VD2_IF0_STRIDE_1_F1,
	},
	{
		VD3_IF0_BADDR_Y,
		VD3_IF0_BADDR_CB,
		VD3_IF0_BADDR_CR,
		VD3_IF0_STRIDE_0,
		VD3_IF0_STRIDE_1,
		VD3_IF0_BADDR_Y_F1,
		VD3_IF0_BADDR_CB_F1,
		VD3_IF0_BADDR_CR_F1,
		VD3_IF0_STRIDE_0_F1,
		VD3_IF0_STRIDE_1_F1,
	}
};

struct hw_afbc_reg_s vd_afbc_reg_array[MAX_VD_LAYER_G12] = {
	{
		AFBC_ENABLE,
		AFBC_MODE,
		AFBC_SIZE_IN,
		AFBC_DEC_DEF_COLOR,
		AFBC_CONV_CTRL,
		AFBC_LBUF_DEPTH,
		AFBC_HEAD_BADDR,
		AFBC_BODY_BADDR,
		AFBC_SIZE_OUT,
		AFBC_OUT_YSCOPE,
		AFBC_STAT,
		AFBC_VD_CFMT_CTRL,
		AFBC_VD_CFMT_W,
		AFBC_MIF_HOR_SCOPE,
		AFBC_MIF_VER_SCOPE,
		AFBC_PIXEL_HOR_SCOPE,
		AFBC_PIXEL_VER_SCOPE,
		AFBC_VD_CFMT_H,
		AFBCDEC_IQUANT_ENABLE,
		AFBCDEC_IQUANT_LUT_1,
		AFBCDEC_IQUANT_LUT_2,
		AFBCDEC_IQUANT_LUT_3,
		AFBCDEC_IQUANT_LUT_4,
	},
	{
		VD2_AFBC_ENABLE,
		VD2_AFBC_MODE,
		VD2_AFBC_SIZE_IN,
		VD2_AFBC_DEC_DEF_COLOR,
		VD2_AFBC_CONV_CTRL,
		VD2_AFBC_LBUF_DEPTH,
		VD2_AFBC_HEAD_BADDR,
		VD2_AFBC_BODY_BADDR,
		VD2_AFBC_SIZE_OUT,
		VD2_AFBC_OUT_YSCOPE,
		VD2_AFBC_STAT,
		VD2_AFBC_VD_CFMT_CTRL,
		VD2_AFBC_VD_CFMT_W,
		VD2_AFBC_MIF_HOR_SCOPE,
		VD2_AFBC_MIF_VER_SCOPE,
		VD2_AFBC_PIXEL_HOR_SCOPE,
		VD2_AFBC_PIXEL_VER_SCOPE,
		VD2_AFBC_VD_CFMT_H,
		VD2_AFBCDEC_IQUANT_ENABLE,
		VD2_AFBCDEC_IQUANT_LUT_1,
		VD2_AFBCDEC_IQUANT_LUT_2,
		VD2_AFBCDEC_IQUANT_LUT_3,
		VD2_AFBCDEC_IQUANT_LUT_4,
	}
};

struct hw_afbc_reg_s vd_afbc_reg_sc2_array[MAX_VD_LAYER_G12] = {
	{
		SC2_AFBC_ENABLE,
		SC2_AFBC_MODE,
		SC2_AFBC_SIZE_IN,
		SC2_AFBC_DEC_DEF_COLOR,
		SC2_AFBC_CONV_CTRL,
		SC2_AFBC_LBUF_DEPTH,
		SC2_AFBC_HEAD_BADDR,
		SC2_AFBC_BODY_BADDR,
		SC2_AFBC_SIZE_OUT,
		SC2_AFBC_OUT_YSCOPE,
		SC2_AFBC_STAT,
		SC2_AFBC_VD_CFMT_CTRL,
		SC2_AFBC_VD_CFMT_W,
		SC2_AFBC_MIF_HOR_SCOPE,
		SC2_AFBC_MIF_VER_SCOPE,
		SC2_AFBC_PIXEL_HOR_SCOPE,
		SC2_AFBC_PIXEL_VER_SCOPE,
		SC2_AFBC_VD_CFMT_H,
		SC2_AFBCDEC_IQUANT_ENABLE,
		SC2_AFBCDEC_IQUANT_LUT_1,
		SC2_AFBCDEC_IQUANT_LUT_2,
		SC2_AFBCDEC_IQUANT_LUT_3,
		SC2_AFBCDEC_IQUANT_LUT_4,
	},
	{
		SC2_VD2_AFBC_ENABLE,
		SC2_VD2_AFBC_MODE,
		SC2_VD2_AFBC_SIZE_IN,
		SC2_VD2_AFBC_DEC_DEF_COLOR,
		SC2_VD2_AFBC_CONV_CTRL,
		SC2_VD2_AFBC_LBUF_DEPTH,
		SC2_VD2_AFBC_HEAD_BADDR,
		SC2_VD2_AFBC_BODY_BADDR,
		SC2_VD2_AFBC_SIZE_OUT,
		SC2_VD2_AFBC_OUT_YSCOPE,
		SC2_VD2_AFBC_STAT,
		SC2_VD2_AFBC_VD_CFMT_CTRL,
		SC2_VD2_AFBC_VD_CFMT_W,
		SC2_VD2_AFBC_MIF_HOR_SCOPE,
		SC2_VD2_AFBC_MIF_VER_SCOPE,
		SC2_VD2_AFBC_PIXEL_HOR_SCOPE,
		SC2_VD2_AFBC_PIXEL_VER_SCOPE,
		SC2_VD2_AFBC_VD_CFMT_H,
		SC2_VD2_AFBCDEC_IQUANT_ENABLE,
		SC2_VD2_AFBCDEC_IQUANT_LUT_1,
		SC2_VD2_AFBCDEC_IQUANT_LUT_2,
		SC2_VD2_AFBCDEC_IQUANT_LUT_3,
		SC2_VD2_AFBCDEC_IQUANT_LUT_4,
	}
};

struct hw_afbc_reg_s vd_afbc_reg_t7_array[MAX_VD_LAYER_T7] = {
	{
		SC2_AFBC_ENABLE,
		SC2_AFBC_MODE,
		SC2_AFBC_SIZE_IN,
		SC2_AFBC_DEC_DEF_COLOR,
		SC2_AFBC_CONV_CTRL,
		SC2_AFBC_LBUF_DEPTH,
		SC2_AFBC_HEAD_BADDR,
		SC2_AFBC_BODY_BADDR,
		SC2_AFBC_SIZE_OUT,
		SC2_AFBC_OUT_YSCOPE,
		SC2_AFBC_STAT,
		SC2_AFBC_VD_CFMT_CTRL,
		SC2_AFBC_VD_CFMT_W,
		SC2_AFBC_MIF_HOR_SCOPE,
		SC2_AFBC_MIF_VER_SCOPE,
		SC2_AFBC_PIXEL_HOR_SCOPE,
		SC2_AFBC_PIXEL_VER_SCOPE,
		SC2_AFBC_VD_CFMT_H,
		SC2_AFBCDEC_IQUANT_ENABLE,
		SC2_AFBCDEC_IQUANT_LUT_1,
		SC2_AFBCDEC_IQUANT_LUT_2,
		SC2_AFBCDEC_IQUANT_LUT_3,
		SC2_AFBCDEC_IQUANT_LUT_4,
		VD1_AFBCDM_VDTOP_CTRL0,
	},
	{
		SC2_VD2_AFBC_ENABLE,
		SC2_VD2_AFBC_MODE,
		SC2_VD2_AFBC_SIZE_IN,
		SC2_VD2_AFBC_DEC_DEF_COLOR,
		SC2_VD2_AFBC_CONV_CTRL,
		SC2_VD2_AFBC_LBUF_DEPTH,
		SC2_VD2_AFBC_HEAD_BADDR,
		SC2_VD2_AFBC_BODY_BADDR,
		SC2_VD2_AFBC_SIZE_OUT,
		SC2_VD2_AFBC_OUT_YSCOPE,
		SC2_VD2_AFBC_STAT,
		SC2_VD2_AFBC_VD_CFMT_CTRL,
		SC2_VD2_AFBC_VD_CFMT_W,
		SC2_VD2_AFBC_MIF_HOR_SCOPE,
		SC2_VD2_AFBC_MIF_VER_SCOPE,
		SC2_VD2_AFBC_PIXEL_HOR_SCOPE,
		SC2_VD2_AFBC_PIXEL_VER_SCOPE,
		SC2_VD2_AFBC_VD_CFMT_H,
		SC2_VD2_AFBCDEC_IQUANT_ENABLE,
		SC2_VD2_AFBCDEC_IQUANT_LUT_1,
		SC2_VD2_AFBCDEC_IQUANT_LUT_2,
		SC2_VD2_AFBCDEC_IQUANT_LUT_3,
		SC2_VD2_AFBCDEC_IQUANT_LUT_4,
		VD2_AFBCDM_VDTOP_CTRL0,
	},
	{
		VD3_AFBC_ENABLE,
		VD3_AFBC_MODE,
		VD3_AFBC_SIZE_IN,
		VD3_AFBC_DEC_DEF_COLOR,
		VD3_AFBC_CONV_CTRL,
		VD3_AFBC_LBUF_DEPTH,
		VD3_AFBC_HEAD_BADDR,
		VD3_AFBC_BODY_BADDR,
		VD3_AFBC_SIZE_OUT,
		VD3_AFBC_OUT_YSCOPE,
		VD3_AFBC_STAT,
		VD3_AFBC_VD_CFMT_CTRL,
		VD3_AFBC_VD_CFMT_W,
		VD3_AFBC_MIF_HOR_SCOPE,
		VD3_AFBC_MIF_VER_SCOPE,
		VD3_AFBC_PIXEL_HOR_SCOPE,
		VD3_AFBC_PIXEL_VER_SCOPE,
		VD3_AFBC_VD_CFMT_H,
		VD3_AFBCDEC_IQUANT_ENABLE,
		VD3_AFBCDEC_IQUANT_LUT_1,
		VD3_AFBCDEC_IQUANT_LUT_2,
		VD3_AFBCDEC_IQUANT_LUT_3,
		VD3_AFBCDEC_IQUANT_LUT_4,
		VD3_AFBCDM_VDTOP_CTRL0,
	}
};

struct hw_sr_reg_s sr_reg_array[MAX_SR_NUM] = {
	{
		SRSHARP0_SHARP_SYNC_CTRL,
	},
	{
		SRSHARP1_SHARP_SYNC_CTRL,
	},
};

struct hw_sr_reg_s sr_reg_tm2revb_array[MAX_SR_NUM] = {
	{
		TM2REVB_SRSHARP0_SHARP_SYNC_CTRL,
	},
	{
		TM2REVB_SRSHARP1_SHARP_SYNC_CTRL,
	},
};

struct hw_fg_reg_s fg_reg_g12_array[MAX_VD_LAYER_G12] = {
	{
		G12_FGRAIN_CTRL,
		G12_FGRAIN_WIN_H,
		G12_FGRAIN_WIN_V,
	},
	{
		G12_VD2_FGRAIN_CTRL,
		G12_VD2_FGRAIN_WIN_H,
		G12_VD2_FGRAIN_WIN_V,
	},
};

struct hw_fg_reg_s fg_reg_sc2_array[MAX_VD_LAYER_G12] = {
	{
		SC2_FGRAIN_CTRL,
		SC2_FGRAIN_WIN_H,
		SC2_FGRAIN_WIN_V,
	},
	{
		SC2_VD2_FGRAIN_CTRL,
		SC2_VD2_FGRAIN_WIN_H,
		SC2_VD2_FGRAIN_WIN_V,
	},
};

struct hw_fg_reg_s fg_reg_t7_array[MAX_VD_LAYER_T7] = {
	{
		SC2_FGRAIN_CTRL,
		SC2_FGRAIN_WIN_H,
		SC2_FGRAIN_WIN_V,
	},
	{
		SC2_VD2_FGRAIN_CTRL,
		SC2_VD2_FGRAIN_WIN_H,
		SC2_VD2_FGRAIN_WIN_V,
	},
	{
		VD3_FGRAIN_CTRL,
		VD3_FGRAIN_WIN_H,
		VD3_FGRAIN_WIN_V,
	},
};

struct hw_pps_reg_s pps_reg_array[MAX_VD_LAYER_G12] = {
	{
		VPP_SCALE_COEF_IDX,
		VPP_SCALE_COEF,
		VPP_VSC_REGION12_STARTP,
		VPP_VSC_REGION34_STARTP,
		VPP_VSC_REGION4_ENDP,
		VPP_VSC_START_PHASE_STEP,
		VPP_VSC_REGION1_PHASE_SLOPE,
		VPP_VSC_REGION3_PHASE_SLOPE,
		VPP_VSC_PHASE_CTRL,
		VPP_VSC_INI_PHASE,
		VPP_HSC_REGION12_STARTP,
		VPP_HSC_REGION34_STARTP,
		VPP_HSC_REGION4_ENDP,
		VPP_HSC_START_PHASE_STEP,
		VPP_HSC_REGION1_PHASE_SLOPE,
		VPP_HSC_REGION3_PHASE_SLOPE,
		VPP_HSC_PHASE_CTRL,
		VPP_SC_MISC,
		VPP_HSC_PHASE_CTRL1,
		VPP_PREHSC_COEF,
		VPP_PREHSC_CTRL,
		VPP_PREVSC_COEF,
		VPP_PREHSC_COEF1,
	},
	{
		VD2_SCALE_COEF_IDX,
		VD2_SCALE_COEF,
		VD2_VSC_REGION12_STARTP,
		VD2_VSC_REGION34_STARTP,
		VD2_VSC_REGION4_ENDP,
		VD2_VSC_START_PHASE_STEP,
		VD2_VSC_REGION1_PHASE_SLOPE,
		VD2_VSC_REGION3_PHASE_SLOPE,
		VD2_VSC_PHASE_CTRL,
		VD2_VSC_INI_PHASE,
		VD2_HSC_REGION12_STARTP,
		VD2_HSC_REGION34_STARTP,
		VD2_HSC_REGION4_ENDP,
		VD2_HSC_START_PHASE_STEP,
		VD2_HSC_REGION1_PHASE_SLOPE,
		VD2_HSC_REGION3_PHASE_SLOPE,
		VD2_HSC_PHASE_CTRL,
		VD2_SC_MISC,
		VD2_HSC_PHASE_CTRL1,
		VD2_PREHSC_COEF,
		VD2_PREHSC_CTRL,
		0,
		0,
	},
};

struct hw_pps_reg_s pps_reg_array_t5d[MAX_VD_LAYER_G12] = {
	{
		VPP_SCALE_COEF_IDX,
		VPP_SCALE_COEF,
		VPP_VSC_REGION12_STARTP,
		VPP_VSC_REGION34_STARTP,
		VPP_VSC_REGION4_ENDP,
		VPP_VSC_START_PHASE_STEP,
		VPP_VSC_REGION1_PHASE_SLOPE,
		VPP_VSC_REGION3_PHASE_SLOPE,
		VPP_VSC_PHASE_CTRL,
		VPP_VSC_INI_PHASE,
		VPP_HSC_REGION12_STARTP,
		VPP_HSC_REGION34_STARTP,
		VPP_HSC_REGION4_ENDP,
		VPP_HSC_START_PHASE_STEP,
		VPP_HSC_REGION1_PHASE_SLOPE,
		VPP_HSC_REGION3_PHASE_SLOPE,
		VPP_HSC_PHASE_CTRL,
		VPP_SC_MISC,
		VPP_HSC_PHASE_CTRL1,
		VPP_PREHSC_COEF,
		VPP_PREHSC_CTRL,
		VPP_PREVSC_COEF,
		VPP_PREHSC_COEF1,
	},
	{
		VD2_SCALE_COEF_IDX,
		VD2_SCALE_COEF,
		VD2_VSC_REGION12_STARTP,
		VD2_VSC_REGION34_STARTP,
		VD2_VSC_REGION4_ENDP,
		VD2_VSC_START_PHASE_STEP,
		VD2_VSC_REGION1_PHASE_SLOPE,
		VD2_VSC_REGION3_PHASE_SLOPE,
		VD2_VSC_PHASE_CTRL,
		VD2_VSC_INI_PHASE,
		VD2_HSC_REGION12_STARTP,
		VD2_HSC_REGION34_STARTP,
		VD2_HSC_REGION4_ENDP,
		VD2_HSC_START_PHASE_STEP,
		VD2_HSC_REGION1_PHASE_SLOPE,
		VD2_HSC_REGION3_PHASE_SLOPE,
		VD2_HSC_PHASE_CTRL,
		VD2_SC_MISC,
		VD2_HSC_PHASE_CTRL1,
		VD2_PREHSC_COEF_T5D,
		VD2_PRE_SCALE_CTRL,
		VD2_PREVSC_COEF,
		VD2_PREVSC_COEF1,
	},
};

struct hw_pps_reg_s pps_reg_t7_array[MAX_VD_LAYER_T7 + 1] = {
	{
		VPP_SCALE_COEF_IDX,
		VPP_SCALE_COEF,
		VPP_VSC_REGION12_STARTP,
		VPP_VSC_REGION34_STARTP,
		VPP_VSC_REGION4_ENDP,
		VPP_VSC_START_PHASE_STEP,
		VPP_VSC_REGION1_PHASE_SLOPE,
		VPP_VSC_REGION3_PHASE_SLOPE,
		VPP_VSC_PHASE_CTRL,
		VPP_VSC_INI_PHASE,
		VPP_HSC_REGION12_STARTP,
		VPP_HSC_REGION34_STARTP,
		VPP_HSC_REGION4_ENDP,
		VPP_HSC_START_PHASE_STEP,
		VPP_HSC_REGION1_PHASE_SLOPE,
		VPP_HSC_REGION3_PHASE_SLOPE,
		VPP_HSC_PHASE_CTRL,
		VPP_SC_MISC,
		VPP_HSC_PHASE_CTRL1,
		VPP_PREHSC_COEF,
		VPP_PRE_SCALE_CTRL,
		VPP_PREVSC_COEF,
		VPP_PREHSC_COEF1,
	},
	{
		VD2_SCALE_COEF_IDX_T7,
		VD2_SCALE_COEF_T7,
		VD2_VSC_REGION12_STARTP_T7,
		VD2_VSC_REGION34_STARTP_T7,
		VD2_VSC_REGION4_ENDP_T7,
		VD2_VSC_START_PHASE_STEP_T7,
		VD2_VSC_REGION1_PHASE_SLOPE_T7,
		VD2_VSC_REGION3_PHASE_SLOPE_T7,
		VD2_VSC_PHASE_CTRL_T7,
		VD2_VSC_INI_PHASE_T7,
		VD2_HSC_REGION12_STARTP_T7,
		VD2_HSC_REGION34_STARTP_T7,
		VD2_HSC_REGION4_ENDP_T7,
		VD2_HSC_START_PHASE_STEP_T7,
		VD2_HSC_REGION1_PHASE_SLOPE_T7,
		VD2_HSC_REGION3_PHASE_SLOPE_T7,
		VD2_HSC_PHASE_CTRL_T7,
		VD2_SC_MISC_T7,
		VD2_HSC_PHASE_CTRL1_T7,
		VD2_PREHSC_COEF_T7,
		VD2_PRE_SCALE_CTRL_T7,
		VD2_PREVSC_COEF_T7,
		VD2_PREHSC_COEF1_T7,

	},
	{
		VD3_SCALE_COEF_IDX,
		VD3_SCALE_COEF,
		VD3_VSC_REGION12_STARTP,
		VD3_VSC_REGION34_STARTP,
		VD3_VSC_REGION4_ENDP,
		VD3_VSC_START_PHASE_STEP,
		VD3_VSC_REGION1_PHASE_SLOPE,
		VD3_VSC_REGION3_PHASE_SLOPE,
		VD3_VSC_PHASE_CTRL,
		VD3_VSC_INI_PHASE,
		VD3_HSC_REGION12_STARTP,
		VD3_HSC_REGION34_STARTP,
		VD3_HSC_REGION4_ENDP,
		VD3_HSC_START_PHASE_STEP,
		VD3_HSC_REGION1_PHASE_SLOPE,
		VD3_HSC_REGION3_PHASE_SLOPE,
		VD3_HSC_PHASE_CTRL,
		VD3_SC_MISC,
		VD3_HSC_PHASE_CTRL1,
		VD3_PREHSC_COEF,
		VD3_PRE_SCALE_CTRL,
		VD3_PREVSC_COEF,
		VD3_PREHSC_COEF1,
	},
	{
		SCHN_SCALE_COEF_IDX,
		SCHN_SCALE_COEF,
		SCHN_VSC_REGION12_STARTP,
		SCHN_VSC_REGION34_STARTP,
		SCHN_VSC_REGION4_ENDP,
		SCHN_VSC_START_PHASE_STEP,
		SCHN_VSC_REGION1_PHASE_SLOPE,
		SCHN_VSC_REGION3_PHASE_SLOPE,
		SCHN_VSC_PHASE_CTRL,
		SCHN_VSC_INI_PHASE,
		SCHN_HSC_REGION12_STARTP,
		SCHN_HSC_REGION34_STARTP,
		SCHN_HSC_REGION4_ENDP,
		SCHN_HSC_START_PHASE_STEP,
		SCHN_HSC_REGION1_PHASE_SLOPE,
		SCHN_HSC_REGION3_PHASE_SLOPE,
		SCHN_HSC_PHASE_CTRL,
		SCHN_SC_MISC,
		SCHN_HSC_PHASE_CTRL1,
		SCHN_PREHSC_COEF,
		SCHN_PRE_SCALE_CTRL,
		SCHN_PREVSC_COEF,
		SCHN_PREHSC_COEF1,
	},
};

struct hw_vpp_blend_reg_s vpp_blend_reg_array[MAX_VD_LAYER_G12] = {
	{
		VPP_PREBLEND_VD1_H_START_END,
		VPP_PREBLEND_VD1_V_START_END,
		VPP_PREBLEND_H_SIZE,
		VPP_POSTBLEND_VD1_H_START_END,
		VPP_POSTBLEND_VD1_V_START_END,
		VD1_PIP_ALPH_CTRL,
		VD1_PIP_ALPH_SCP_H_0,
		VD1_PIP_ALPH_SCP_V_0,
	},
	{
		VPP_PREBLEND_VD1_H_START_END,
		VPP_PREBLEND_VD1_V_START_END,
		VPP_PREBLEND_H_SIZE,
		VPP_BLEND_VD2_H_START_END,
		VPP_BLEND_VD2_V_START_END,
		VD2_PIP_ALPH_CTRL,
		VD2_PIP_ALPH_SCP_H_0,
		VD2_PIP_ALPH_SCP_V_0,
	},
};

struct hw_vpp_blend_reg_s vpp_blend_reg_t7_array[MAX_VD_LAYER_T7] = {
	{
		VPP_PREBLEND_VD1_H_START_END,
		VPP_PREBLEND_VD1_V_START_END,
		VPP_PREBLEND_H_SIZE,
		VPP_POSTBLEND_VD1_H_START_END,
		VPP_POSTBLEND_VD1_V_START_END,
		VD1_PIP_ALPH_CTRL,
		VD1_PIP_ALPH_SCP_H_0,
		VD1_PIP_ALPH_SCP_V_0,
	},
	{
		VPP_PREBLEND_VD1_H_START_END,
		VPP_PREBLEND_VD1_V_START_END,
		VPP_PREBLEND_H_SIZE,
		VPP_BLEND_VD2_H_START_END,
		VPP_BLEND_VD2_V_START_END,
		VD2_PIP_ALPH_CTRL,
		VD2_PIP_ALPH_SCP_H_0,
		VD2_PIP_ALPH_SCP_V_0,
	},
	{
		VPP_PREBLEND_VD1_H_START_END,
		VPP_PREBLEND_VD1_V_START_END,
		VPP_PREBLEND_H_SIZE,
		VPP_BLEND_VD3_H_START_END,
		VPP_BLEND_VD3_V_START_END,
		VD3_PIP_ALPH_CTRL,
		VD3_PIP_ALPH_SCP_H_0,
		VD3_PIP_ALPH_SCP_V_0,
	},
};

struct hw_vppx_blend_reg_s vppx_blend_reg_array[MAX_VPP_NUM - 1] = {
	{
		VPP1_BLD_DIN0_HSCOPE,
		VPP1_BLD_DIN0_VSCOPE,
		VPP1_BLD_OUT_SIZE,
		VPP1_BLD_CTRL,
		VPP1_BLEND_BLEND_DUMMY_DATA,
		VPP1_BLEND_DUMMY_ALPHA,
	},
	{
		VPP2_BLD_DIN0_HSCOPE,
		VPP2_BLD_DIN0_VSCOPE,
		VPP2_BLD_OUT_SIZE,
		VPP2_BLD_CTRL,
		VPP2_BLEND_BLEND_DUMMY_DATA,
		VPP2_BLEND_DUMMY_ALPHA,
	},
};

struct hw_viu_misc_reg_s viu_misc_reg = {
	MALI_AFBCD_TOP_CTRL,
	MALI_AFBCD1_TOP_CTRL,
	MALI_AFBCD2_TOP_CTRL,
	VPP_VD1_DSC_CTRL,
	VPP_VD2_DSC_CTRL,
	VPP_VD3_DSC_CTRL,
	VD_PATH_MISC_CTRL,
	PATH_START_SEL,
	VPP_MISC,
	VPP_MISC1,
	VPP_VD1_CLIP_MISC0,
	VPP_VD1_CLIP_MISC1,
	VPP_VD2_CLIP_MISC0,
	VPP_VD2_CLIP_MISC1,
	VPP_VD3_CLIP_MISC0,
	VPP_VD3_CLIP_MISC1,
};

struct hw_vpp_path_size_s vpp_path_size_reg = {
	VD1_HDR_IN_SIZE,
	VD2_HDR_IN_SIZE,
	VD3_HDR_IN_SIZE,
	/* pps in size */
	VPP_LINE_IN_LENGTH,
	VPP_PIC_IN_HEIGHT,
	/* pps out scope */
	VPP_HSC_REGION34_STARTP,
	VPP_HSC_REGION4_ENDP,
	VPP_VSC_REGION34_STARTP,
	VPP_VSC_REGION4_ENDP,
	VD2_HSC_REGION34_STARTP_T7,
	VD2_HSC_REGION4_ENDP_T7,
	VD2_VSC_REGION34_STARTP_T7,
	VD2_VSC_REGION4_ENDP_T7,
	VD3_HSC_REGION34_STARTP,
	VD3_HSC_REGION4_ENDP,
	VD3_VSC_REGION34_STARTP,
	VD3_VSC_REGION4_ENDP,
	/* pre_blend */
	VPP_PREBLEND_H_SIZE,
	VPP_PREBLEND_VD1_H_START_END,
	VPP_PREBLEND_VD1_V_START_END,
	VPP_VE_H_V_SIZE,
	VPP_POSTBLEND_H_SIZE,
	VPP_OUT_H_V_SIZE,
	VPP_POSTBLEND_VD1_H_START_END,
	VPP_POSTBLEND_VD1_V_START_END,
	VPP_BLEND_VD2_H_START_END,
	VPP_BLEND_VD2_V_START_END,
	VPP_BLEND_VD3_H_START_END,
	VPP_BLEND_VD3_V_START_END,
};

struct hw_aisr_reshape_reg_s aisr_reshape_reg = {
	AISR_RESHAP_CTRL0,
	AISR_RESHAP_CTRL1,
	AISR_RESHAP_SCOPE_X,
	AISR_RESHAP_SCOPE_Y,
	AISR_RESHAP_BADDR00,
	AISR_RESHAP_BADDR01,
	AISR_RESHAP_BADDR02,
	AISR_RESHAP_BADDR03,
	AISR_RESHAP_BADDR10,
	AISR_RESHAP_BADDR11,
	AISR_RESHAP_BADDR12,
	AISR_RESHAP_BADDR13,
	AISR_RESHAP_BADDR20,
	AISR_RESHAP_BADDR21,
	AISR_RESHAP_BADDR22,
	AISR_RESHAP_BADDR23,
	AISR_RESHAP_BADDR30,
	AISR_RESHAP_BADDR31,
	AISR_RESHAP_BADDR32,
	AISR_RESHAP_BADDR33,
	AISR_POST_CTRL,
	AISR_POST_SIZE,
	SRSHARP1_NN_POST_TOP,
};

