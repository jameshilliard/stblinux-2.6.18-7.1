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
 * Date:           Generated on         Fri Mar 20 12:55:16 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_xpt_pmu.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:33p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_XPT_PMU_H__
#define BCHP_XPT_PMU_H__

/***************************************************************************
 *XPT_PMU - XPT PMU Control Registers
 ***************************************************************************/
#define BCHP_XPT_PMU_CLK_CTRL                    0x00381800 /* Wake-up packet detection control */
#define BCHP_XPT_PMU_RBUS_RSP_CTRL               0x00381804 /* Wake-up packet detection control */
#define BCHP_XPT_PMU_RBUS_RSP_VAL                0x00381808 /* Wake-up packet detection control */

/***************************************************************************
 *CLK_CTRL - Wake-up packet detection control
 ***************************************************************************/
/* XPT_PMU :: CLK_CTRL :: reserved0 [31:17] */
#define BCHP_XPT_PMU_CLK_CTRL_reserved0_MASK                       0xfffe0000
#define BCHP_XPT_PMU_CLK_CTRL_reserved0_SHIFT                      17

/* XPT_PMU :: CLK_CTRL :: WAKEUP_DISABLE [16:16] */
#define BCHP_XPT_PMU_CLK_CTRL_WAKEUP_DISABLE_MASK                  0x00010000
#define BCHP_XPT_PMU_CLK_CTRL_WAKEUP_DISABLE_SHIFT                 16

/* XPT_PMU :: CLK_CTRL :: RMX1_DISABLE [15:15] */
#define BCHP_XPT_PMU_CLK_CTRL_RMX1_DISABLE_MASK                    0x00008000
#define BCHP_XPT_PMU_CLK_CTRL_RMX1_DISABLE_SHIFT                   15

/* XPT_PMU :: CLK_CTRL :: RMX0_DISABLE [14:14] */
#define BCHP_XPT_PMU_CLK_CTRL_RMX0_DISABLE_MASK                    0x00004000
#define BCHP_XPT_PMU_CLK_CTRL_RMX0_DISABLE_SHIFT                   14

/* XPT_PMU :: CLK_CTRL :: MPOD_DISABLE [13:13] */
#define BCHP_XPT_PMU_CLK_CTRL_MPOD_DISABLE_MASK                    0x00002000
#define BCHP_XPT_PMU_CLK_CTRL_MPOD_DISABLE_SHIFT                   13

/* XPT_PMU :: CLK_CTRL :: XPT_IO_DISABLE [12:12] */
#define BCHP_XPT_PMU_CLK_CTRL_XPT_IO_DISABLE_MASK                  0x00001000
#define BCHP_XPT_PMU_CLK_CTRL_XPT_IO_DISABLE_SHIFT                 12

/* XPT_PMU :: CLK_CTRL :: PB_DISABLE [11:11] */
#define BCHP_XPT_PMU_CLK_CTRL_PB_DISABLE_MASK                      0x00000800
#define BCHP_XPT_PMU_CLK_CTRL_PB_DISABLE_SHIFT                     11

/* XPT_PMU :: CLK_CTRL :: PSUB_DISABLE [10:10] */
#define BCHP_XPT_PMU_CLK_CTRL_PSUB_DISABLE_MASK                    0x00000400
#define BCHP_XPT_PMU_CLK_CTRL_PSUB_DISABLE_SHIFT                   10

/* XPT_PMU :: CLK_CTRL :: BUS_IF_DISABLE [09:09] */
#define BCHP_XPT_PMU_CLK_CTRL_BUS_IF_DISABLE_MASK                  0x00000200
#define BCHP_XPT_PMU_CLK_CTRL_BUS_IF_DISABLE_SHIFT                 9

/* XPT_PMU :: CLK_CTRL :: PCROFFSET_DISABLE [08:08] */
#define BCHP_XPT_PMU_CLK_CTRL_PCROFFSET_DISABLE_MASK               0x00000100
#define BCHP_XPT_PMU_CLK_CTRL_PCROFFSET_DISABLE_SHIFT              8

/* XPT_PMU :: CLK_CTRL :: RAVE_DISABLE [07:07] */
#define BCHP_XPT_PMU_CLK_CTRL_RAVE_DISABLE_MASK                    0x00000080
#define BCHP_XPT_PMU_CLK_CTRL_RAVE_DISABLE_SHIFT                   7

/* XPT_PMU :: CLK_CTRL :: MSG_DISABLE [06:06] */
#define BCHP_XPT_PMU_CLK_CTRL_MSG_DISABLE_MASK                     0x00000040
#define BCHP_XPT_PMU_CLK_CTRL_MSG_DISABLE_SHIFT                    6

/* XPT_PMU :: CLK_CTRL :: DPCR_DISABLE [05:05] */
#define BCHP_XPT_PMU_CLK_CTRL_DPCR_DISABLE_MASK                    0x00000020
#define BCHP_XPT_PMU_CLK_CTRL_DPCR_DISABLE_SHIFT                   5

/* XPT_PMU :: CLK_CTRL :: XMEMIF_216_DISABLE [04:04] */
#define BCHP_XPT_PMU_CLK_CTRL_XMEMIF_216_DISABLE_MASK              0x00000010
#define BCHP_XPT_PMU_CLK_CTRL_XMEMIF_216_DISABLE_SHIFT             4

/* XPT_PMU :: CLK_CTRL :: XMEMIF_108_DISABLE [03:03] */
#define BCHP_XPT_PMU_CLK_CTRL_XMEMIF_108_DISABLE_MASK              0x00000008
#define BCHP_XPT_PMU_CLK_CTRL_XMEMIF_108_DISABLE_SHIFT             3

/* XPT_PMU :: CLK_CTRL :: XCBUFF_DISABLE [02:02] */
#define BCHP_XPT_PMU_CLK_CTRL_XCBUFF_DISABLE_MASK                  0x00000004
#define BCHP_XPT_PMU_CLK_CTRL_XCBUFF_DISABLE_SHIFT                 2

/* XPT_PMU :: CLK_CTRL :: RSBUFF_DISABLE [01:01] */
#define BCHP_XPT_PMU_CLK_CTRL_RSBUFF_DISABLE_MASK                  0x00000002
#define BCHP_XPT_PMU_CLK_CTRL_RSBUFF_DISABLE_SHIFT                 1

/* XPT_PMU :: CLK_CTRL :: FE_DISABLE [00:00] */
#define BCHP_XPT_PMU_CLK_CTRL_FE_DISABLE_MASK                      0x00000001
#define BCHP_XPT_PMU_CLK_CTRL_FE_DISABLE_SHIFT                     0

/***************************************************************************
 *RBUS_RSP_CTRL - Wake-up packet detection control
 ***************************************************************************/
/* XPT_PMU :: RBUS_RSP_CTRL :: reserved0 [31:02] */
#define BCHP_XPT_PMU_RBUS_RSP_CTRL_reserved0_MASK                  0xfffffffc
#define BCHP_XPT_PMU_RBUS_RSP_CTRL_reserved0_SHIFT                 2

/* XPT_PMU :: RBUS_RSP_CTRL :: RBUS_WR_RSP [01:01] */
#define BCHP_XPT_PMU_RBUS_RSP_CTRL_RBUS_WR_RSP_MASK                0x00000002
#define BCHP_XPT_PMU_RBUS_RSP_CTRL_RBUS_WR_RSP_SHIFT               1

/* XPT_PMU :: RBUS_RSP_CTRL :: RBUS_RD_RSP [00:00] */
#define BCHP_XPT_PMU_RBUS_RSP_CTRL_RBUS_RD_RSP_MASK                0x00000001
#define BCHP_XPT_PMU_RBUS_RSP_CTRL_RBUS_RD_RSP_SHIFT               0

/***************************************************************************
 *RBUS_RSP_VAL - Wake-up packet detection control
 ***************************************************************************/
/* XPT_PMU :: RBUS_RSP_VAL :: RD_RSP_VAL [31:00] */
#define BCHP_XPT_PMU_RBUS_RSP_VAL_RD_RSP_VAL_MASK                  0xffffffff
#define BCHP_XPT_PMU_RBUS_RSP_VAL_RD_RSP_VAL_SHIFT                 0

#endif /* #ifndef BCHP_XPT_PMU_H__ */

/* End of File */
