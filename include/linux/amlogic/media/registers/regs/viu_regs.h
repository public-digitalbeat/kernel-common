/* SPDX-License-Identifier: (GPL-2.0+ OR MIT) */
/*
 * Copyright (c) 2019 Amlogic, Inc. All rights reserved.
 */

#ifndef VIU_REGS_HEADER_
#define VIU_REGS_HEADER_

#define VIU_ADDR_START              0x1a00
#define VIU_ADDR_END                0x1aff
#define VIU_SW_RESET                0x1a01
#define VIU_MISC_CTRL0              0x1a06
#define VIU_MISC_CTRL1              0x1a07
#define D2D3_INTF_LENGTH            0x1a08
#define D2D3_INTF_CTRL0             0x1a09
#define DOLBY_PATH_CTRL             0x1a0c
#define VIU_OSD1_CTRL_STAT          0x1a10
#define VIU_OSD1_CTRL_STAT2         0x1a2d
#define VIU_OSD1_COLOR_ADDR         0x1a11
#define VIU_OSD1_COLOR              0x1a12
#define VIU_OSD1_TCOLOR_AG0         0x1a17
#define VIU_OSD1_TCOLOR_AG1         0x1a18
#define VIU_OSD1_TCOLOR_AG2         0x1a19
#define VIU_OSD1_TCOLOR_AG3         0x1a1a
#define VIU_OSD1_BLK0_CFG_W0        0x1a1b
#define VIU_OSD1_BLK1_CFG_W0        0x1a1f
#define VIU_OSD1_BLK2_CFG_W0        0x1a23
#define VIU_OSD1_BLK3_CFG_W0        0x1a27
#define VIU_OSD1_BLK0_CFG_W1        0x1a1c
#define VIU_OSD1_BLK1_CFG_W1        0x1a20
#define VIU_OSD1_BLK2_CFG_W1        0x1a24
#define VIU_OSD1_BLK3_CFG_W1        0x1a28
#define VIU_OSD1_BLK0_CFG_W2        0x1a1d
#define VIU_OSD1_BLK1_CFG_W2        0x1a21
#define VIU_OSD1_BLK2_CFG_W2        0x1a25
#define VIU_OSD1_BLK3_CFG_W2        0x1a29
#define VIU_OSD1_BLK0_CFG_W3        0x1a1e
#define VIU_OSD1_BLK1_CFG_W3        0x1a22
#define VIU_OSD1_BLK2_CFG_W3        0x1a26
#define VIU_OSD1_BLK3_CFG_W3        0x1a2a
#define VIU_OSD1_BLK0_CFG_W4        0x1a13
#define VIU_OSD1_BLK1_CFG_W4        0x1a14
#define VIU_OSD1_BLK2_CFG_W4        0x1a15
#define VIU_OSD1_BLK3_CFG_W4        0x1a16
#define VIU_OSD1_FIFO_CTRL_STAT     0x1a2b
#define VIU_OSD1_TEST_RDDATA        0x1a2c
#define VIU_OSD1_PROT_CTRL          0x1a2e
#define VIU_OSD2_CTRL_STAT          0x1a30
#define VIU_OSD2_CTRL_STAT2         0x1a4d
#define VIU_OSD2_COLOR_ADDR         0x1a31
#define VIU_OSD2_COLOR              0x1a32
#define VIU_OSD2_HL1_H_START_END    0x1a33
#define VIU_OSD2_HL1_V_START_END    0x1a34
#define VIU_OSD2_HL2_H_START_END    0x1a35
#define VIU_OSD2_HL2_V_START_END    0x1a36
#define VIU_OSD2_TCOLOR_AG0         0x1a37
#define VIU_OSD2_TCOLOR_AG1         0x1a38
#define VIU_OSD2_TCOLOR_AG2         0x1a39
#define VIU_OSD2_TCOLOR_AG3         0x1a3a
#define VIU_OSD2_BLK0_CFG_W0        0x1a3b
#define VIU_OSD2_BLK1_CFG_W0        0x1a3f
#define VIU_OSD2_BLK2_CFG_W0        0x1a43
#define VIU_OSD2_BLK3_CFG_W0        0x1a47
#define VIU_OSD2_BLK0_CFG_W1        0x1a3c
#define VIU_OSD2_BLK1_CFG_W1        0x1a40
#define VIU_OSD2_BLK2_CFG_W1        0x1a44
#define VIU_OSD2_BLK3_CFG_W1        0x1a48
#define VIU_OSD2_BLK0_CFG_W2        0x1a3d
#define VIU_OSD2_BLK1_CFG_W2        0x1a41
#define VIU_OSD2_BLK2_CFG_W2        0x1a45
#define VIU_OSD2_BLK3_CFG_W2        0x1a49
#define VIU_OSD2_BLK0_CFG_W3        0x1a3e
#define VIU_OSD2_BLK1_CFG_W3        0x1a42
#define VIU_OSD2_BLK2_CFG_W3        0x1a46
#define VIU_OSD2_BLK3_CFG_W3        0x1a4a
#define VIU_OSD2_BLK0_CFG_W4        0x1a64
#define VIU_OSD2_BLK1_CFG_W4        0x1a65
#define VIU_OSD2_BLK2_CFG_W4        0x1a66
#define VIU_OSD2_BLK3_CFG_W4        0x1a67
#define VIU_OSD2_FIFO_CTRL_STAT     0x1a4b
#define VIU_OSD2_TEST_RDDATA        0x1a4c
#define VIU_OSD2_PROT_CTRL          0x1a4e

#define VIU_DATA_SEC                0x1a50
#define VPU_SEC_INT_STAT            0x1a8f

#define VD1_IF0_GEN_REG             0x1a50
#define VD1_IF0_CANVAS0             0x1a51
#define VD1_IF0_CANVAS1             0x1a52
#define VD1_IF0_LUMA_X0             0x1a53
#define VD1_IF0_LUMA_Y0             0x1a54
#define VD1_IF0_CHROMA_X0           0x1a55
#define VD1_IF0_CHROMA_Y0           0x1a56
#define VD1_IF0_LUMA_X1             0x1a57
#define VD1_IF0_LUMA_Y1             0x1a58
#define VD1_IF0_CHROMA_X1           0x1a59
#define VD1_IF0_CHROMA_Y1           0x1a5a
#define VD1_IF0_RPT_LOOP            0x1a5b
#define VD1_IF0_LUMA0_RPT_PAT       0x1a5c
#define VD1_IF0_CHROMA0_RPT_PAT     0x1a5d
#define VD1_IF0_LUMA1_RPT_PAT       0x1a5e
#define VD1_IF0_CHROMA1_RPT_PAT     0x1a5f
#define VD1_IF0_LUMA_PSEL           0x1a60
#define VD1_IF0_CHROMA_PSEL         0x1a61
#define VD1_IF0_DUMMY_PIXEL         0x1a62
#define VD1_IF0_LUMA_FIFO_SIZE      0x1a63
#define VD1_IF0_RANGE_MAP_Y         0x1a6a
#define VD1_IF0_RANGE_MAP_CB        0x1a6b
#define VD1_IF0_RANGE_MAP_CR        0x1a6c
#define VD1_IF0_GEN_REG2            0x1a6d
#define VD1_IF0_PROT_CNTL           0x1a6e
#define VIU_VD1_FMT_CTRL            0x1a68
#define VIU_VD1_FMT_W               0x1a69
#define VD2_IF0_GEN_REG             0x1a70
#define VD2_IF0_CANVAS0             0x1a71
#define VD2_IF0_CANVAS1             0x1a72
#define VD2_IF0_LUMA_X0             0x1a73
#define VD2_IF0_LUMA_Y0             0x1a74
#define VD2_IF0_CHROMA_X0           0x1a75
#define VD2_IF0_CHROMA_Y0           0x1a76
#define VD2_IF0_LUMA_X1             0x1a77
#define VD2_IF0_LUMA_Y1             0x1a78
#define VD2_IF0_CHROMA_X1           0x1a79
#define VD2_IF0_CHROMA_Y1           0x1a7a
#define VD2_IF0_RPT_LOOP            0x1a7b
#define VD2_IF0_LUMA0_RPT_PAT       0x1a7c
#define VD2_IF0_CHROMA0_RPT_PAT     0x1a7d
#define VD2_IF0_LUMA1_RPT_PAT       0x1a7e
#define VD2_IF0_CHROMA1_RPT_PAT     0x1a7f
#define VD2_IF0_LUMA_PSEL           0x1a80
#define VD2_IF0_CHROMA_PSEL         0x1a81
#define VD2_IF0_DUMMY_PIXEL         0x1a82
#define VD2_IF0_LUMA_FIFO_SIZE      0x1a83
#define VD2_IF0_RANGE_MAP_Y         0x1a8a
#define VD2_IF0_RANGE_MAP_CB        0x1a8b
#define VD2_IF0_RANGE_MAP_CR        0x1a8c
#define VD2_IF0_GEN_REG2            0x1a8d
#define VD2_IF0_PROT_CNTL           0x1a8e
#define VIU_VD2_FMT_CTRL            0x1a88
#define VIU_VD2_FMT_W               0x1a89
#define AFBC_ENABLE                 0x1ae0
#define AFBC_MODE                   0x1ae1
#define AFBC_SIZE_IN                0x1ae2
#define AFBC_DEC_DEF_COLOR          0x1ae3
#define AFBC_CONV_CTRL              0x1ae4
#define AFBC_LBUF_DEPTH             0x1ae5
#define AFBC_HEAD_BADDR             0x1ae6
#define AFBC_BODY_BADDR             0x1ae7
#define AFBC_SIZE_OUT               0x1ae8
#define AFBC_OUT_YSCOPE             0x1ae9
#define AFBC_STAT                   0x1aea
#define AFBC_VD_CFMT_CTRL           0x1aeb
#define AFBC_VD_CFMT_W              0x1aec
#define AFBC_MIF_HOR_SCOPE          0x1aed
#define AFBC_MIF_VER_SCOPE          0x1aee
#define AFBC_PIXEL_HOR_SCOPE        0x1aef
#define AFBC_PIXEL_VER_SCOPE        0x1af0
#define AFBC_VD_CFMT_H              0x1af1
#define VD2_AFBC_ENABLE             0x3180
#define VD2_AFBC_MODE               0x3181
#define VD2_AFBC_SIZE_IN            0x3182
#define VD2_AFBC_DEC_DEF_COLOR      0x3183
#define VD2_AFBC_CONV_CTRL          0x3184
#define VD2_AFBC_LBUF_DEPTH         0x3185
#define VD2_AFBC_HEAD_BADDR         0x3186
#define VD2_AFBC_BODY_BADDR         0x3187
#define VD2_AFBC_SIZE_OUT           0x3188
#define VD2_AFBC_OUT_XSCOPE         0x3188
#define VD2_AFBC_OUT_YSCOPE         0x3189
#define VD2_AFBC_STAT               0x318a
#define VD2_AFBC_VD_CFMT_CTRL       0x318b
#define VD2_AFBC_VD_CFMT_W          0x318c
#define VD2_AFBC_MIF_HOR_SCOPE      0x318d
#define VD2_AFBC_MIF_VER_SCOPE      0x318e
#define VD2_AFBC_PIXEL_HOR_SCOPE    0x318f
#define VD2_AFBC_PIXEL_VER_SCOPE    0x3190
#define VD2_AFBC_VD_CFMT_H          0x3191

#define VD2_IF0_GEN_REG3            0x1aa8

#define VD1_AFBCD0_MISC_CTRL        0x1a0a
#define VD2_AFBCD1_MISC_CTRL        0x1a0b

/* TL1 */
#define AFBCDEC_IQUANT_ENABLE       0x1af2
#define AFBCDEC_IQUANT_LUT_1        0x1af3
#define AFBCDEC_IQUANT_LUT_2        0x1af4
#define AFBCDEC_IQUANT_LUT_3        0x1af5
#define AFBCDEC_IQUANT_LUT_4        0x1af6

#define VD2_AFBCDEC_IQUANT_ENABLE   0x3192
#define VD2_AFBCDEC_IQUANT_LUT_1    0x3193
#define VD2_AFBCDEC_IQUANT_LUT_2    0x3194
#define VD2_AFBCDEC_IQUANT_LUT_3    0x3195
#define VD2_AFBCDEC_IQUANT_LUT_4    0x3196
/* sc2 afbc reg*/
#define SC2_AFBC_ENABLE 0x4840
#define SC2_AFBC_MODE 0x4841
#define SC2_AFBC_SIZE_IN 0x4842
#define SC2_AFBC_DEC_DEF_COLOR 0x4843
#define SC2_AFBC_CONV_CTRL 0x4844
#define SC2_AFBC_LBUF_DEPTH 0x4845
#define SC2_AFBC_HEAD_BADDR 0x4846
#define SC2_AFBC_BODY_BADDR 0x4847
#define SC2_AFBC_SIZE_OUT     0x4848
#define SC2_AFBC_OUT_YSCOPE 0x4849
#define SC2_AFBC_STAT 0x484a
#define SC2_AFBC_VD_CFMT_CTRL 0x484b
#define SC2_AFBC_VD_CFMT_W 0x484c
#define SC2_AFBC_MIF_HOR_SCOPE 0x484d
#define SC2_AFBC_MIF_VER_SCOPE 0x484e
#define SC2_AFBC_PIXEL_HOR_SCOPE 0x484f
#define SC2_AFBC_PIXEL_VER_SCOPE 0x4850
#define SC2_AFBC_VD_CFMT_H 0x4851
#define SC2_AFBCDEC_IQUANT_ENABLE 0x4852
#define SC2_AFBCDEC_IQUANT_LUT_1 0x4853
#define SC2_AFBCDEC_IQUANT_LUT_2 0x4854
#define SC2_AFBCDEC_IQUANT_LUT_3 0x4855
#define SC2_AFBCDEC_IQUANT_LUT_4 0x4856

#define SC2_VD2_AFBC_ENABLE 0x48c0
#define SC2_VD2_AFBC_MODE  0x48c1
#define SC2_VD2_AFBC_SIZE_IN 0x48c2
#define SC2_VD2_AFBC_DEC_DEF_COLOR 0x48c3
#define SC2_VD2_AFBC_CONV_CTRL 0x48c4
#define SC2_VD2_AFBC_LBUF_DEPTH 0x48c5
#define SC2_VD2_AFBC_HEAD_BADDR 0x48c6
#define SC2_VD2_AFBC_BODY_BADDR 0x48c7
#define SC2_VD2_AFBC_SIZE_OUT   0x48c8
#define SC2_VD2_AFBC_OUT_XSCOPE 0x48c8
#define SC2_VD2_AFBC_OUT_YSCOPE 0x48c9
#define SC2_VD2_AFBC_STAT 0x48ca
#define SC2_VD2_AFBC_VD_CFMT_CTRL 0x48cb
#define SC2_VD2_AFBC_VD_CFMT_W 0x48cc
#define SC2_VD2_AFBC_MIF_HOR_SCOPE  0x48cd
#define SC2_VD2_AFBC_MIF_VER_SCOPE 0x48ce
#define SC2_VD2_AFBC_PIXEL_HOR_SCOPE 0x48cf
#define SC2_VD2_AFBC_PIXEL_VER_SCOPE 0x48d0
#define SC2_VD2_AFBC_VD_CFMT_H 0x48d1
#define SC2_VD2_AFBCDEC_IQUANT_ENABLE 0x48d2
#define SC2_VD2_AFBCDEC_IQUANT_LUT_1 0x48d3
#define SC2_VD2_AFBCDEC_IQUANT_LUT_2 0x48d4
#define SC2_VD2_AFBCDEC_IQUANT_LUT_3 0x48d5
#define SC2_VD2_AFBCDEC_IQUANT_LUT_4 0x48d6

#define VD3_AFBC_ENABLE 0x4940
#define VD3_AFBC_MODE  0x4941
#define VD3_AFBC_SIZE_IN 0x4942
#define VD3_AFBC_DEC_DEF_COLOR 0x4943
#define VD3_AFBC_CONV_CTRL 0x4944
#define VD3_AFBC_LBUF_DEPTH 0x4945
#define VD3_AFBC_HEAD_BADDR 0x4946
#define VD3_AFBC_BODY_BADDR 0x4947
#define VD3_AFBC_SIZE_OUT   0x4948
#define VD3_AFBC_OUT_XSCOPE 0x4948
#define VD3_AFBC_OUT_YSCOPE 0x4949
#define VD3_AFBC_STAT 0x494a
#define VD3_AFBC_VD_CFMT_CTRL 0x494b
#define VD3_AFBC_VD_CFMT_W 0x494c
#define VD3_AFBC_MIF_HOR_SCOPE  0x494d
#define VD3_AFBC_MIF_VER_SCOPE 0x494e
#define VD3_AFBC_PIXEL_HOR_SCOPE 0x494f
#define VD3_AFBC_PIXEL_VER_SCOPE 0x4950
#define VD3_AFBC_VD_CFMT_H 0x4951
#define VD3_AFBCDEC_IQUANT_ENABLE 0x4952
#define VD3_AFBCDEC_IQUANT_LUT_1 0x4953
#define VD3_AFBCDEC_IQUANT_LUT_2 0x4954
#define VD3_AFBCDEC_IQUANT_LUT_3 0x4955
#define VD3_AFBCDEC_IQUANT_LUT_4 0x4956

/* g12a */
#define G12_VD1_IF0_GEN_REG                            0x3200
#define G12_VD1_IF0_CANVAS0                            0x3201
#define G12_VD1_IF0_CANVAS1                            0x3202
#define G12_VD1_IF0_LUMA_X0                            0x3203
#define G12_VD1_IF0_LUMA_Y0                            0x3204
#define G12_VD1_IF0_CHROMA_X0                          0x3205
#define G12_VD1_IF0_CHROMA_Y0                          0x3206
#define G12_VD1_IF0_LUMA_X1                            0x3207
#define G12_VD1_IF0_LUMA_Y1                            0x3208
#define G12_VD1_IF0_CHROMA_X1                          0x3209
#define G12_VD1_IF0_CHROMA_Y1                          0x320a
#define G12_VD1_IF0_RPT_LOOP                           0x320b
#define G12_VD1_IF0_LUMA0_RPT_PAT                      0x320c
#define G12_VD1_IF0_CHROMA0_RPT_PAT                    0x320d
#define G12_VD1_IF0_LUMA1_RPT_PAT                      0x320e
#define G12_VD1_IF0_CHROMA1_RPT_PAT                    0x320f
#define G12_VD1_IF0_LUMA_PSEL                          0x3210
#define G12_VD1_IF0_CHROMA_PSEL                        0x3211
#define G12_VD1_IF0_DUMMY_PIXEL                        0x3212
#define G12_VD1_IF0_LUMA_FIFO_SIZE                     0x3213
#define G12_VD1_IF0_AXI_CMD_CNT                        0x3214
#define G12_VD1_IF0_AXI_RDAT_CNT                       0x3215
#define G12_VD1_IF0_GEN_REG3                           0x3216
#define G12_VIU_VD1_FMT_CTRL                           0x3218
#define G12_VIU_VD1_FMT_W                              0x3219
#define G12_VD1_IF0_RANGE_MAP_Y                        0x321a
#define G12_VD1_IF0_RANGE_MAP_CB                       0x321b
#define G12_VD1_IF0_RANGE_MAP_CR                       0x321c
#define G12_VD1_IF0_GEN_REG2                           0x321d
#define G12_VD1_IF0_PROT_CNTL                          0x321e
#define G12_VD1_IF0_URGENT_CTRL                        0x321f

#define G12_VD2_IF0_GEN_REG                            0x3220
#define G12_VD2_IF0_CANVAS0                            0x3221
#define G12_VD2_IF0_CANVAS1                            0x3222
#define G12_VD2_IF0_LUMA_X0                            0x3223
#define G12_VD2_IF0_LUMA_Y0                            0x3224
#define G12_VD2_IF0_CHROMA_X0                          0x3225
#define G12_VD2_IF0_CHROMA_Y0                          0x3226
#define G12_VD2_IF0_LUMA_X1                            0x3227
#define G12_VD2_IF0_LUMA_Y1                            0x3228
#define G12_VD2_IF0_CHROMA_X1                          0x3229
#define G12_VD2_IF0_CHROMA_Y1                          0x322a
#define G12_VD2_IF0_RPT_LOOP                           0x322b
#define G12_VD2_IF0_LUMA0_RPT_PAT                      0x322c
#define G12_VD2_IF0_CHROMA0_RPT_PAT                    0x322d
#define G12_VD2_IF0_LUMA1_RPT_PAT                      0x322e
#define G12_VD2_IF0_CHROMA1_RPT_PAT                    0x322f
#define G12_VD2_IF0_LUMA_PSEL                          0x3230
#define G12_VD2_IF0_CHROMA_PSEL                        0x3231
#define G12_VD2_IF0_DUMMY_PIXEL                        0x3232
#define G12_VD2_IF0_LUMA_FIFO_SIZE                     0x3233
#define G12_VD2_IF0_AXI_CMD_CNT                        0x3234
#define G12_VD2_IF0_AXI_RDAT_CNT                       0x3235
#define G12_VD2_IF0_GEN_REG3                           0x3236
#define G12_VIU_VD2_FMT_CTRL                           0x3238
#define G12_VIU_VD2_FMT_W                              0x3239
#define G12_VD2_IF0_RANGE_MAP_Y                        0x323a
#define G12_VD2_IF0_RANGE_MAP_CB                       0x323b
#define G12_VD2_IF0_RANGE_MAP_CR                       0x323c
#define G12_VD2_IF0_GEN_REG2                           0x323d
#define G12_VD2_IF0_PROT_CNTL                          0x323e
#define G12_VD2_IF0_URGENT_CTRL                        0x323f

/* sc2 mif reg */
#define SC2_VD1_IF0_GEN_REG                            0x4800
#define SC2_VD1_IF0_CANVAS0                            0x4801
#define SC2_VD1_IF0_CANVAS1                            0x4802
#define SC2_VD1_IF0_LUMA_X0                            0x4803
#define SC2_VD1_IF0_LUMA_Y0                            0x4804
#define SC2_VD1_IF0_CHROMA_X0                          0x4805
#define SC2_VD1_IF0_CHROMA_Y0                          0x4806
#define SC2_VD1_IF0_LUMA_X1                            0x4807
#define SC2_VD1_IF0_LUMA_Y1                            0x4808
#define SC2_VD1_IF0_CHROMA_X1                          0x4809
#define SC2_VD1_IF0_CHROMA_Y1                          0x480a
#define SC2_VD1_IF0_RPT_LOOP                           0x480b
#define SC2_VD1_IF0_LUMA0_RPT_PAT                      0x480c
#define SC2_VD1_IF0_CHROMA0_RPT_PAT                    0x480d
#define SC2_VD1_IF0_LUMA1_RPT_PAT                      0x480e
#define SC2_VD1_IF0_CHROMA1_RPT_PAT                    0x480f
#define SC2_VD1_IF0_LUMA_PSEL                          0x4810
#define SC2_VD1_IF0_CHROMA_PSEL                        0x4811
#define SC2_VD1_IF0_DUMMY_PIXEL                        0x4812
#define SC2_VD1_IF0_LUMA_FIFO_SIZE                     0x4813
#define SC2_VD1_IF0_AXI_CMD_CNT                        0x4814
#define SC2_VD1_IF0_AXI_RDAT_CNT                       0x4815
#define SC2_VD1_IF0_RANGE_MAP_Y                        0x4816
#define SC2_VD1_IF0_RANGE_MAP_CB                       0x4817
#define SC2_VD1_IF0_RANGE_MAP_CR                       0x4818
#define SC2_VD1_IF0_GEN_REG2                           0x4819
#define SC2_VD1_IF0_PROT                               0x481a
#define SC2_VD1_IF0_URGENT_CTRL                        0x481b
#define SC2_VD1_IF0_GEN_REG3                           0x481c
#define SC2_VIU_VD1_FMT_CTRL                           0x481d
#define SC2_VIU_VD1_FMT_W                              0x481e
#define VD1_IF0_BADDR_Y                                0x4820
#define VD1_IF0_BADDR_CB                               0x4821
#define VD1_IF0_BADDR_CR                               0x4822
#define VD1_IF0_STRIDE_0                               0x4823
#define VD1_IF0_STRIDE_1                               0x4824
#define VD1_IF0_BADDR_Y_F1                             0x4825
#define VD1_IF0_BADDR_CB_F1                            0x4826
#define VD1_IF0_BADDR_CR_F1                            0x4827
#define VD1_IF0_STRIDE_0_F1                            0x4828
#define VD1_IF0_STRIDE_1_F1                            0x4829

#define SC2_VD2_IF0_GEN_REG                            0x4880
#define SC2_VD2_IF0_CANVAS0                            0x4881
#define SC2_VD2_IF0_CANVAS1                            0x4882
#define SC2_VD2_IF0_LUMA_X0                            0x4883
#define SC2_VD2_IF0_LUMA_Y0                            0x4884
#define SC2_VD2_IF0_CHROMA_X0                          0x4885
#define SC2_VD2_IF0_CHROMA_Y0                          0x4886
#define SC2_VD2_IF0_LUMA_X1                            0x4887
#define SC2_VD2_IF0_LUMA_Y1                            0x4888
#define SC2_VD2_IF0_CHROMA_X1                          0x4889
#define SC2_VD2_IF0_CHROMA_Y1                          0x488a
#define SC2_VD2_IF0_RPT_LOOP                           0x488b
#define SC2_VD2_IF0_LUMA0_RPT_PAT                      0x488c
#define SC2_VD2_IF0_CHROMA0_RPT_PAT                    0x488d
#define SC2_VD2_IF0_LUMA1_RPT_PAT                      0x488e
#define SC2_VD2_IF0_CHROMA1_RPT_PAT                    0x488f
#define SC2_VD2_IF0_LUMA_PSEL                          0x4890
#define SC2_VD2_IF0_CHROMA_PSEL                        0x4891
#define SC2_VD2_IF0_DUMMY_PIXEL                        0x4892
#define SC2_VD2_IF0_LUMA_FIFO_SIZE                     0x4893
#define SC2_VD2_IF0_AXI_CMD_CNT                        0x4894
#define SC2_VD2_IF0_AXI_RDAT_CNT                       0x4895
#define SC2_VD2_IF0_RANGE_MAP_Y                        0x4896
#define SC2_VD2_IF0_RANGE_MAP_CB                       0x4897
#define SC2_VD2_IF0_RANGE_MAP_CR                       0x4898
#define SC2_VD2_IF0_GEN_REG2                           0x4899
#define SC2_VD2_IF0_PROT                               0x489a
#define SC2_VD2_IF0_URGENT_CTRL                        0x489b
#define SC2_VD2_IF0_GEN_REG3                           0x489c
#define SC2_VIU_VD2_FMT_CTRL                           0x489d
#define SC2_VIU_VD2_FMT_W                              0x489e
#define VD2_IF0_BADDR_Y                                0x48a0
#define VD2_IF0_BADDR_CB                               0x48a1
#define VD2_IF0_BADDR_CR                               0x48a2
#define VD2_IF0_STRIDE_0                               0x48a3
#define VD2_IF0_STRIDE_1                               0x48a4
#define VD2_IF0_BADDR_Y_F1                             0x48a5
#define VD2_IF0_BADDR_CB_F1                            0x48a6
#define VD2_IF0_BADDR_CR_F1                            0x48a7
#define VD2_IF0_STRIDE_0_F1                            0x48a8
#define VD2_IF0_STRIDE_1_F1                            0x48a9

#define VD3_IF0_GEN_REG                                0x4900
#define VD3_IF0_CANVAS0                                0x4901
#define VD3_IF0_CANVAS1                                0x4902
#define VD3_IF0_LUMA_X0                                0x4903
#define VD3_IF0_LUMA_Y0                                0x4904
#define VD3_IF0_CHROMA_X0                              0x4905
#define VD3_IF0_CHROMA_Y0                              0x4906
#define VD3_IF0_LUMA_X1                                0x4907
#define VD3_IF0_LUMA_Y1                                0x4908
#define VD3_IF0_CHROMA_X1                              0x4909
#define VD3_IF0_CHROMA_Y1                              0x490a
#define VD3_IF0_RPT_LOOP                               0x490b
#define VD3_IF0_LUMA0_RPT_PAT                          0x490c
#define VD3_IF0_CHROMA0_RPT_PAT                        0x490d
#define VD3_IF0_LUMA1_RPT_PAT                          0x490e
#define VD3_IF0_CHROMA1_RPT_PAT                        0x490f
#define VD3_IF0_LUMA_PSEL                              0x4910
#define VD3_IF0_CHROMA_PSEL                            0x4911
#define VD3_IF0_DUMMY_PIXEL                            0x4912
#define VD3_IF0_LUMA_FIFO_SIZE                         0x4913
#define VD3_IF0_AXI_CMD_CNT                            0x4914
#define VD3_IF0_AXI_RDAT_CNT                           0x4915
#define VD3_IF0_RANGE_MAP_Y                            0x4916
#define VD3_IF0_RANGE_MAP_CB                           0x4917
#define VD3_IF0_RANGE_MAP_CR                           0x4918
#define VD3_IF0_GEN_REG2                               0x4919
#define VD3_IF0_PROT                                   0x491a
#define VD3_IF0_URGENT_CTRL                            0x491b
#define VD3_IF0_GEN_REG3                               0x491c
#define VIU_VD3_FMT_CTRL                               0x491d
#define VIU_VD3_FMT_W                                  0x491e
#define VD3_IF0_BADDR_Y                                0x4920
#define VD3_IF0_BADDR_CB                               0x4921
#define VD3_IF0_BADDR_CR                               0x4922
#define VD3_IF0_STRIDE_0                               0x4923
#define VD3_IF0_STRIDE_1                               0x4924
#define VD3_IF0_BADDR_Y_F1                             0x4925
#define VD3_IF0_BADDR_CB_F1                            0x4926
#define VD3_IF0_BADDR_CR_F1                            0x4927
#define VD3_IF0_STRIDE_0_F1                            0x4928
#define VD3_IF0_STRIDE_1_F1                            0x4929

#define VD1_AFBCDM_VDTOP_CTRL0 0x4838
#define VD2_AFBCDM_VDTOP_CTRL0 0x48b8
#define VD3_AFBCDM_VDTOP_CTRL0 0x4938
#endif
