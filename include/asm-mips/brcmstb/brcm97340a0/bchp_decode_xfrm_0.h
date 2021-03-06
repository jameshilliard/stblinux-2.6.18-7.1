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
 * Date:           Generated on         Fri Mar 20 12:50:47 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_decode_xfrm_0.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:12p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_DECODE_XFRM_0_H__
#define BCHP_DECODE_XFRM_0_H__

/***************************************************************************
 *DECODE_XFRM_0
 ***************************************************************************/
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL          0x00800700 /* Inverse Transform Control */
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF         0x00800704 /* Inverse Transform Coefficients */
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM          0x0080070c /* PCM Pixel data */
#define BCHP_DECODE_XFRM_0_REG_IXFM_264_COEF_NORUN 0x00800710 /* REG_IXFM_264_COEF_NORUN */
#define BCHP_DECODE_XFRM_0_REG_IXFM_BLK_SIZE     0x00800714 /* REG_IXFM_BLK_SIZE */
#define BCHP_DECODE_XFRM_0_REG_IXFM_END          0x0080071c /* REG_IXFM_END */

/***************************************************************************
 *REG_IXFM_CTL - Inverse Transform Control
 ***************************************************************************/
/* DECODE_XFRM_0 :: REG_IXFM_CTL :: Xfm [31:30] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Xfm_MASK                   0xc0000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Xfm_SHIFT                  30

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: Scan [29:29] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Scan_MASK                  0x20000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Scan_SHIFT                 29

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: USE_QS_TAB [28:28] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_USE_QS_TAB_MASK            0x10000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_USE_QS_TAB_SHIFT           28

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: reserved0 [27:27] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved0_MASK             0x08000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved0_SHIFT            27

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: Fld [26:26] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Fld_MASK                   0x04000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Fld_SHIFT                  26

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: Odd_ [25:25] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Odd__MASK                  0x02000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Odd__SHIFT                 25

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: Type [24:24] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Type_MASK                  0x01000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_Type_SHIFT                 24

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: reserved1 [23:23] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved1_MASK             0x00800000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved1_SHIFT            23

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: QpY [22:16] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_QpY_MASK                   0x007f0000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_QpY_SHIFT                  16

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: reserved2 [15:13] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved2_MASK             0x0000e000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved2_SHIFT            13

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: OVERLAPTXM_BIT_SHIFT [12:12] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_OVERLAPTXM_BIT_SHIFT_MASK  0x00001000
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_OVERLAPTXM_BIT_SHIFT_SHIFT 12

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: NonUniform [11:11] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_NonUniform_MASK            0x00000800
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_NonUniform_SHIFT           11

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: ACPred [10:10] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_ACPred_MASK                0x00000400
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_ACPred_SHIFT               10

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: HalfQP [09:09] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_HalfQP_MASK                0x00000200
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_HalfQP_SHIFT               9

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: TopAvail [08:08] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_TopAvail_MASK              0x00000100
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_TopAvail_SHIFT             8

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: reserved3 [07:05] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved3_MASK             0x000000e0
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_reserved3_SHIFT            5

/* DECODE_XFRM_0 :: REG_IXFM_CTL :: CBP [04:00] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_CBP_MASK                   0x0000001f
#define BCHP_DECODE_XFRM_0_REG_IXFM_CTL_CBP_SHIFT                  0

/***************************************************************************
 *REG_IXFM_COEF - Inverse Transform Coefficients
 ***************************************************************************/
/* DECODE_XFRM_0 :: REG_IXFM_COEF :: Run0 [31:28] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Run0_MASK                 0xf0000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Run0_SHIFT                28

/* DECODE_XFRM_0 :: REG_IXFM_COEF :: Coef0 [27:16] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Coef0_MASK                0x0fff0000
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Coef0_SHIFT               16

/* DECODE_XFRM_0 :: REG_IXFM_COEF :: Run1 [15:12] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Run1_MASK                 0x0000f000
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Run1_SHIFT                12

/* DECODE_XFRM_0 :: REG_IXFM_COEF :: Coef1 [11:00] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Coef1_MASK                0x00000fff
#define BCHP_DECODE_XFRM_0_REG_IXFM_COEF_Coef1_SHIFT               0

/***************************************************************************
 *REG_IXFM_PCM - PCM Pixel data
 ***************************************************************************/
/* DECODE_XFRM_0 :: REG_IXFM_PCM :: Pixel0 [31:24] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel0_MASK                0xff000000
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel0_SHIFT               24

/* DECODE_XFRM_0 :: REG_IXFM_PCM :: Pixel1 [23:16] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel1_MASK                0x00ff0000
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel1_SHIFT               16

/* DECODE_XFRM_0 :: REG_IXFM_PCM :: Pixel2 [15:08] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel2_MASK                0x0000ff00
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel2_SHIFT               8

/* DECODE_XFRM_0 :: REG_IXFM_PCM :: Pixel3 [07:00] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel3_MASK                0x000000ff
#define BCHP_DECODE_XFRM_0_REG_IXFM_PCM_Pixel3_SHIFT               0

/***************************************************************************
 *REG_IXFM_264_COEF_NORUN - REG_IXFM_264_COEF_NORUN
 ***************************************************************************/
/* DECODE_XFRM_0 :: REG_IXFM_264_COEF_NORUN :: coef1 [31:16] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_264_COEF_NORUN_coef1_MASK      0xffff0000
#define BCHP_DECODE_XFRM_0_REG_IXFM_264_COEF_NORUN_coef1_SHIFT     16

/* DECODE_XFRM_0 :: REG_IXFM_264_COEF_NORUN :: coef0 [15:00] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_264_COEF_NORUN_coef0_MASK      0x0000ffff
#define BCHP_DECODE_XFRM_0_REG_IXFM_264_COEF_NORUN_coef0_SHIFT     0

/***************************************************************************
 *REG_IXFM_BLK_SIZE - REG_IXFM_BLK_SIZE
 ***************************************************************************/
/* DECODE_XFRM_0 :: REG_IXFM_BLK_SIZE :: reserved0 [31:03] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_BLK_SIZE_reserved0_MASK        0xfffffff8
#define BCHP_DECODE_XFRM_0_REG_IXFM_BLK_SIZE_reserved0_SHIFT       3

/* DECODE_XFRM_0 :: REG_IXFM_BLK_SIZE :: Intra [02:02] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_BLK_SIZE_Intra_MASK            0x00000004
#define BCHP_DECODE_XFRM_0_REG_IXFM_BLK_SIZE_Intra_SHIFT           2

/* DECODE_XFRM_0 :: REG_IXFM_BLK_SIZE :: SIZE [01:00] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_BLK_SIZE_SIZE_MASK             0x00000003
#define BCHP_DECODE_XFRM_0_REG_IXFM_BLK_SIZE_SIZE_SHIFT            0

/***************************************************************************
 *REG_IXFM_END - REG_IXFM_END
 ***************************************************************************/
/* DECODE_XFRM_0 :: REG_IXFM_END :: reserved0 [31:00] */
#define BCHP_DECODE_XFRM_0_REG_IXFM_END_reserved0_MASK             0xffffffff
#define BCHP_DECODE_XFRM_0_REG_IXFM_END_reserved0_SHIFT            0

#endif /* #ifndef BCHP_DECODE_XFRM_0_H__ */

/* End of File */
