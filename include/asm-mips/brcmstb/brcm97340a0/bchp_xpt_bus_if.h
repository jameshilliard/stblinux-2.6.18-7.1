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
 * Date:           Generated on         Fri Mar 20 12:59:26 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_xpt_bus_if.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 9:27p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_XPT_BUS_IF_H__
#define BCHP_XPT_BUS_IF_H__

/***************************************************************************
 *XPT_BUS_IF - Data Transport Configuration Registers
 ***************************************************************************/
#define BCHP_XPT_BUS_IF_MISC_CTRL0               0x00380000 /* Data Transport Misc Control 0 Register */
#define BCHP_XPT_BUS_IF_TEST_MODE                0x00380004 /* Data transport test register */
#define BCHP_XPT_BUS_IF_REVISION                 0x00380008 /* Data Transport Revision Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG          0x00380020 /* Interrupt Status Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN       0x00380024 /* Interrupt Status Enable Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG         0x00380028 /* Interrupt Status2 Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN      0x0038002c /* Interrupt Status2 Enable Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG         0x00380030 /* Interrupt Status3 Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_EN      0x00380034 /* Interrupt Status3 Enable Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG         0x00380038 /* Interrupt Status4 Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN      0x0038003c /* Interrupt Status4 Enable Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG         0x00380040 /* Interrupt Status5 Register */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN      0x00380044 /* Interrupt Status5 Enable Register */
#define BCHP_XPT_BUS_IF_XMEMIF_RD_LC_DEBUG_REG   0x00380048 /* LCIF to XMEMIF Debug Registers */
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG   0x0038004c /* LCIF to XMEMIF Debug Registers */
#define BCHP_XPT_BUS_IF_MAX_PLAYBACKS            0x00380050 /* Data Transport max number of playbacks supported */
#define BCHP_XPT_BUS_IF_MAX_PID_PARSERS          0x00380054 /* Data Transport max number of PID parsers supported */
#define BCHP_XPT_BUS_IF_MAX_PID_CHANNELS         0x00380058 /* Data Transport max number of PID channels supported */
#define BCHP_XPT_BUS_IF_MAX_INPUT_BANDS          0x0038005c /* Data Transport max number of input bands supported */
#define BCHP_XPT_BUS_IF_MAX_PCRS                 0x00380060 /* Data Transport max number of PCRs supported */
#define BCHP_XPT_BUS_IF_MAX_TPIT_CHANNELS        0x00380064 /* Data Transport max number of TPIT channels supported */
#define BCHP_XPT_BUS_IF_MAX_RAVE_CONTEXTS        0x00380068 /* Data Transport max number of RAVE contexts supported */
#define BCHP_XPT_BUS_IF_MAX_RMX_CHANNELS         0x0038006c /* Data Transport max number of RMX channels supported */
#define BCHP_XPT_BUS_IF_MAX_MSG_BUFFERS          0x00380070 /* Data Transport max number of MSG buffers supported */
#define BCHP_XPT_BUS_IF_MAX_SCDS                 0x00380074 /* Data Transport max number of SCDs supported */

/***************************************************************************
 *MISC_CTRL0 - Data Transport Misc Control 0 Register
 ***************************************************************************/
/* XPT_BUS_IF :: MISC_CTRL0 :: reserved0 [31:03] */
#define BCHP_XPT_BUS_IF_MISC_CTRL0_reserved0_MASK                  0xfffffff8
#define BCHP_XPT_BUS_IF_MISC_CTRL0_reserved0_SHIFT                 3

/* XPT_BUS_IF :: MISC_CTRL0 :: ERROR_INT_TEST_MODE [02:02] */
#define BCHP_XPT_BUS_IF_MISC_CTRL0_ERROR_INT_TEST_MODE_MASK        0x00000004
#define BCHP_XPT_BUS_IF_MISC_CTRL0_ERROR_INT_TEST_MODE_SHIFT       2

/* XPT_BUS_IF :: MISC_CTRL0 :: ICAM_INT_TEST_MODE [01:01] */
#define BCHP_XPT_BUS_IF_MISC_CTRL0_ICAM_INT_TEST_MODE_MASK         0x00000002
#define BCHP_XPT_BUS_IF_MISC_CTRL0_ICAM_INT_TEST_MODE_SHIFT        1

/* XPT_BUS_IF :: MISC_CTRL0 :: LINK_LIST_DESC_ENDIAN_CTRL [00:00] */
#define BCHP_XPT_BUS_IF_MISC_CTRL0_LINK_LIST_DESC_ENDIAN_CTRL_MASK 0x00000001
#define BCHP_XPT_BUS_IF_MISC_CTRL0_LINK_LIST_DESC_ENDIAN_CTRL_SHIFT 0

/***************************************************************************
 *TEST_MODE - Data transport test register
 ***************************************************************************/
/* XPT_BUS_IF :: TEST_MODE :: reserved0 [31:01] */
#define BCHP_XPT_BUS_IF_TEST_MODE_reserved0_MASK                   0xfffffffe
#define BCHP_XPT_BUS_IF_TEST_MODE_reserved0_SHIFT                  1

/* XPT_BUS_IF :: TEST_MODE :: PSG_SECRET_ENBLE [00:00] */
#define BCHP_XPT_BUS_IF_TEST_MODE_PSG_SECRET_ENBLE_MASK            0x00000001
#define BCHP_XPT_BUS_IF_TEST_MODE_PSG_SECRET_ENBLE_SHIFT           0

/***************************************************************************
 *REVISION - Data Transport Revision Register
 ***************************************************************************/
/* XPT_BUS_IF :: REVISION :: reserved0 [31:16] */
#define BCHP_XPT_BUS_IF_REVISION_reserved0_MASK                    0xffff0000
#define BCHP_XPT_BUS_IF_REVISION_reserved0_SHIFT                   16

/* XPT_BUS_IF :: REVISION :: MAJOR_REV_NUMBER [15:08] */
#define BCHP_XPT_BUS_IF_REVISION_MAJOR_REV_NUMBER_MASK             0x0000ff00
#define BCHP_XPT_BUS_IF_REVISION_MAJOR_REV_NUMBER_SHIFT            8

/* XPT_BUS_IF :: REVISION :: MINOR_REV_NUMBER [07:00] */
#define BCHP_XPT_BUS_IF_REVISION_MINOR_REV_NUMBER_MASK             0x000000ff
#define BCHP_XPT_BUS_IF_REVISION_MINOR_REV_NUMBER_SHIFT            0

/***************************************************************************
 *INTR_STATUS_REG - Interrupt Status Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS_REG :: reserved0 [31:25] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_reserved0_MASK             0xfe000000
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_reserved0_SHIFT            25

/* XPT_BUS_IF :: INTR_STATUS_REG :: RSBUFF_OVERFLFLOW_INTR [24:24] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_RSBUFF_OVERFLFLOW_INTR_MASK 0x01000000
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_RSBUFF_OVERFLFLOW_INTR_SHIFT 24

/* XPT_BUS_IF :: INTR_STATUS_REG :: XCBUFF_OVERFLOW_INTR [23:23] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_XCBUFF_OVERFLOW_INTR_MASK  0x00800000
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_XCBUFF_OVERFLOW_INTR_SHIFT 23

/* XPT_BUS_IF :: INTR_STATUS_REG :: reserved1 [22:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_reserved1_MASK             0x007fffff
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_reserved1_SHIFT            0

/***************************************************************************
 *INTR_STATUS_REG_EN - Interrupt Status Enable Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS_REG_EN :: reserved0 [31:25] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_reserved0_MASK          0xfe000000
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_reserved0_SHIFT         25

/* XPT_BUS_IF :: INTR_STATUS_REG_EN :: RSBUFF_OVERFLFLOW_INTR_EN [24:24] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_RSBUFF_OVERFLFLOW_INTR_EN_MASK 0x01000000
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_RSBUFF_OVERFLFLOW_INTR_EN_SHIFT 24

/* XPT_BUS_IF :: INTR_STATUS_REG_EN :: XCBUFF_OVERFLOW_INTR_EN [23:23] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_XCBUFF_OVERFLOW_INTR_EN_MASK 0x00800000
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_XCBUFF_OVERFLOW_INTR_EN_SHIFT 23

/* XPT_BUS_IF :: INTR_STATUS_REG_EN :: reserved1 [22:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_reserved1_MASK          0x007fffff
#define BCHP_XPT_BUS_IF_INTR_STATUS_REG_EN_reserved1_SHIFT         0

/***************************************************************************
 *INTR_STATUS2_REG - Interrupt Status2 Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS2_REG :: reserved0 [31:03] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_reserved0_MASK            0xfffffff8
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_reserved0_SHIFT           3

/* XPT_BUS_IF :: INTR_STATUS2_REG :: CA_ERR_INT [02:02] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CA_ERR_INT_MASK           0x00000004
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CA_ERR_INT_SHIFT          2

/* XPT_BUS_IF :: INTR_STATUS2_REG :: CP_DEC_ERR_INT [01:01] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CP_DEC_ERR_INT_MASK       0x00000002
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CP_DEC_ERR_INT_SHIFT      1

/* XPT_BUS_IF :: INTR_STATUS2_REG :: CP_ENC_ERR_INT [00:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CP_ENC_ERR_INT_MASK       0x00000001
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_CP_ENC_ERR_INT_SHIFT      0

/***************************************************************************
 *INTR_STATUS2_REG_EN - Interrupt Status2 Enable Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS2_REG_EN :: reserved0 [31:03] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_reserved0_MASK         0xfffffff8
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_reserved0_SHIFT        3

/* XPT_BUS_IF :: INTR_STATUS2_REG_EN :: CA_ERR_INT_EN [02:02] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_CA_ERR_INT_EN_MASK     0x00000004
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_CA_ERR_INT_EN_SHIFT    2

/* XPT_BUS_IF :: INTR_STATUS2_REG_EN :: CP_DEC_ERR_INT_EN [01:01] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_CP_DEC_ERR_INT_EN_MASK 0x00000002
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_CP_DEC_ERR_INT_EN_SHIFT 1

/* XPT_BUS_IF :: INTR_STATUS2_REG_EN :: CP_ENC_ERR_INT_EN [00:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_CP_ENC_ERR_INT_EN_MASK 0x00000001
#define BCHP_XPT_BUS_IF_INTR_STATUS2_REG_EN_CP_ENC_ERR_INT_EN_SHIFT 0

/***************************************************************************
 *INTR_STATUS3_REG - Interrupt Status3 Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS3_REG :: reserved0 [31:01] */
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_reserved0_MASK            0xfffffffe
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_reserved0_SHIFT           1

/* XPT_BUS_IF :: INTR_STATUS3_REG :: ICAM_INTR [00:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_ICAM_INTR_MASK            0x00000001
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_ICAM_INTR_SHIFT           0

/***************************************************************************
 *INTR_STATUS3_REG_EN - Interrupt Status3 Enable Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS3_REG_EN :: reserved0 [31:01] */
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_EN_reserved0_MASK         0xfffffffe
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_EN_reserved0_SHIFT        1

/* XPT_BUS_IF :: INTR_STATUS3_REG_EN :: ICAM_INTR_EN [00:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_EN_ICAM_INTR_EN_MASK      0x00000001
#define BCHP_XPT_BUS_IF_INTR_STATUS3_REG_EN_ICAM_INTR_EN_SHIFT     0

/***************************************************************************
 *INTR_STATUS4_REG - Interrupt Status4 Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS4_REG :: TSMF1_SYNC_ERROR [31:31] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF1_SYNC_ERROR_MASK     0x80000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF1_SYNC_ERROR_SHIFT    31

/* XPT_BUS_IF :: INTR_STATUS4_REG :: TSMF1_FRAME_ERROR [30:30] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF1_FRAME_ERROR_MASK    0x40000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF1_FRAME_ERROR_SHIFT   30

/* XPT_BUS_IF :: INTR_STATUS4_REG :: TSMF0_SYNC_ERROR [29:29] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF0_SYNC_ERROR_MASK     0x20000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF0_SYNC_ERROR_SHIFT    29

/* XPT_BUS_IF :: INTR_STATUS4_REG :: TSMF0_FRAME_ERROR [28:28] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF0_FRAME_ERROR_MASK    0x10000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_TSMF0_FRAME_ERROR_SHIFT   28

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB7_EOB_INT [27:27] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB7_EOB_INT_MASK        0x08000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB7_EOB_INT_SHIFT       27

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB6_EOB_INT [26:26] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB6_EOB_INT_MASK        0x04000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB6_EOB_INT_SHIFT       26

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB5_EOB_INT [25:25] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB5_EOB_INT_MASK        0x02000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB5_EOB_INT_SHIFT       25

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB4_EOB_INT [24:24] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB4_EOB_INT_MASK        0x01000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB4_EOB_INT_SHIFT       24

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB3_EOB_INT [23:23] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB3_EOB_INT_MASK        0x00800000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB3_EOB_INT_SHIFT       23

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB2_EOB_INT [22:22] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB2_EOB_INT_MASK        0x00400000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB2_EOB_INT_SHIFT       22

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB1_EOB_INT [21:21] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB1_EOB_INT_MASK        0x00200000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB1_EOB_INT_SHIFT       21

/* XPT_BUS_IF :: INTR_STATUS4_REG :: PSUB0_EOB_INT [20:20] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB0_EOB_INT_MASK        0x00100000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_PSUB0_EOB_INT_SHIFT       20

/* XPT_BUS_IF :: INTR_STATUS4_REG :: reserved0 [19:15] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_reserved0_MASK            0x000f8000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_reserved0_SHIFT           15

/* XPT_BUS_IF :: INTR_STATUS4_REG :: GISB_BRIDGE [14:14] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_GISB_BRIDGE_MASK          0x00004000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_GISB_BRIDGE_SHIFT         14

/* XPT_BUS_IF :: INTR_STATUS4_REG :: reserved1 [13:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_reserved1_MASK            0x00003fff
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_reserved1_SHIFT           0

/***************************************************************************
 *INTR_STATUS4_REG_EN - Interrupt Status4 Enable Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: TSMF1_SYNC_ERROR_EN [31:31] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF1_SYNC_ERROR_EN_MASK 0x80000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF1_SYNC_ERROR_EN_SHIFT 31

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: TSMF1_FRAME_ERROR_EN [30:30] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF1_FRAME_ERROR_EN_MASK 0x40000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF1_FRAME_ERROR_EN_SHIFT 30

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: TSMF0_SYNC_ERROR_EN [29:29] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF0_SYNC_ERROR_EN_MASK 0x20000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF0_SYNC_ERROR_EN_SHIFT 29

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: TSMF0_FRAME_ERROR [28:28] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF0_FRAME_ERROR_MASK 0x10000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_TSMF0_FRAME_ERROR_SHIFT 28

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB7_EOB_INT_EN [27:27] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB7_EOB_INT_EN_MASK  0x08000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB7_EOB_INT_EN_SHIFT 27

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB6_EOB_INT_EN [26:26] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB6_EOB_INT_EN_MASK  0x04000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB6_EOB_INT_EN_SHIFT 26

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB5_EOB_INT_EN [25:25] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB5_EOB_INT_EN_MASK  0x02000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB5_EOB_INT_EN_SHIFT 25

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB4_EOB_INT_EN [24:24] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB4_EOB_INT_EN_MASK  0x01000000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB4_EOB_INT_EN_SHIFT 24

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB3_EOB_INT_EN [23:23] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB3_EOB_INT_EN_MASK  0x00800000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB3_EOB_INT_EN_SHIFT 23

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB2_EOB_INT_EN [22:22] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB2_EOB_INT_EN_MASK  0x00400000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB2_EOB_INT_EN_SHIFT 22

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB1_EOB_INT_EN [21:21] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB1_EOB_INT_EN_MASK  0x00200000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB1_EOB_INT_EN_SHIFT 21

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: PSUB0_EOB_INT_EN [20:20] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB0_EOB_INT_EN_MASK  0x00100000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_PSUB0_EOB_INT_EN_SHIFT 20

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: reserved0 [19:15] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_reserved0_MASK         0x000f8000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_reserved0_SHIFT        15

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: GISB_BRIDGE_EN [14:14] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_GISB_BRIDGE_EN_MASK    0x00004000
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_GISB_BRIDGE_EN_SHIFT   14

/* XPT_BUS_IF :: INTR_STATUS4_REG_EN :: reserved1 [13:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_reserved1_MASK         0x00003fff
#define BCHP_XPT_BUS_IF_INTR_STATUS4_REG_EN_reserved1_SHIFT        0

/***************************************************************************
 *INTR_STATUS5_REG - Interrupt Status5 Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS5_REG :: reserved0 [31:21] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_reserved0_MASK            0xffe00000
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_reserved0_SHIFT           21

/* XPT_BUS_IF :: INTR_STATUS5_REG :: MPOD_EXTRACTOR_CRC_ERROR [20:20] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_MPOD_EXTRACTOR_CRC_ERROR_MASK 0x00100000
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_MPOD_EXTRACTOR_CRC_ERROR_SHIFT 20

/* XPT_BUS_IF :: INTR_STATUS5_REG :: reserved1 [19:01] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_reserved1_MASK            0x000ffffe
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_reserved1_SHIFT           1

/* XPT_BUS_IF :: INTR_STATUS5_REG :: WRCHECKER_INT [00:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_WRCHECKER_INT_MASK        0x00000001
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_WRCHECKER_INT_SHIFT       0

/***************************************************************************
 *INTR_STATUS5_REG_EN - Interrupt Status5 Enable Register
 ***************************************************************************/
/* XPT_BUS_IF :: INTR_STATUS5_REG_EN :: reserved0 [31:21] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_reserved0_MASK         0xffe00000
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_reserved0_SHIFT        21

/* XPT_BUS_IF :: INTR_STATUS5_REG_EN :: MPOD_EXTRACTOR_CRC_ERROR_EN [20:20] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_MPOD_EXTRACTOR_CRC_ERROR_EN_MASK 0x00100000
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_MPOD_EXTRACTOR_CRC_ERROR_EN_SHIFT 20

/* XPT_BUS_IF :: INTR_STATUS5_REG_EN :: reserved1 [19:01] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_reserved1_MASK         0x000ffffe
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_reserved1_SHIFT        1

/* XPT_BUS_IF :: INTR_STATUS5_REG_EN :: WRCHECKER_INT [00:00] */
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_WRCHECKER_INT_MASK     0x00000001
#define BCHP_XPT_BUS_IF_INTR_STATUS5_REG_EN_WRCHECKER_INT_SHIFT    0

/***************************************************************************
 *XMEMIF_RD_LC_DEBUG_REG - LCIF to XMEMIF Debug Registers
 ***************************************************************************/
/* XPT_BUS_IF :: XMEMIF_RD_LC_DEBUG_REG :: reserved0 [31:16] */
#define BCHP_XPT_BUS_IF_XMEMIF_RD_LC_DEBUG_REG_reserved0_MASK      0xffff0000
#define BCHP_XPT_BUS_IF_XMEMIF_RD_LC_DEBUG_REG_reserved0_SHIFT     16

/* XPT_BUS_IF :: XMEMIF_RD_LC_DEBUG_REG :: PB_DEBUG_REG [15:08] */
#define BCHP_XPT_BUS_IF_XMEMIF_RD_LC_DEBUG_REG_PB_DEBUG_REG_MASK   0x0000ff00
#define BCHP_XPT_BUS_IF_XMEMIF_RD_LC_DEBUG_REG_PB_DEBUG_REG_SHIFT  8

/* XPT_BUS_IF :: XMEMIF_RD_LC_DEBUG_REG :: PSUB_DEBUG_REG [07:00] */
#define BCHP_XPT_BUS_IF_XMEMIF_RD_LC_DEBUG_REG_PSUB_DEBUG_REG_MASK 0x000000ff
#define BCHP_XPT_BUS_IF_XMEMIF_RD_LC_DEBUG_REG_PSUB_DEBUG_REG_SHIFT 0

/***************************************************************************
 *XMEMIF_WR_LC_DEBUG_REG - LCIF to XMEMIF Debug Registers
 ***************************************************************************/
/* XPT_BUS_IF :: XMEMIF_WR_LC_DEBUG_REG :: reserved0 [31:05] */
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_reserved0_MASK      0xffffffe0
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_reserved0_SHIFT     5

/* XPT_BUS_IF :: XMEMIF_WR_LC_DEBUG_REG :: RSBUFF_WR_DEBUG_REG [04:04] */
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_RSBUFF_WR_DEBUG_REG_MASK 0x00000010
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_RSBUFF_WR_DEBUG_REG_SHIFT 4

/* XPT_BUS_IF :: XMEMIF_WR_LC_DEBUG_REG :: XCBUFF_WR_DEBUG_REG [03:03] */
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_XCBUFF_WR_DEBUG_REG_MASK 0x00000008
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_XCBUFF_WR_DEBUG_REG_SHIFT 3

/* XPT_BUS_IF :: XMEMIF_WR_LC_DEBUG_REG :: MSG_DEBUG_REG [02:02] */
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_MSG_DEBUG_REG_MASK  0x00000004
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_MSG_DEBUG_REG_SHIFT 2

/* XPT_BUS_IF :: XMEMIF_WR_LC_DEBUG_REG :: RAVE_DEBUG_REG [01:00] */
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_RAVE_DEBUG_REG_MASK 0x00000003
#define BCHP_XPT_BUS_IF_XMEMIF_WR_LC_DEBUG_REG_RAVE_DEBUG_REG_SHIFT 0

/***************************************************************************
 *MAX_PLAYBACKS - Data Transport max number of playbacks supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_PLAYBACKS :: reserved0 [31:04] */
#define BCHP_XPT_BUS_IF_MAX_PLAYBACKS_reserved0_MASK               0xfffffff0
#define BCHP_XPT_BUS_IF_MAX_PLAYBACKS_reserved0_SHIFT              4

/* XPT_BUS_IF :: MAX_PLAYBACKS :: MAX_PLAYBACKS [03:00] */
#define BCHP_XPT_BUS_IF_MAX_PLAYBACKS_MAX_PLAYBACKS_MASK           0x0000000f
#define BCHP_XPT_BUS_IF_MAX_PLAYBACKS_MAX_PLAYBACKS_SHIFT          0

/***************************************************************************
 *MAX_PID_PARSERS - Data Transport max number of PID parsers supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_PID_PARSERS :: reserved0 [31:04] */
#define BCHP_XPT_BUS_IF_MAX_PID_PARSERS_reserved0_MASK             0xfffffff0
#define BCHP_XPT_BUS_IF_MAX_PID_PARSERS_reserved0_SHIFT            4

/* XPT_BUS_IF :: MAX_PID_PARSERS :: MAX_PID_PARSERS [03:00] */
#define BCHP_XPT_BUS_IF_MAX_PID_PARSERS_MAX_PID_PARSERS_MASK       0x0000000f
#define BCHP_XPT_BUS_IF_MAX_PID_PARSERS_MAX_PID_PARSERS_SHIFT      0

/***************************************************************************
 *MAX_PID_CHANNELS - Data Transport max number of PID channels supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_PID_CHANNELS :: reserved0 [31:12] */
#define BCHP_XPT_BUS_IF_MAX_PID_CHANNELS_reserved0_MASK            0xfffff000
#define BCHP_XPT_BUS_IF_MAX_PID_CHANNELS_reserved0_SHIFT           12

/* XPT_BUS_IF :: MAX_PID_CHANNELS :: MAX_PID_CHANNELS [11:00] */
#define BCHP_XPT_BUS_IF_MAX_PID_CHANNELS_MAX_PID_CHANNELS_MASK     0x00000fff
#define BCHP_XPT_BUS_IF_MAX_PID_CHANNELS_MAX_PID_CHANNELS_SHIFT    0

/***************************************************************************
 *MAX_INPUT_BANDS - Data Transport max number of input bands supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_INPUT_BANDS :: reserved0 [31:04] */
#define BCHP_XPT_BUS_IF_MAX_INPUT_BANDS_reserved0_MASK             0xfffffff0
#define BCHP_XPT_BUS_IF_MAX_INPUT_BANDS_reserved0_SHIFT            4

/* XPT_BUS_IF :: MAX_INPUT_BANDS :: MAX_INPUT_BANDS [03:00] */
#define BCHP_XPT_BUS_IF_MAX_INPUT_BANDS_MAX_INPUT_BANDS_MASK       0x0000000f
#define BCHP_XPT_BUS_IF_MAX_INPUT_BANDS_MAX_INPUT_BANDS_SHIFT      0

/***************************************************************************
 *MAX_PCRS - Data Transport max number of PCRs supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_PCRS :: reserved0 [31:04] */
#define BCHP_XPT_BUS_IF_MAX_PCRS_reserved0_MASK                    0xfffffff0
#define BCHP_XPT_BUS_IF_MAX_PCRS_reserved0_SHIFT                   4

/* XPT_BUS_IF :: MAX_PCRS :: MAX_PCRS [03:00] */
#define BCHP_XPT_BUS_IF_MAX_PCRS_MAX_PCRS_MASK                     0x0000000f
#define BCHP_XPT_BUS_IF_MAX_PCRS_MAX_PCRS_SHIFT                    0

/***************************************************************************
 *MAX_TPIT_CHANNELS - Data Transport max number of TPIT channels supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_TPIT_CHANNELS :: reserved0 [31:04] */
#define BCHP_XPT_BUS_IF_MAX_TPIT_CHANNELS_reserved0_MASK           0xfffffff0
#define BCHP_XPT_BUS_IF_MAX_TPIT_CHANNELS_reserved0_SHIFT          4

/* XPT_BUS_IF :: MAX_TPIT_CHANNELS :: MAX_TPIT_CHANNELS [03:00] */
#define BCHP_XPT_BUS_IF_MAX_TPIT_CHANNELS_MAX_TPIT_CHANNELS_MASK   0x0000000f
#define BCHP_XPT_BUS_IF_MAX_TPIT_CHANNELS_MAX_TPIT_CHANNELS_SHIFT  0

/***************************************************************************
 *MAX_RAVE_CONTEXTS - Data Transport max number of RAVE contexts supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_RAVE_CONTEXTS :: reserved0 [31:08] */
#define BCHP_XPT_BUS_IF_MAX_RAVE_CONTEXTS_reserved0_MASK           0xffffff00
#define BCHP_XPT_BUS_IF_MAX_RAVE_CONTEXTS_reserved0_SHIFT          8

/* XPT_BUS_IF :: MAX_RAVE_CONTEXTS :: MAX_RAVE_CONTEXTS [07:00] */
#define BCHP_XPT_BUS_IF_MAX_RAVE_CONTEXTS_MAX_RAVE_CONTEXTS_MASK   0x000000ff
#define BCHP_XPT_BUS_IF_MAX_RAVE_CONTEXTS_MAX_RAVE_CONTEXTS_SHIFT  0

/***************************************************************************
 *MAX_RMX_CHANNELS - Data Transport max number of RMX channels supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_RMX_CHANNELS :: reserved0 [31:04] */
#define BCHP_XPT_BUS_IF_MAX_RMX_CHANNELS_reserved0_MASK            0xfffffff0
#define BCHP_XPT_BUS_IF_MAX_RMX_CHANNELS_reserved0_SHIFT           4

/* XPT_BUS_IF :: MAX_RMX_CHANNELS :: MAX_RMX_CHANNELS [03:00] */
#define BCHP_XPT_BUS_IF_MAX_RMX_CHANNELS_MAX_RMX_CHANNELS_MASK     0x0000000f
#define BCHP_XPT_BUS_IF_MAX_RMX_CHANNELS_MAX_RMX_CHANNELS_SHIFT    0

/***************************************************************************
 *MAX_MSG_BUFFERS - Data Transport max number of MSG buffers supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_MSG_BUFFERS :: reserved0 [31:08] */
#define BCHP_XPT_BUS_IF_MAX_MSG_BUFFERS_reserved0_MASK             0xffffff00
#define BCHP_XPT_BUS_IF_MAX_MSG_BUFFERS_reserved0_SHIFT            8

/* XPT_BUS_IF :: MAX_MSG_BUFFERS :: MAX_MSG_BUFFERS [07:00] */
#define BCHP_XPT_BUS_IF_MAX_MSG_BUFFERS_MAX_MSG_BUFFERS_MASK       0x000000ff
#define BCHP_XPT_BUS_IF_MAX_MSG_BUFFERS_MAX_MSG_BUFFERS_SHIFT      0

/***************************************************************************
 *MAX_SCDS - Data Transport max number of SCDs supported
 ***************************************************************************/
/* XPT_BUS_IF :: MAX_SCDS :: reserved0 [31:08] */
#define BCHP_XPT_BUS_IF_MAX_SCDS_reserved0_MASK                    0xffffff00
#define BCHP_XPT_BUS_IF_MAX_SCDS_reserved0_SHIFT                   8

/* XPT_BUS_IF :: MAX_SCDS :: MAX_SCDS [07:00] */
#define BCHP_XPT_BUS_IF_MAX_SCDS_MAX_SCDS_MASK                     0x000000ff
#define BCHP_XPT_BUS_IF_MAX_SCDS_MAX_SCDS_SHIFT                    0

#endif /* #ifndef BCHP_XPT_BUS_IF_H__ */

/* End of File */
