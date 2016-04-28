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
 * Date:           Generated on         Fri Mar 20 12:55:22 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_pep_cmp_0_v0.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:58p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_PEP_CMP_0_V0_H__
#define BCHP_PEP_CMP_0_V0_H__

/***************************************************************************
 *PEP_CMP_0_V0 - Picture Enhancement Processing Unit in Video Compositor 0/Video Intra Surface 0
 ***************************************************************************/
#define BCHP_PEP_CMP_0_V0_REVISION               0x00144000 /* PEP Revision ID */
#define BCHP_PEP_CMP_0_V0_SCRATCH_REGISTER       0x00144004 /* PEP Scratch Register */
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING       0x00144008 /* CAB Demo Setting */
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING       0x0014400c /* LAB Demo Setting */
#define BCHP_PEP_CMP_0_V0_CAB_CTRL               0x00144010 /* Color Adjust Block Control */
#define BCHP_PEP_CMP_0_V0_LAB_CTRL               0x00144014 /* Luma Adjust Block Control */
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL             0x00144018 /* Luma Histogram Control */
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL           0x0014401c /* Luma Histogram Control */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET       0x00144034 /* Histogram Window X and Y Offset */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE         0x00144038 /* Histogram Window Vertical and Horizontal Size */
#define BCHP_PEP_CMP_0_V0_HISTO_MIN_MAX          0x0014403c /* Histogram Min and Max value */
#define BCHP_PEP_CMP_0_V0_HISTO_RESET            0x00144080 /* Luma histogram reset */
#define BCHP_PEP_CMP_0_V0_MIN_MAX_RESET          0x00144084 /* Luma min/max value reset */

/***************************************************************************
 *REVISION - PEP Revision ID
 ***************************************************************************/
/* PEP_CMP_0_V0 :: REVISION :: reserved0 [31:16] */
#define BCHP_PEP_CMP_0_V0_REVISION_reserved0_MASK                  0xffff0000
#define BCHP_PEP_CMP_0_V0_REVISION_reserved0_SHIFT                 16

/* PEP_CMP_0_V0 :: REVISION :: MAJOR [15:08] */
#define BCHP_PEP_CMP_0_V0_REVISION_MAJOR_MASK                      0x0000ff00
#define BCHP_PEP_CMP_0_V0_REVISION_MAJOR_SHIFT                     8

/* PEP_CMP_0_V0 :: REVISION :: MINOR [07:00] */
#define BCHP_PEP_CMP_0_V0_REVISION_MINOR_MASK                      0x000000ff
#define BCHP_PEP_CMP_0_V0_REVISION_MINOR_SHIFT                     0

/***************************************************************************
 *SCRATCH_REGISTER - PEP Scratch Register
 ***************************************************************************/
/* PEP_CMP_0_V0 :: SCRATCH_REGISTER :: reserved0 [31:16] */
#define BCHP_PEP_CMP_0_V0_SCRATCH_REGISTER_reserved0_MASK          0xffff0000
#define BCHP_PEP_CMP_0_V0_SCRATCH_REGISTER_reserved0_SHIFT         16

/* PEP_CMP_0_V0 :: SCRATCH_REGISTER :: VALUE [15:00] */
#define BCHP_PEP_CMP_0_V0_SCRATCH_REGISTER_VALUE_MASK              0x0000ffff
#define BCHP_PEP_CMP_0_V0_SCRATCH_REGISTER_VALUE_SHIFT             0

/***************************************************************************
 *CAB_DEMO_SETTING - CAB Demo Setting
 ***************************************************************************/
/* PEP_CMP_0_V0 :: CAB_DEMO_SETTING :: reserved0 [31:17] */
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_reserved0_MASK          0xfffe0000
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_reserved0_SHIFT         17

/* PEP_CMP_0_V0 :: CAB_DEMO_SETTING :: DEMO_L_R [16:16] */
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_DEMO_L_R_MASK           0x00010000
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_DEMO_L_R_SHIFT          16
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_DEMO_L_R_LEFT           1
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_DEMO_L_R_RIGHT          0

/* PEP_CMP_0_V0 :: CAB_DEMO_SETTING :: reserved1 [15:11] */
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_reserved1_MASK          0x0000f800
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_reserved1_SHIFT         11

/* PEP_CMP_0_V0 :: CAB_DEMO_SETTING :: DEMO_BOUNDARY [10:00] */
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_DEMO_BOUNDARY_MASK      0x000007ff
#define BCHP_PEP_CMP_0_V0_CAB_DEMO_SETTING_DEMO_BOUNDARY_SHIFT     0

/***************************************************************************
 *LAB_DEMO_SETTING - LAB Demo Setting
 ***************************************************************************/
/* PEP_CMP_0_V0 :: LAB_DEMO_SETTING :: reserved0 [31:17] */
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_reserved0_MASK          0xfffe0000
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_reserved0_SHIFT         17

/* PEP_CMP_0_V0 :: LAB_DEMO_SETTING :: DEMO_L_R [16:16] */
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_DEMO_L_R_MASK           0x00010000
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_DEMO_L_R_SHIFT          16
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_DEMO_L_R_LEFT           1
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_DEMO_L_R_RIGHT          0

/* PEP_CMP_0_V0 :: LAB_DEMO_SETTING :: reserved1 [15:11] */
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_reserved1_MASK          0x0000f800
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_reserved1_SHIFT         11

/* PEP_CMP_0_V0 :: LAB_DEMO_SETTING :: DEMO_BOUNDARY [10:00] */
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_DEMO_BOUNDARY_MASK      0x000007ff
#define BCHP_PEP_CMP_0_V0_LAB_DEMO_SETTING_DEMO_BOUNDARY_SHIFT     0

/***************************************************************************
 *CAB_CTRL - Color Adjust Block Control
 ***************************************************************************/
/* PEP_CMP_0_V0 :: CAB_CTRL :: reserved0 [31:03] */
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_reserved0_MASK                  0xfffffff8
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_reserved0_SHIFT                 3

/* PEP_CMP_0_V0 :: CAB_CTRL :: CAB_DEMO_ENABLE [02:02] */
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_CAB_DEMO_ENABLE_MASK            0x00000004
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_CAB_DEMO_ENABLE_SHIFT           2

/* PEP_CMP_0_V0 :: CAB_CTRL :: LUMA_OFFSET_ENABLE [01:01] */
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_LUMA_OFFSET_ENABLE_MASK         0x00000002
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_LUMA_OFFSET_ENABLE_SHIFT        1

/* PEP_CMP_0_V0 :: CAB_CTRL :: CAB_ENABLE [00:00] */
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_CAB_ENABLE_MASK                 0x00000001
#define BCHP_PEP_CMP_0_V0_CAB_CTRL_CAB_ENABLE_SHIFT                0

/***************************************************************************
 *LAB_CTRL - Luma Adjust Block Control
 ***************************************************************************/
/* PEP_CMP_0_V0 :: LAB_CTRL :: reserved0 [31:02] */
#define BCHP_PEP_CMP_0_V0_LAB_CTRL_reserved0_MASK                  0xfffffffc
#define BCHP_PEP_CMP_0_V0_LAB_CTRL_reserved0_SHIFT                 2

/* PEP_CMP_0_V0 :: LAB_CTRL :: LAB_DEMO_ENABLE [01:01] */
#define BCHP_PEP_CMP_0_V0_LAB_CTRL_LAB_DEMO_ENABLE_MASK            0x00000002
#define BCHP_PEP_CMP_0_V0_LAB_CTRL_LAB_DEMO_ENABLE_SHIFT           1

/* PEP_CMP_0_V0 :: LAB_CTRL :: ENABLE [00:00] */
#define BCHP_PEP_CMP_0_V0_LAB_CTRL_ENABLE_MASK                     0x00000001
#define BCHP_PEP_CMP_0_V0_LAB_CTRL_ENABLE_SHIFT                    0

/***************************************************************************
 *HISTO_CTRL - Luma Histogram Control
 ***************************************************************************/
/* PEP_CMP_0_V0 :: HISTO_CTRL :: reserved0 [31:02] */
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_reserved0_MASK                0xfffffffc
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_reserved0_SHIFT               2

/* PEP_CMP_0_V0 :: HISTO_CTRL :: HISTO_CTRL [01:00] */
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_HISTO_CTRL_MASK               0x00000003
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_HISTO_CTRL_SHIFT              0
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_HISTO_CTRL_DISABLE            0
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_HISTO_CTRL_SINGLE_PICTURE     1
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_HISTO_CTRL_DOUBLE_PICTURES    2
#define BCHP_PEP_CMP_0_V0_HISTO_CTRL_HISTO_CTRL_RESERVED           3

/***************************************************************************
 *MIN_MAX_CTRL - Luma Histogram Control
 ***************************************************************************/
/* PEP_CMP_0_V0 :: MIN_MAX_CTRL :: reserved0 [31:02] */
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_reserved0_MASK              0xfffffffc
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_reserved0_SHIFT             2

/* PEP_CMP_0_V0 :: MIN_MAX_CTRL :: MIN_MAX_CTRL [01:00] */
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_MIN_MAX_CTRL_MASK           0x00000003
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_MIN_MAX_CTRL_SHIFT          0
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_MIN_MAX_CTRL_DISABLE        0
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_MIN_MAX_CTRL_SINGLE_PICTURE 1
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_MIN_MAX_CTRL_DOUBLE_PICTURES 2
#define BCHP_PEP_CMP_0_V0_MIN_MAX_CTRL_MIN_MAX_CTRL_UNLIMITED_PICTURES 3

/***************************************************************************
 *HISTO_WIN_OFFSET - Histogram Window X and Y Offset
 ***************************************************************************/
/* PEP_CMP_0_V0 :: HISTO_WIN_OFFSET :: reserved0 [31:27] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_reserved0_MASK          0xf8000000
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_reserved0_SHIFT         27

/* PEP_CMP_0_V0 :: HISTO_WIN_OFFSET :: X_OFFSET [26:16] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_X_OFFSET_MASK           0x07ff0000
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_X_OFFSET_SHIFT          16

/* PEP_CMP_0_V0 :: HISTO_WIN_OFFSET :: reserved1 [15:11] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_reserved1_MASK          0x0000f800
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_reserved1_SHIFT         11

/* PEP_CMP_0_V0 :: HISTO_WIN_OFFSET :: Y_OFFSET [10:00] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_Y_OFFSET_MASK           0x000007ff
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_OFFSET_Y_OFFSET_SHIFT          0

/***************************************************************************
 *HISTO_WIN_SIZE - Histogram Window Vertical and Horizontal Size
 ***************************************************************************/
/* PEP_CMP_0_V0 :: HISTO_WIN_SIZE :: reserved0 [31:27] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_reserved0_MASK            0xf8000000
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_reserved0_SHIFT           27

/* PEP_CMP_0_V0 :: HISTO_WIN_SIZE :: HSIZE [26:16] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_HSIZE_MASK                0x07ff0000
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_HSIZE_SHIFT               16

/* PEP_CMP_0_V0 :: HISTO_WIN_SIZE :: reserved1 [15:11] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_reserved1_MASK            0x0000f800
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_reserved1_SHIFT           11

/* PEP_CMP_0_V0 :: HISTO_WIN_SIZE :: VSIZE [10:00] */
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_VSIZE_MASK                0x000007ff
#define BCHP_PEP_CMP_0_V0_HISTO_WIN_SIZE_VSIZE_SHIFT               0

/***************************************************************************
 *HISTO_MIN_MAX - Histogram Min and Max value
 ***************************************************************************/
/* PEP_CMP_0_V0 :: HISTO_MIN_MAX :: reserved0 [31:16] */
#define BCHP_PEP_CMP_0_V0_HISTO_MIN_MAX_reserved0_MASK             0xffff0000
#define BCHP_PEP_CMP_0_V0_HISTO_MIN_MAX_reserved0_SHIFT            16

/* PEP_CMP_0_V0 :: HISTO_MIN_MAX :: MAX [15:08] */
#define BCHP_PEP_CMP_0_V0_HISTO_MIN_MAX_MAX_MASK                   0x0000ff00
#define BCHP_PEP_CMP_0_V0_HISTO_MIN_MAX_MAX_SHIFT                  8

/* PEP_CMP_0_V0 :: HISTO_MIN_MAX :: MIN [07:00] */
#define BCHP_PEP_CMP_0_V0_HISTO_MIN_MAX_MIN_MASK                   0x000000ff
#define BCHP_PEP_CMP_0_V0_HISTO_MIN_MAX_MIN_SHIFT                  0

/***************************************************************************
 *HISTO_DATA_COUNT_%i - Histogram Data Occurence Count
 ***************************************************************************/
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_ARRAY_BASE            0x00144040
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_ARRAY_START           0
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_ARRAY_END             15
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_ARRAY_ELEMENT_SIZE    32

/***************************************************************************
 *HISTO_DATA_COUNT_%i - Histogram Data Occurence Count
 ***************************************************************************/
/* PEP_CMP_0_V0 :: HISTO_DATA_COUNT_i :: reserved0 [31:21] */
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_reserved0_MASK        0xffe00000
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_reserved0_SHIFT       21

/* PEP_CMP_0_V0 :: HISTO_DATA_COUNT_i :: COUNT [20:00] */
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_COUNT_MASK            0x001fffff
#define BCHP_PEP_CMP_0_V0_HISTO_DATA_COUNT_i_COUNT_SHIFT           0


/***************************************************************************
 *HISTO_RESET - Luma histogram reset
 ***************************************************************************/
/* PEP_CMP_0_V0 :: HISTO_RESET :: reserved0 [31:01] */
#define BCHP_PEP_CMP_0_V0_HISTO_RESET_reserved0_MASK               0xfffffffe
#define BCHP_PEP_CMP_0_V0_HISTO_RESET_reserved0_SHIFT              1

/* PEP_CMP_0_V0 :: HISTO_RESET :: HISTO_RESET [00:00] */
#define BCHP_PEP_CMP_0_V0_HISTO_RESET_HISTO_RESET_MASK             0x00000001
#define BCHP_PEP_CMP_0_V0_HISTO_RESET_HISTO_RESET_SHIFT            0

/***************************************************************************
 *MIN_MAX_RESET - Luma min/max value reset
 ***************************************************************************/
/* PEP_CMP_0_V0 :: MIN_MAX_RESET :: reserved0 [31:01] */
#define BCHP_PEP_CMP_0_V0_MIN_MAX_RESET_reserved0_MASK             0xfffffffe
#define BCHP_PEP_CMP_0_V0_MIN_MAX_RESET_reserved0_SHIFT            1

/* PEP_CMP_0_V0 :: MIN_MAX_RESET :: MIN_MAX_RESET [00:00] */
#define BCHP_PEP_CMP_0_V0_MIN_MAX_RESET_MIN_MAX_RESET_MASK         0x00000001
#define BCHP_PEP_CMP_0_V0_MIN_MAX_RESET_MIN_MAX_RESET_SHIFT        0

/***************************************************************************
 *CAB_LUT_DATA_%i - CAB Lookup Table Data
 ***************************************************************************/
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_ARRAY_BASE                0x00144088
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_ARRAY_START               0
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_ARRAY_END                 1023
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_ARRAY_ELEMENT_SIZE        32

/***************************************************************************
 *CAB_LUT_DATA_%i - CAB Lookup Table Data
 ***************************************************************************/
/* PEP_CMP_0_V0 :: CAB_LUT_DATA_i :: reserved0 [31:17] */
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_reserved0_MASK            0xfffe0000
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_reserved0_SHIFT           17

/* PEP_CMP_0_V0 :: CAB_LUT_DATA_i :: BYPASS [16:16] */
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_BYPASS_MASK               0x00010000
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_BYPASS_SHIFT              16

/* PEP_CMP_0_V0 :: CAB_LUT_DATA_i :: CR_DATA [15:08] */
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_CR_DATA_MASK              0x0000ff00
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_CR_DATA_SHIFT             8

/* PEP_CMP_0_V0 :: CAB_LUT_DATA_i :: CB_DATA [07:00] */
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_CB_DATA_MASK              0x000000ff
#define BCHP_PEP_CMP_0_V0_CAB_LUT_DATA_i_CB_DATA_SHIFT             0


/***************************************************************************
 *LAB_LUT_DATA_%i - LAB Lookup Table Data
 ***************************************************************************/
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_ARRAY_BASE                0x00145088
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_ARRAY_START               0
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_ARRAY_END                 255
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_ARRAY_ELEMENT_SIZE        32

/***************************************************************************
 *LAB_LUT_DATA_%i - LAB Lookup Table Data
 ***************************************************************************/
/* PEP_CMP_0_V0 :: LAB_LUT_DATA_i :: reserved0 [31:20] */
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_reserved0_MASK            0xfff00000
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_reserved0_SHIFT           20

/* PEP_CMP_0_V0 :: LAB_LUT_DATA_i :: CR_OFFSET [19:14] */
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_CR_OFFSET_MASK            0x000fc000
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_CR_OFFSET_SHIFT           14

/* PEP_CMP_0_V0 :: LAB_LUT_DATA_i :: CB_OFFSET [13:08] */
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_CB_OFFSET_MASK            0x00003f00
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_CB_OFFSET_SHIFT           8

/* PEP_CMP_0_V0 :: LAB_LUT_DATA_i :: LUMA_DATA [07:00] */
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_LUMA_DATA_MASK            0x000000ff
#define BCHP_PEP_CMP_0_V0_LAB_LUT_DATA_i_LUMA_DATA_SHIFT           0


#endif /* #ifndef BCHP_PEP_CMP_0_V0_H__ */

/* End of File */
