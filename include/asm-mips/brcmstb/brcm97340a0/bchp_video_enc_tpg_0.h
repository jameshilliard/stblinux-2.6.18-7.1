/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Mar 20 12:58:21 2009
 *                 MD5 Checksum         4f0509cfa0b8fc4589050694b4a3e234
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_video_enc_tpg_0.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:25p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_VIDEO_ENC_TPG_0_H__
#define BCHP_VIDEO_ENC_TPG_0_H__

/***************************************************************************
 *VIDEO_ENC_TPG_0 - VEC Test Pattern Generator Controls
 ***************************************************************************/
#define BCHP_VIDEO_ENC_TPG_0_REV_ID              0x00185100 /* Test Pattern Generator Revision ID register */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0       0x00185104 /* Pattern Generator Register 0. */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1       0x00185108 /* Pattern Generator Register 1. */
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN             0x0018510c /* BVB Zero Register. */
#define BCHP_VIDEO_ENC_TPG_0_DTG_CONFIG          0x00185110 /* Configuration register for TPG's DTG */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL            0x00185114 /* PCL Registers for Control signals */
#define BCHP_VIDEO_ENC_TPG_0_RAM_ADDR            0x00185118 /* Microncontroller starting address */

/***************************************************************************
 *REV_ID - Test Pattern Generator Revision ID register
 ***************************************************************************/
/* VIDEO_ENC_TPG_0 :: REV_ID :: reserved0 [31:16] */
#define BCHP_VIDEO_ENC_TPG_0_REV_ID_reserved0_MASK                 0xffff0000
#define BCHP_VIDEO_ENC_TPG_0_REV_ID_reserved0_SHIFT                16

/* VIDEO_ENC_TPG_0 :: REV_ID :: REVISION_ID [15:00] */
#define BCHP_VIDEO_ENC_TPG_0_REV_ID_REVISION_ID_MASK               0x0000ffff
#define BCHP_VIDEO_ENC_TPG_0_REV_ID_REVISION_ID_SHIFT              0

/***************************************************************************
 *PATTERN_GEN_0 - Pattern Generator Register 0.
 ***************************************************************************/
/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_0 :: reserved0 [31:26] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_reserved0_MASK          0xfc000000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_reserved0_SHIFT         26

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_0 :: CMD_DELAY [25:25] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_CMD_DELAY_MASK          0x02000000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_CMD_DELAY_SHIFT         25
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_CMD_DELAY_OFF           0
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_CMD_DELAY_ON            1

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_0 :: WALKING_PATTERN [24:24] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_WALKING_PATTERN_MASK    0x01000000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_WALKING_PATTERN_SHIFT   24
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_WALKING_PATTERN_WALKING_ONE 1
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_WALKING_PATTERN_WALKING_ZERO 0

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_0 :: COMP_OUTPUT [23:23] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_COMP_OUTPUT_MASK        0x00800000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_COMP_OUTPUT_SHIFT       23
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_COMP_OUTPUT_MIN_MAX     0
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_COMP_OUTPUT_WALKING_PATTERN 1

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_0 :: ROLL_SELECT [22:22] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_ROLL_SELECT_MASK        0x00400000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_ROLL_SELECT_SHIFT       22

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_0 :: INITIAL_DELTA [21:08] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_INITIAL_DELTA_MASK      0x003fff00
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_INITIAL_DELTA_SHIFT     8

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_0 :: INITIAL_VALUE [07:00] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_INITIAL_VALUE_MASK      0x000000ff
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_0_INITIAL_VALUE_SHIFT     0

/***************************************************************************
 *PATTERN_GEN_1 - Pattern Generator Register 1.
 ***************************************************************************/
/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_1 :: reserved0 [31:31] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_reserved0_MASK          0x80000000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_reserved0_SHIFT         31

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_1 :: CLAMP_DIRECTION [30:30] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_CLAMP_DIRECTION_MASK    0x40000000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_CLAMP_DIRECTION_SHIFT   30

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_1 :: DELTA_CLAMP_VALUE [29:16] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_DELTA_CLAMP_VALUE_MASK  0x3fff0000
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_DELTA_CLAMP_VALUE_SHIFT 16

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_1 :: ACCELERATION [15:08] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_ACCELERATION_MASK       0x0000ff00
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_ACCELERATION_SHIFT      8

/* VIDEO_ENC_TPG_0 :: PATTERN_GEN_1 :: CLAMP_VALUE [07:00] */
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_CLAMP_VALUE_MASK        0x000000ff
#define BCHP_VIDEO_ENC_TPG_0_PATTERN_GEN_1_CLAMP_VALUE_SHIFT       0

/***************************************************************************
 *BVB_MIN - BVB Zero Register.
 ***************************************************************************/
/* VIDEO_ENC_TPG_0 :: BVB_MIN :: reserved0 [31:24] */
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_reserved0_MASK                0xff000000
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_reserved0_SHIFT               24

/* VIDEO_ENC_TPG_0 :: BVB_MIN :: CH2_MIN [23:16] */
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_CH2_MIN_MASK                  0x00ff0000
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_CH2_MIN_SHIFT                 16

/* VIDEO_ENC_TPG_0 :: BVB_MIN :: CH1_MIN [15:08] */
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_CH1_MIN_MASK                  0x0000ff00
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_CH1_MIN_SHIFT                 8

/* VIDEO_ENC_TPG_0 :: BVB_MIN :: CH0_MIN [07:00] */
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_CH0_MIN_MASK                  0x000000ff
#define BCHP_VIDEO_ENC_TPG_0_BVB_MIN_CH0_MIN_SHIFT                 0

/***************************************************************************
 *DTG_CONFIG - Configuration register for TPG's DTG
 ***************************************************************************/
/* VIDEO_ENC_TPG_0 :: DTG_CONFIG :: reserved0 [31:01] */
#define BCHP_VIDEO_ENC_TPG_0_DTG_CONFIG_reserved0_MASK             0xfffffffe
#define BCHP_VIDEO_ENC_TPG_0_DTG_CONFIG_reserved0_SHIFT            1

/* VIDEO_ENC_TPG_0 :: DTG_CONFIG :: TPG_DTG_ENABLE [00:00] */
#define BCHP_VIDEO_ENC_TPG_0_DTG_CONFIG_TPG_DTG_ENABLE_MASK        0x00000001
#define BCHP_VIDEO_ENC_TPG_0_DTG_CONFIG_TPG_DTG_ENABLE_SHIFT       0

/***************************************************************************
 *CNTL_PCL - PCL Registers for Control signals
 ***************************************************************************/
/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: reserved0 [31:18] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_reserved0_MASK               0xfffc0000
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_reserved0_SHIFT              18

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG_END_PICT_MUX_SEL [17:15] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG_END_PICT_MUX_SEL_MASK     0x00038000
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG_END_PICT_MUX_SEL_SHIFT    15

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG_END_LINE_MUX_SELECT [14:12] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG_END_LINE_MUX_SELECT_MASK  0x00007000
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG_END_LINE_MUX_SELECT_SHIFT 12

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG2_ENABLE [11:11] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG2_ENABLE_MASK              0x00000800
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG2_ENABLE_SHIFT             11
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG2_ENABLE_DISABLED          0
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG2_ENABLE_ENABLED           1

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG2_MUX_SELECT [10:08] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG2_MUX_SELECT_MASK          0x00000700
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG2_MUX_SELECT_SHIFT         8

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG1_ENABLE [07:07] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG1_ENABLE_MASK              0x00000080
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG1_ENABLE_SHIFT             7
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG1_ENABLE_DISABLED          0
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG1_ENABLE_ENABLED           1

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG1_MUX_SELECT [06:04] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG1_MUX_SELECT_MASK          0x00000070
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG1_MUX_SELECT_SHIFT         4

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG0_ENABLE [03:03] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG0_ENABLE_MASK              0x00000008
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG0_ENABLE_SHIFT             3
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG0_ENABLE_DISABLED          0
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG0_ENABLE_ENABLED           1

/* VIDEO_ENC_TPG_0 :: CNTL_PCL :: PG0_MUX_SELECT [02:00] */
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG0_MUX_SELECT_MASK          0x00000007
#define BCHP_VIDEO_ENC_TPG_0_CNTL_PCL_PG0_MUX_SELECT_SHIFT         0

/***************************************************************************
 *RAM_ADDR - Microncontroller starting address
 ***************************************************************************/
/* VIDEO_ENC_TPG_0 :: RAM_ADDR :: reserved0 [31:08] */
#define BCHP_VIDEO_ENC_TPG_0_RAM_ADDR_reserved0_MASK               0xffffff00
#define BCHP_VIDEO_ENC_TPG_0_RAM_ADDR_reserved0_SHIFT              8

/* VIDEO_ENC_TPG_0 :: RAM_ADDR :: MC_START_ADDR [07:00] */
#define BCHP_VIDEO_ENC_TPG_0_RAM_ADDR_MC_START_ADDR_MASK           0x000000ff
#define BCHP_VIDEO_ENC_TPG_0_RAM_ADDR_MC_START_ADDR_SHIFT          0

#endif /* #ifndef BCHP_VIDEO_ENC_TPG_0_H__ */

/* End of File */
