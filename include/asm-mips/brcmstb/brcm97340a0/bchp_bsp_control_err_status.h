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
 * Date:           Generated on         Fri Mar 20 13:05:36 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_bsp_control_err_status.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 7:53p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_BSP_CONTROL_ERR_STATUS_H__
#define BCHP_BSP_CONTROL_ERR_STATUS_H__

/***************************************************************************
 *BSP_CONTROL_ERR_STATUS - BSP ERROR STATUS Register
 ***************************************************************************/
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1   0x0032b200 /* HW Error Flags */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_2   0x0032b204 /* HW Error Flags */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_3   0x0032b208 /* HW Error Flags */
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_FLAGS     0x0032b20c /* FW Error Flags */
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_COUNTER   0x0032b210 /* FW Error Flags */

/***************************************************************************
 *HW_FLAGS_1 - HW Error Flags
 ***************************************************************************/
/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: reserved0 [31:12] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_reserved0_MASK      0xfffff000
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_reserved0_SHIFT     12

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: RAM_ENABLE_HW [11:11] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_RAM_ENABLE_HW_MASK  0x00000800
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_RAM_ENABLE_HW_SHIFT 11

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: DMA_ILLEGAL_STATE [10:10] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_ILLEGAL_STATE_MASK 0x00000400
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_ILLEGAL_STATE_SHIFT 10

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: BOOT_ROM_CRC [09:09] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_BOOT_ROM_CRC_MASK   0x00000200
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_BOOT_ROM_CRC_SHIFT  9

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: SHA_ILLEGAL_STATE [08:08] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SHA_ILLEGAL_STATE_MASK 0x00000100
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SHA_ILLEGAL_STATE_SHIFT 8

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: SHA_DIGEST_TIMEOUT [07:07] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SHA_DIGEST_TIMEOUT_MASK 0x00000080
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SHA_DIGEST_TIMEOUT_SHIFT 7

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: DMA_END_STATE_MISMATCH [06:06] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_END_STATE_MISMATCH_MASK 0x00000040
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_END_STATE_MISMATCH_SHIFT 6

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: DMA_STATE_MISMATCH [05:05] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_STATE_MISMATCH_MASK 0x00000020
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_STATE_MISMATCH_SHIFT 5

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: DMA_CNT_MISMATCH [04:04] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_CNT_MISMATCH_MASK 0x00000010
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_DMA_CNT_MISMATCH_SHIFT 4

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: SHA_MISMATCH [03:03] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SHA_MISMATCH_MASK   0x00000008
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SHA_MISMATCH_SHIFT  3

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: SIG_MISMATCH [02:02] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SIG_MISMATCH_MASK   0x00000004
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_SIG_MISMATCH_SHIFT  2

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_1 :: reserved1 [01:00] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_reserved1_MASK      0x00000003
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_1_reserved1_SHIFT     0

/***************************************************************************
 *HW_FLAGS_2 - HW Error Flags
 ***************************************************************************/
/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_2 :: reserved0 [31:01] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_2_reserved0_MASK      0xfffffffe
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_2_reserved0_SHIFT     1

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_2 :: RAM_ENABLE_TRIG [00:00] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_2_RAM_ENABLE_TRIG_MASK 0x00000001
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_2_RAM_ENABLE_TRIG_SHIFT 0

/***************************************************************************
 *HW_FLAGS_3 - HW Error Flags
 ***************************************************************************/
/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_3 :: reserved0 [31:01] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_3_reserved0_MASK      0xfffffffe
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_3_reserved0_SHIFT     1

/* BSP_CONTROL_ERR_STATUS :: HW_FLAGS_3 :: DISASTER_RECOVER [00:00] */
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_3_DISASTER_RECOVER_MASK 0x00000001
#define BCHP_BSP_CONTROL_ERR_STATUS_HW_FLAGS_3_DISASTER_RECOVER_SHIFT 0

/***************************************************************************
 *FW_FLAGS - FW Error Flags
 ***************************************************************************/
/* BSP_CONTROL_ERR_STATUS :: FW_FLAGS :: FW_ERR [31:00] */
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_FLAGS_FW_ERR_MASK           0xffffffff
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_FLAGS_FW_ERR_SHIFT          0

/***************************************************************************
 *FW_COUNTER - FW Error Flags
 ***************************************************************************/
/* BSP_CONTROL_ERR_STATUS :: FW_COUNTER :: reserved0 [31:08] */
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_COUNTER_reserved0_MASK      0xffffff00
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_COUNTER_reserved0_SHIFT     8

/* BSP_CONTROL_ERR_STATUS :: FW_COUNTER :: FW_CNT [07:00] */
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_COUNTER_FW_CNT_MASK         0x000000ff
#define BCHP_BSP_CONTROL_ERR_STATUS_FW_COUNTER_FW_CNT_SHIFT        0

#endif /* #ifndef BCHP_BSP_CONTROL_ERR_STATUS_H__ */

/* End of File */
