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
 * Date:           Generated on         Fri Mar 20 13:04:56 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_aud_fmm_op_esr.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 7:48p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_AUD_FMM_OP_ESR_H__
#define BCHP_AUD_FMM_OP_ESR_H__

/***************************************************************************
 *AUD_FMM_OP_ESR - FMM-OP Error Status
 ***************************************************************************/
#define BCHP_AUD_FMM_OP_ESR_STATUS               0x0061a400 /* Error Status Register */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET           0x0061a404 /* Error Set Register */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR         0x0061a408 /* Error Clear Register */
#define BCHP_AUD_FMM_OP_ESR_MASK                 0x0061a40c /* Mask Status Register */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET             0x0061a410 /* Mask Set Register */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR           0x0061a414 /* Mask Clear Register */

/***************************************************************************
 *STATUS - Error Status Register
 ***************************************************************************/
/* AUD_FMM_OP_ESR :: STATUS :: reserved0 [31:24] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_reserved0_MASK                  0xff000000
#define BCHP_AUD_FMM_OP_ESR_STATUS_reserved0_SHIFT                 24

/* AUD_FMM_OP_ESR :: STATUS :: CRC9_INT [23:23] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC9_INT_MASK                   0x00800000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC9_INT_SHIFT                  23

/* AUD_FMM_OP_ESR :: STATUS :: CRC8_INT [22:22] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC8_INT_MASK                   0x00400000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC8_INT_SHIFT                  22

/* AUD_FMM_OP_ESR :: STATUS :: CRC7_INT [21:21] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC7_INT_MASK                   0x00200000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC7_INT_SHIFT                  21

/* AUD_FMM_OP_ESR :: STATUS :: CRC6_INT [20:20] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC6_INT_MASK                   0x00100000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC6_INT_SHIFT                  20

/* AUD_FMM_OP_ESR :: STATUS :: CRC5_INT [19:19] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC5_INT_MASK                   0x00080000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC5_INT_SHIFT                  19

/* AUD_FMM_OP_ESR :: STATUS :: CRC4_INT [18:18] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC4_INT_MASK                   0x00040000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC4_INT_SHIFT                  18

/* AUD_FMM_OP_ESR :: STATUS :: CRC3_INT [17:17] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC3_INT_MASK                   0x00020000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC3_INT_SHIFT                  17

/* AUD_FMM_OP_ESR :: STATUS :: CRC2_INT [16:16] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC2_INT_MASK                   0x00010000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC2_INT_SHIFT                  16

/* AUD_FMM_OP_ESR :: STATUS :: CRC1_INT [15:15] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC1_INT_MASK                   0x00008000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC1_INT_SHIFT                  15

/* AUD_FMM_OP_ESR :: STATUS :: CRC0_INT [14:14] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC0_INT_MASK                   0x00004000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CRC0_INT_SHIFT                  14

/* AUD_FMM_OP_ESR :: STATUS :: reserved1 [13:12] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_reserved1_MASK                  0x00003000
#define BCHP_AUD_FMM_OP_ESR_STATUS_reserved1_SHIFT                 12

/* AUD_FMM_OP_ESR :: STATUS :: PLL0_LOCK [11:11] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_PLL0_LOCK_MASK                  0x00000800
#define BCHP_AUD_FMM_OP_ESR_STATUS_PLL0_LOCK_SHIFT                 11

/* AUD_FMM_OP_ESR :: STATUS :: MAI_TIMING_ERROR [10:10] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_MAI_TIMING_ERROR_MASK           0x00000400
#define BCHP_AUD_FMM_OP_ESR_STATUS_MAI_TIMING_ERROR_SHIFT          10

/* AUD_FMM_OP_ESR :: STATUS :: STREAM9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM9_UNDERFLOW_MASK          0x00000200
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM9_UNDERFLOW_SHIFT         9

/* AUD_FMM_OP_ESR :: STATUS :: STREAM8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM8_UNDERFLOW_MASK          0x00000100
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM8_UNDERFLOW_SHIFT         8

/* AUD_FMM_OP_ESR :: STATUS :: STREAM7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM7_UNDERFLOW_MASK          0x00000080
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM7_UNDERFLOW_SHIFT         7

/* AUD_FMM_OP_ESR :: STATUS :: STREAM6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM6_UNDERFLOW_MASK          0x00000040
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM6_UNDERFLOW_SHIFT         6

/* AUD_FMM_OP_ESR :: STATUS :: STREAM5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM5_UNDERFLOW_MASK          0x00000020
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM5_UNDERFLOW_SHIFT         5

/* AUD_FMM_OP_ESR :: STATUS :: STREAM4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM4_UNDERFLOW_MASK          0x00000010
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM4_UNDERFLOW_SHIFT         4

/* AUD_FMM_OP_ESR :: STATUS :: STREAM3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM3_UNDERFLOW_MASK          0x00000008
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM3_UNDERFLOW_SHIFT         3

/* AUD_FMM_OP_ESR :: STATUS :: STREAM2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM2_UNDERFLOW_MASK          0x00000004
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM2_UNDERFLOW_SHIFT         2

/* AUD_FMM_OP_ESR :: STATUS :: STREAM1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM1_UNDERFLOW_MASK          0x00000002
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM1_UNDERFLOW_SHIFT         1

/* AUD_FMM_OP_ESR :: STATUS :: STREAM0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM0_UNDERFLOW_MASK          0x00000001
#define BCHP_AUD_FMM_OP_ESR_STATUS_STREAM0_UNDERFLOW_SHIFT         0

/***************************************************************************
 *STATUS_SET - Error Set Register
 ***************************************************************************/
/* AUD_FMM_OP_ESR :: STATUS_SET :: reserved0 [31:24] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_reserved0_MASK              0xff000000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_reserved0_SHIFT             24

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC9_INT [23:23] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC9_INT_MASK               0x00800000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC9_INT_SHIFT              23

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC8_INT [22:22] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC8_INT_MASK               0x00400000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC8_INT_SHIFT              22

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC7_INT [21:21] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC7_INT_MASK               0x00200000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC7_INT_SHIFT              21

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC6_INT [20:20] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC6_INT_MASK               0x00100000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC6_INT_SHIFT              20

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC5_INT [19:19] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC5_INT_MASK               0x00080000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC5_INT_SHIFT              19

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC4_INT [18:18] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC4_INT_MASK               0x00040000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC4_INT_SHIFT              18

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC3_INT [17:17] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC3_INT_MASK               0x00020000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC3_INT_SHIFT              17

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC2_INT [16:16] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC2_INT_MASK               0x00010000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC2_INT_SHIFT              16

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC1_INT [15:15] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC1_INT_MASK               0x00008000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC1_INT_SHIFT              15

/* AUD_FMM_OP_ESR :: STATUS_SET :: CRC0_INT [14:14] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC0_INT_MASK               0x00004000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_CRC0_INT_SHIFT              14

/* AUD_FMM_OP_ESR :: STATUS_SET :: reserved1 [13:12] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_reserved1_MASK              0x00003000
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_reserved1_SHIFT             12

/* AUD_FMM_OP_ESR :: STATUS_SET :: PLL0_LOCK [11:11] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_PLL0_LOCK_MASK              0x00000800
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_PLL0_LOCK_SHIFT             11

/* AUD_FMM_OP_ESR :: STATUS_SET :: MAI_TIMING_ERROR [10:10] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_MAI_TIMING_ERROR_MASK       0x00000400
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_MAI_TIMING_ERROR_SHIFT      10

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM9_UNDERFLOW_MASK      0x00000200
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM9_UNDERFLOW_SHIFT     9

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM8_UNDERFLOW_MASK      0x00000100
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM8_UNDERFLOW_SHIFT     8

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM7_UNDERFLOW_MASK      0x00000080
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM7_UNDERFLOW_SHIFT     7

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM6_UNDERFLOW_MASK      0x00000040
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM6_UNDERFLOW_SHIFT     6

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM5_UNDERFLOW_MASK      0x00000020
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM5_UNDERFLOW_SHIFT     5

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM4_UNDERFLOW_MASK      0x00000010
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM4_UNDERFLOW_SHIFT     4

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM3_UNDERFLOW_MASK      0x00000008
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM3_UNDERFLOW_SHIFT     3

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM2_UNDERFLOW_MASK      0x00000004
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM2_UNDERFLOW_SHIFT     2

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM1_UNDERFLOW_MASK      0x00000002
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM1_UNDERFLOW_SHIFT     1

/* AUD_FMM_OP_ESR :: STATUS_SET :: STREAM0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM0_UNDERFLOW_MASK      0x00000001
#define BCHP_AUD_FMM_OP_ESR_STATUS_SET_STREAM0_UNDERFLOW_SHIFT     0

/***************************************************************************
 *STATUS_CLEAR - Error Clear Register
 ***************************************************************************/
/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: reserved0 [31:24] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_reserved0_MASK            0xff000000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_reserved0_SHIFT           24

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC9_INT [23:23] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC9_INT_MASK             0x00800000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC9_INT_SHIFT            23

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC8_INT [22:22] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC8_INT_MASK             0x00400000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC8_INT_SHIFT            22

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC7_INT [21:21] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC7_INT_MASK             0x00200000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC7_INT_SHIFT            21

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC6_INT [20:20] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC6_INT_MASK             0x00100000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC6_INT_SHIFT            20

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC5_INT [19:19] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC5_INT_MASK             0x00080000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC5_INT_SHIFT            19

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC4_INT [18:18] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC4_INT_MASK             0x00040000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC4_INT_SHIFT            18

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC3_INT [17:17] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC3_INT_MASK             0x00020000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC3_INT_SHIFT            17

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC2_INT [16:16] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC2_INT_MASK             0x00010000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC2_INT_SHIFT            16

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC1_INT [15:15] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC1_INT_MASK             0x00008000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC1_INT_SHIFT            15

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: CRC0_INT [14:14] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC0_INT_MASK             0x00004000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_CRC0_INT_SHIFT            14

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: reserved1 [13:12] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_reserved1_MASK            0x00003000
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_reserved1_SHIFT           12

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: PLL0_LOCK [11:11] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_PLL0_LOCK_MASK            0x00000800
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_PLL0_LOCK_SHIFT           11

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: MAI_TIMING_ERROR [10:10] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_MAI_TIMING_ERROR_MASK     0x00000400
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_MAI_TIMING_ERROR_SHIFT    10

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM9_UNDERFLOW_MASK    0x00000200
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM9_UNDERFLOW_SHIFT   9

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM8_UNDERFLOW_MASK    0x00000100
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM8_UNDERFLOW_SHIFT   8

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM7_UNDERFLOW_MASK    0x00000080
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM7_UNDERFLOW_SHIFT   7

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM6_UNDERFLOW_MASK    0x00000040
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM6_UNDERFLOW_SHIFT   6

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM5_UNDERFLOW_MASK    0x00000020
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM5_UNDERFLOW_SHIFT   5

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM4_UNDERFLOW_MASK    0x00000010
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM4_UNDERFLOW_SHIFT   4

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM3_UNDERFLOW_MASK    0x00000008
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM3_UNDERFLOW_SHIFT   3

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM2_UNDERFLOW_MASK    0x00000004
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM2_UNDERFLOW_SHIFT   2

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM1_UNDERFLOW_MASK    0x00000002
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM1_UNDERFLOW_SHIFT   1

/* AUD_FMM_OP_ESR :: STATUS_CLEAR :: STREAM0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM0_UNDERFLOW_MASK    0x00000001
#define BCHP_AUD_FMM_OP_ESR_STATUS_CLEAR_STREAM0_UNDERFLOW_SHIFT   0

/***************************************************************************
 *MASK - Mask Status Register
 ***************************************************************************/
/* AUD_FMM_OP_ESR :: MASK :: reserved0 [31:24] */
#define BCHP_AUD_FMM_OP_ESR_MASK_reserved0_MASK                    0xff000000
#define BCHP_AUD_FMM_OP_ESR_MASK_reserved0_SHIFT                   24

/* AUD_FMM_OP_ESR :: MASK :: CRC9_INT [23:23] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC9_INT_MASK                     0x00800000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC9_INT_SHIFT                    23

/* AUD_FMM_OP_ESR :: MASK :: CRC8_INT [22:22] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC8_INT_MASK                     0x00400000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC8_INT_SHIFT                    22

/* AUD_FMM_OP_ESR :: MASK :: CRC7_INT [21:21] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC7_INT_MASK                     0x00200000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC7_INT_SHIFT                    21

/* AUD_FMM_OP_ESR :: MASK :: CRC6_INT [20:20] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC6_INT_MASK                     0x00100000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC6_INT_SHIFT                    20

/* AUD_FMM_OP_ESR :: MASK :: CRC5_INT [19:19] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC5_INT_MASK                     0x00080000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC5_INT_SHIFT                    19

/* AUD_FMM_OP_ESR :: MASK :: CRC4_INT [18:18] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC4_INT_MASK                     0x00040000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC4_INT_SHIFT                    18

/* AUD_FMM_OP_ESR :: MASK :: CRC3_INT [17:17] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC3_INT_MASK                     0x00020000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC3_INT_SHIFT                    17

/* AUD_FMM_OP_ESR :: MASK :: CRC2_INT [16:16] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC2_INT_MASK                     0x00010000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC2_INT_SHIFT                    16

/* AUD_FMM_OP_ESR :: MASK :: CRC1_INT [15:15] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC1_INT_MASK                     0x00008000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC1_INT_SHIFT                    15

/* AUD_FMM_OP_ESR :: MASK :: CRC0_INT [14:14] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC0_INT_MASK                     0x00004000
#define BCHP_AUD_FMM_OP_ESR_MASK_CRC0_INT_SHIFT                    14

/* AUD_FMM_OP_ESR :: MASK :: reserved1 [13:12] */
#define BCHP_AUD_FMM_OP_ESR_MASK_reserved1_MASK                    0x00003000
#define BCHP_AUD_FMM_OP_ESR_MASK_reserved1_SHIFT                   12

/* AUD_FMM_OP_ESR :: MASK :: PLL0_LOCK [11:11] */
#define BCHP_AUD_FMM_OP_ESR_MASK_PLL0_LOCK_MASK                    0x00000800
#define BCHP_AUD_FMM_OP_ESR_MASK_PLL0_LOCK_SHIFT                   11

/* AUD_FMM_OP_ESR :: MASK :: MAI_TIMING_ERROR [10:10] */
#define BCHP_AUD_FMM_OP_ESR_MASK_MAI_TIMING_ERROR_MASK             0x00000400
#define BCHP_AUD_FMM_OP_ESR_MASK_MAI_TIMING_ERROR_SHIFT            10

/* AUD_FMM_OP_ESR :: MASK :: STREAM9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM9_UNDERFLOW_MASK            0x00000200
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM9_UNDERFLOW_SHIFT           9

/* AUD_FMM_OP_ESR :: MASK :: STREAM8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM8_UNDERFLOW_MASK            0x00000100
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM8_UNDERFLOW_SHIFT           8

/* AUD_FMM_OP_ESR :: MASK :: STREAM7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM7_UNDERFLOW_MASK            0x00000080
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM7_UNDERFLOW_SHIFT           7

/* AUD_FMM_OP_ESR :: MASK :: STREAM6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM6_UNDERFLOW_MASK            0x00000040
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM6_UNDERFLOW_SHIFT           6

/* AUD_FMM_OP_ESR :: MASK :: STREAM5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM5_UNDERFLOW_MASK            0x00000020
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM5_UNDERFLOW_SHIFT           5

/* AUD_FMM_OP_ESR :: MASK :: STREAM4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM4_UNDERFLOW_MASK            0x00000010
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM4_UNDERFLOW_SHIFT           4

/* AUD_FMM_OP_ESR :: MASK :: STREAM3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM3_UNDERFLOW_MASK            0x00000008
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM3_UNDERFLOW_SHIFT           3

/* AUD_FMM_OP_ESR :: MASK :: STREAM2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM2_UNDERFLOW_MASK            0x00000004
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM2_UNDERFLOW_SHIFT           2

/* AUD_FMM_OP_ESR :: MASK :: STREAM1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM1_UNDERFLOW_MASK            0x00000002
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM1_UNDERFLOW_SHIFT           1

/* AUD_FMM_OP_ESR :: MASK :: STREAM0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM0_UNDERFLOW_MASK            0x00000001
#define BCHP_AUD_FMM_OP_ESR_MASK_STREAM0_UNDERFLOW_SHIFT           0

/***************************************************************************
 *MASK_SET - Mask Set Register
 ***************************************************************************/
/* AUD_FMM_OP_ESR :: MASK_SET :: reserved0 [31:24] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_reserved0_MASK                0xff000000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_reserved0_SHIFT               24

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC9_INT [23:23] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC9_INT_MASK                 0x00800000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC9_INT_SHIFT                23

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC8_INT [22:22] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC8_INT_MASK                 0x00400000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC8_INT_SHIFT                22

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC7_INT [21:21] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC7_INT_MASK                 0x00200000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC7_INT_SHIFT                21

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC6_INT [20:20] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC6_INT_MASK                 0x00100000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC6_INT_SHIFT                20

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC5_INT [19:19] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC5_INT_MASK                 0x00080000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC5_INT_SHIFT                19

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC4_INT [18:18] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC4_INT_MASK                 0x00040000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC4_INT_SHIFT                18

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC3_INT [17:17] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC3_INT_MASK                 0x00020000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC3_INT_SHIFT                17

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC2_INT [16:16] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC2_INT_MASK                 0x00010000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC2_INT_SHIFT                16

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC1_INT [15:15] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC1_INT_MASK                 0x00008000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC1_INT_SHIFT                15

/* AUD_FMM_OP_ESR :: MASK_SET :: CRC0_INT [14:14] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC0_INT_MASK                 0x00004000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_CRC0_INT_SHIFT                14

/* AUD_FMM_OP_ESR :: MASK_SET :: reserved1 [13:12] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_reserved1_MASK                0x00003000
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_reserved1_SHIFT               12

/* AUD_FMM_OP_ESR :: MASK_SET :: PLL0_LOCK [11:11] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_PLL0_LOCK_MASK                0x00000800
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_PLL0_LOCK_SHIFT               11

/* AUD_FMM_OP_ESR :: MASK_SET :: MAI_TIMING_ERROR [10:10] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_MAI_TIMING_ERROR_MASK         0x00000400
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_MAI_TIMING_ERROR_SHIFT        10

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM9_UNDERFLOW_MASK        0x00000200
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM9_UNDERFLOW_SHIFT       9

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM8_UNDERFLOW_MASK        0x00000100
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM8_UNDERFLOW_SHIFT       8

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM7_UNDERFLOW_MASK        0x00000080
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM7_UNDERFLOW_SHIFT       7

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM6_UNDERFLOW_MASK        0x00000040
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM6_UNDERFLOW_SHIFT       6

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM5_UNDERFLOW_MASK        0x00000020
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM5_UNDERFLOW_SHIFT       5

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM4_UNDERFLOW_MASK        0x00000010
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM4_UNDERFLOW_SHIFT       4

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM3_UNDERFLOW_MASK        0x00000008
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM3_UNDERFLOW_SHIFT       3

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM2_UNDERFLOW_MASK        0x00000004
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM2_UNDERFLOW_SHIFT       2

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM1_UNDERFLOW_MASK        0x00000002
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM1_UNDERFLOW_SHIFT       1

/* AUD_FMM_OP_ESR :: MASK_SET :: STREAM0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM0_UNDERFLOW_MASK        0x00000001
#define BCHP_AUD_FMM_OP_ESR_MASK_SET_STREAM0_UNDERFLOW_SHIFT       0

/***************************************************************************
 *MASK_CLEAR - Mask Clear Register
 ***************************************************************************/
/* AUD_FMM_OP_ESR :: MASK_CLEAR :: reserved0 [31:24] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_reserved0_MASK              0xff000000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_reserved0_SHIFT             24

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC9_INT [23:23] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC9_INT_MASK               0x00800000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC9_INT_SHIFT              23

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC8_INT [22:22] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC8_INT_MASK               0x00400000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC8_INT_SHIFT              22

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC7_INT [21:21] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC7_INT_MASK               0x00200000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC7_INT_SHIFT              21

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC6_INT [20:20] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC6_INT_MASK               0x00100000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC6_INT_SHIFT              20

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC5_INT [19:19] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC5_INT_MASK               0x00080000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC5_INT_SHIFT              19

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC4_INT [18:18] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC4_INT_MASK               0x00040000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC4_INT_SHIFT              18

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC3_INT [17:17] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC3_INT_MASK               0x00020000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC3_INT_SHIFT              17

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC2_INT [16:16] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC2_INT_MASK               0x00010000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC2_INT_SHIFT              16

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC1_INT [15:15] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC1_INT_MASK               0x00008000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC1_INT_SHIFT              15

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: CRC0_INT [14:14] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC0_INT_MASK               0x00004000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_CRC0_INT_SHIFT              14

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: reserved1 [13:12] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_reserved1_MASK              0x00003000
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_reserved1_SHIFT             12

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: PLL0_LOCK [11:11] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_PLL0_LOCK_MASK              0x00000800
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_PLL0_LOCK_SHIFT             11

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: MAI_TIMING_ERROR [10:10] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_MAI_TIMING_ERROR_MASK       0x00000400
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_MAI_TIMING_ERROR_SHIFT      10

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM9_UNDERFLOW [09:09] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM9_UNDERFLOW_MASK      0x00000200
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM9_UNDERFLOW_SHIFT     9

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM8_UNDERFLOW [08:08] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM8_UNDERFLOW_MASK      0x00000100
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM8_UNDERFLOW_SHIFT     8

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM7_UNDERFLOW [07:07] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM7_UNDERFLOW_MASK      0x00000080
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM7_UNDERFLOW_SHIFT     7

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM6_UNDERFLOW [06:06] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM6_UNDERFLOW_MASK      0x00000040
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM6_UNDERFLOW_SHIFT     6

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM5_UNDERFLOW [05:05] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM5_UNDERFLOW_MASK      0x00000020
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM5_UNDERFLOW_SHIFT     5

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM4_UNDERFLOW [04:04] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM4_UNDERFLOW_MASK      0x00000010
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM4_UNDERFLOW_SHIFT     4

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM3_UNDERFLOW [03:03] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM3_UNDERFLOW_MASK      0x00000008
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM3_UNDERFLOW_SHIFT     3

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM2_UNDERFLOW [02:02] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM2_UNDERFLOW_MASK      0x00000004
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM2_UNDERFLOW_SHIFT     2

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM1_UNDERFLOW [01:01] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM1_UNDERFLOW_MASK      0x00000002
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM1_UNDERFLOW_SHIFT     1

/* AUD_FMM_OP_ESR :: MASK_CLEAR :: STREAM0_UNDERFLOW [00:00] */
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM0_UNDERFLOW_MASK      0x00000001
#define BCHP_AUD_FMM_OP_ESR_MASK_CLEAR_STREAM0_UNDERFLOW_SHIFT     0

#endif /* #ifndef BCHP_AUD_FMM_OP_ESR_H__ */

/* End of File */
