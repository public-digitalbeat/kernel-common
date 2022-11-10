/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2021 Amlogic, Inc. All rights reserved.
 */

#ifndef __VPP_PQ_TABLE_H__
#define __VPP_PQ_TABLE_H__

#define PAGE_REG_COUNT_MAX (256)
#define PAGE_TBL_COUNT_MAX (1)/*(100)*/
#define MASK_COUNT_MAX (256)

enum vpp_page_module_e {
	EN_PAGE_MODULE_SR_0 = 0,
	EN_PAGE_MODULE_SR_1,
	EN_PAGE_MODULE_LC,
	EN_PAGE_MODULE_MAX,
};

struct vpp_pq_reg_s {
	unsigned char addr;      /*Register address*/
	unsigned char mask_type; /*Mask type*/
	unsigned char update;    /*Update flag*/
	unsigned int  val;       /*Register value*/
};

struct vpp_pq_page_s {
	struct vpp_pq_reg_s reg[PAGE_REG_COUNT_MAX];
};

struct vpp_pq_table_s {
	unsigned char page_addr; /*Page address*/
	unsigned char count;     /*Count of total reg*/
	struct vpp_pq_page_s page[PAGE_TBL_COUNT_MAX]; /*Table selected by top layer*/
};

unsigned int mask_list[] = {
	0x00000000,
	0xffffffff,
	0x00000330,
	0x000f00ff,
};

struct vpp_pq_table_s pq_table[EN_PAGE_MODULE_MAX] = {
	/*sharpness0 reg*/
	{
		0x50, 94,
		{/*index 0*/
			{
				{
					{0x00, 0, 1, 0x02d00240},
					{0x01, 0, 1, 0x00082060},
					{0x02, 0, 1, 0x00000010},
					{0x05, 0, 1, 0x14323218},
					{0x06, 0, 1, 0x50845e00},
					{0x07, 0, 1, 0x14323218},
					{0x08, 0, 1, 0x508d5000},
					{0x09, 0, 1, 0x14323218},
					{0x0a, 0, 1, 0x3d3d1f00},
					{0x0b, 0, 1, 0x14323218},
					{0x0c, 0, 1, 0x38390c00},
					{0x0d, 0, 1, 0x22202220},
					{0x0e, 0, 1, 0x22202220},
					{0x0f, 0, 1, 0x00020202},
					{0x10, 0, 1, 0x00020202},
					{0x11, 0, 1, 0x00020202},
					{0x12, 0, 1, 0x00020202},
					{0x13, 0, 1, 0x38402840},
					{0x14, 0, 1, 0x0000103e},
					{0x15, 0, 1, 0x0a195040},
					{0x16, 0, 1, 0x3f003f00},
					{0x17, 0, 1, 0x0a195040},
					{0x18, 0, 1, 0x3f003f00},
					{0x19, 0, 1, 0x003f003f},
					{0x1a, 0, 1, 0x00000003},
					{0x1b, 0, 1, 0x00180014},
					{0x1c, 0, 1, 0x00103f00},
					{0x1d, 0, 1, 0x003f003f},
					{0x1e, 0, 1, 0x00010001},
					{0x1f, 0, 1, 0x0018000a},
					{0x20, 0, 1, 0x00402000},
					{0x21, 0, 1, 0x0000003f},
					{0x22, 0, 1, 0x00001414},
					{0x23, 0, 1, 0x08140214},
					{0x24, 0, 1, 0x08140214},
					{0x25, 0, 1, 0x2806c814},
					{0x26, 0, 1, 0x2203f03f},
					{0x27, 0, 1, 0x00000000},
					{0x28, 0, 1, 0x12120018},
					{0x29, 0, 1, 0x00000407},
					{0x2a, 0, 1, 0x0a00003f},
					{0x2b, 0, 1, 0x0400003f},
					{0x2c, 0, 1, 0x0c0c0c0c},
					{0x2d, 0, 1, 0x56ee0000},
					{0x2e, 0, 1, 0x05555300},
					{0x2f, 0, 1, 0x050a0a00},
					{0x30, 0, 1, 0x03030303},
					{0x31, 0, 1, 0x24193c05},
					{0x32, 0, 1, 0x4b055014},
					{0x33, 0, 1, 0x00000000},
					{0x34, 0, 1, 0x00152100},
					{0x35, 0, 1, 0x06060600},
					{0x36, 0, 1, 0x03030303},
					{0x37, 0, 1, 0x24193c05},
					{0x38, 0, 1, 0x66635e24},
					{0x39, 0, 1, 0x00000000},
					{0x3a, 0, 1, 0x00002a94},
					{0x3b, 0, 1, 0x00202020},
					{0x3c, 0, 1, 0x00050503},
					{0x3d, 0, 1, 0x193c0560},
					{0x3e, 0, 1, 0x5f501400},
					{0x3f, 0, 1, 0x00002a94},
					{0x40, 0, 1, 0x00101010},
					{0x41, 0, 1, 0x00050503},
					{0x42, 0, 1, 0x193c0560},
					{0x43, 0, 1, 0x5f501400},
					{0x44, 0, 1, 0x03c0021c},
					{0x61, 0, 1, 0x060606ff},
					{0x62, 0, 1, 0x00000ffc},
					{0x63, 0, 1, 0x112020cc},
					{0x66, 0, 1, 0x00000000},
					{0x67, 0, 1, 0x0405050c},
					{0x68, 0, 1, 0x01040708},
					{0x69, 0, 1, 0x00000000},
					{0x6a, 0, 1, 0x000e000e},
					{0x6b, 0, 1, 0x0392281c},
					{0x6c, 0, 1, 0xffffc81e},
					{0x6d, 0, 1, 0x001832ff},
					{0x6e, 0, 1, 0xffffc81e},
					{0x6f, 0, 1, 0x001832ff},
					{0x70, 0, 1, 0x00000048},
					{0x71, 0, 1, 0xffffec20},
					{0x72, 0, 1, 0x000a2010},
					{0x73, 0, 1, 0xfec96420},
					{0x77, 0, 1, 0x000222ca},
					{0x78, 0, 1, 0x97659765},
					{0x79, 0, 1, 0x00249249},
					{0x7a, 0, 1, 0x00000000},
					{0x7b, 0, 1, 0x60a52f20},
					{0x7c, 0, 1, 0x60a52f27},
					{0x7d, 0, 1, 0x60a52f22},
					{0x7e, 0, 1, 0x56667ac8},
					{0x7f, 0, 1, 0x00000004},
				},
			},
		},
	},
	/*sharpness1 reg*/
	{
		0x52, 109,
		{/*index 0*/
			{
				{
					{0x00, 0, 1, 0x02d00240},
					{0x01, 0, 1, 0x0008143c},
					{0x02, 0, 1, 0x00000010},
					{0x05, 0, 1, 0x14323218},
					{0x06, 0, 1, 0x50845e00},
					{0x07, 0, 1, 0x14323218},
					{0x08, 0, 1, 0x508d5000},
					{0x09, 0, 1, 0x14323218},
					{0x0a, 0, 1, 0x3d3d1f00},
					{0x0b, 0, 1, 0x14323218},
					{0x0c, 0, 1, 0x38390c00},
					{0x0d, 0, 1, 0x22202220},
					{0x0e, 0, 1, 0x22202220},
					{0x0f, 0, 1, 0x00020202},
					{0x10, 0, 1, 0x00020202},
					{0x11, 0, 1, 0x00020202},
					{0x12, 0, 1, 0x00020202},
					{0x13, 0, 1, 0x38402840},
					{0x14, 0, 1, 0x0000103e},
					{0x15, 0, 1, 0x0a195040},
					{0x16, 0, 1, 0x3f003f00},
					{0x17, 0, 1, 0x0a195040},
					{0x18, 0, 1, 0x3f003f00},
					{0x19, 0, 1, 0x003f003f},
					{0x1a, 0, 1, 0x00000003},
					{0x1b, 0, 1, 0x00180014},
					{0x1c, 0, 1, 0x00103f00},
					{0x1d, 0, 1, 0x003f003f},
					{0x1e, 0, 1, 0x00010001},
					{0x1f, 0, 1, 0x0018000a},
					{0x20, 0, 1, 0x00402000},
					{0x21, 0, 1, 0x0000003f},
					{0x22, 0, 1, 0x00001414},
					{0x23, 0, 1, 0x08140214},
					{0x24, 0, 1, 0x08140214},
					{0x25, 0, 1, 0x2806c814},
					{0x26, 0, 1, 0x2203f03f},
					{0x27, 0, 1, 0x00000000},
					{0x28, 0, 1, 0x12120018},
					{0x29, 0, 1, 0x00000407},
					{0x2a, 0, 1, 0x0a00003f},
					{0x2b, 0, 1, 0x0400003f},
					{0x2c, 0, 1, 0x0c0c0c0c},
					{0x2d, 0, 1, 0x56ee0000},
					{0x2e, 0, 1, 0x05555300},
					{0x2f, 0, 1, 0x050a0a00},
					{0x30, 0, 1, 0x03030303},
					{0x31, 0, 1, 0x24193c05},
					{0x32, 0, 1, 0x4b055014},
					{0x33, 0, 1, 0x00000000},
					{0x34, 0, 1, 0x00152100},
					{0x35, 0, 1, 0x06060600},
					{0x36, 0, 1, 0x03030303},
					{0x37, 0, 1, 0x24193c05},
					{0x38, 0, 1, 0x66635e24},
					{0x39, 0, 1, 0x00000000},
					{0x3a, 0, 1, 0x00002a94},
					{0x3b, 0, 1, 0x00202020},
					{0x3c, 0, 1, 0x00050503},
					{0x3d, 0, 1, 0x193c0560},
					{0x3e, 0, 1, 0x5f501400},
					{0x3f, 0, 1, 0x00002a94},
					{0x40, 0, 1, 0x00101010},
					{0x41, 0, 1, 0x00050503},
					{0x42, 0, 1, 0x193c0560},
					{0x43, 0, 1, 0x5f501400},
					{0x44, 0, 1, 0x03c0021c},
					{0x58, 0, 1, 0x00004000},
					{0x59, 0, 1, 0xfc2424fc},
					{0x5a, 0, 1, 0x00004000},
					{0x5b, 0, 1, 0xfc2424fc},
					{0x5c, 0, 1, 0x00004000},
					{0x5d, 0, 1, 0xfc2424fc},
					{0x5e, 0, 1, 0x00004000},
					{0x5f, 0, 1, 0xfc2424fc},
					{0x60, 0, 1, 0x00000000},
					{0x61, 0, 1, 0x060606ff},
					{0x62, 0, 1, 0x00000ffc},
					{0x63, 0, 1, 0x112020cc},
					{0x64, 0, 1, 0x0000000f},
					{0x65, 0, 1, 0x0f0f4646},
					{0x66, 0, 1, 0x00000000},
					{0x67, 0, 1, 0x0405050c},
					{0x68, 0, 1, 0x01040708},
					{0x69, 0, 1, 0x00000000},
					{0x6a, 0, 1, 0x000e000e},
					{0x6b, 0, 1, 0x0392281c},
					{0x6c, 0, 1, 0xffffc81e},
					{0x6d, 0, 1, 0x001832ff},
					{0x6e, 0, 1, 0xffffc81e},
					{0x6f, 0, 1, 0x001832ff},
					{0x70, 0, 1, 0x00000048},
					{0x71, 0, 1, 0xffffec20},
					{0x72, 0, 1, 0x000a2010},
					{0x73, 0, 1, 0xfec96420},
					{0x74, 0, 1, 0x00054006},
					{0x75, 0, 1, 0x00808080},
					{0x77, 0, 1, 0x000222ca},
					{0x78, 0, 1, 0x97659765},
					{0x79, 0, 1, 0x00249249},
					{0x7a, 0, 1, 0x00000000},
					{0x7b, 0, 1, 0x60a52f20},
					{0x7c, 0, 1, 0x60a52f27},
					{0x7d, 0, 1, 0x60a52f22},
					{0x7e, 0, 1, 0x56667ac8},
					{0x7f, 0, 1, 0x00000004},
					{0x80, 0, 1, 0x56667ac8},
					{0x81, 0, 1, 0x00000004},
				},
			},
		},
	},
	/*local contrast reg*/
	{
		0x40, 8,
		{/*index 0*/
			{
				{
					{0x00, 0, 2, 0x00000110},
					{0x02, 0, 1, 0x00000614},
					{0x03, 0, 1, 0x00100018},
					{0x04, 0, 1, 0x0a14ffff},
					{0x05, 0, 1, 0x00004020},
					{0x06, 0, 1, 0x00002020},
					{0x07, 0, 3, 0x00010038},
					{0x09, 0, 1, 0x00000c60},
				},
			},
		},
	},
};

#endif
