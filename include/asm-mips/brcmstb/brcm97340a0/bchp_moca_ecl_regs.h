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
 * Date:           Generated on         Fri Mar 20 13:07:23 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_moca_ecl_regs.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:44p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_MOCA_ECL_REGS_H__
#define BCHP_MOCA_ECL_REGS_H__

/***************************************************************************
 *MOCA_ECL_REGS - MOCA_ECL registers
 ***************************************************************************/
#define BCHP_MOCA_ECL_REGS_ECL_CTL               0x00290800 /* ECL control */
#define BCHP_MOCA_ECL_REGS_ECL_STAT              0x00290804 /* ECL status */
#define BCHP_MOCA_ECL_REGS_PRIO_TBL_TOGL         0x0029080c /* Priority Table Toggle */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_0        0x00290810 /* QID Update register 0 */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_1        0x00290814 /* QID Update register 1 */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_2        0x00290818 /* QID Update register 2 */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_3        0x0029081c /* QID Update register 3 */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_4        0x00290820 /* QID Update register 4 */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_5        0x00290824 /* QID Update register 5 */
#define BCHP_MOCA_ECL_REGS_UPDT_CTL              0x00290828 /* QID Update Control */
#define BCHP_MOCA_ECL_REGS_QID_AGING             0x0029082c /* QID Aging Register */
#define BCHP_MOCA_ECL_REGS_DEF_QUEUE             0x00290830 /* Default queue. */
#define BCHP_MOCA_ECL_REGS_DEF_NID               0x00290834 /* Default node ID */
#define BCHP_MOCA_ECL_REGS_SELF_NID              0x00290838 /* Self NID register */
#define BCHP_MOCA_ECL_REGS_NID_AGING_0           0x0029083c /* NID Aging Register 0 */
#define BCHP_MOCA_ECL_REGS_NID_AGING_1           0x00290840 /* NID Aging Register 1 */
#define BCHP_MOCA_ECL_REGS_NID_AGING_2           0x00290844 /* NID Aging Register 2 */
#define BCHP_MOCA_ECL_REGS_NID_AGING_3           0x00290848 /* NID Aging Register 3 */

/***************************************************************************
 *ECL_CTL - ECL control
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_CTL :: reserved0 [31:03] */
#define BCHP_MOCA_ECL_REGS_ECL_CTL_reserved0_MASK                  0xfffffff8
#define BCHP_MOCA_ECL_REGS_ECL_CTL_reserved0_SHIFT                 3

/* MOCA_ECL_REGS :: ECL_CTL :: qtag_en [02:02] */
#define BCHP_MOCA_ECL_REGS_ECL_CTL_qtag_en_MASK                    0x00000004
#define BCHP_MOCA_ECL_REGS_ECL_CTL_qtag_en_SHIFT                   2

/* MOCA_ECL_REGS :: ECL_CTL :: crc_en [01:01] */
#define BCHP_MOCA_ECL_REGS_ECL_CTL_crc_en_MASK                     0x00000002
#define BCHP_MOCA_ECL_REGS_ECL_CTL_crc_en_SHIFT                    1

/* MOCA_ECL_REGS :: ECL_CTL :: ecl_en [00:00] */
#define BCHP_MOCA_ECL_REGS_ECL_CTL_ecl_en_MASK                     0x00000001
#define BCHP_MOCA_ECL_REGS_ECL_CTL_ecl_en_SHIFT                    0

/***************************************************************************
 *ECL_STAT - ECL status
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_STAT :: reserved0 [31:02] */
#define BCHP_MOCA_ECL_REGS_ECL_STAT_reserved0_MASK                 0xfffffffc
#define BCHP_MOCA_ECL_REGS_ECL_STAT_reserved0_SHIFT                2

/* MOCA_ECL_REGS :: ECL_STAT :: act_prio [01:01] */
#define BCHP_MOCA_ECL_REGS_ECL_STAT_act_prio_MASK                  0x00000002
#define BCHP_MOCA_ECL_REGS_ECL_STAT_act_prio_SHIFT                 1

/* MOCA_ECL_REGS :: ECL_STAT :: fifo_ovf [00:00] */
#define BCHP_MOCA_ECL_REGS_ECL_STAT_fifo_ovf_MASK                  0x00000001
#define BCHP_MOCA_ECL_REGS_ECL_STAT_fifo_ovf_SHIFT                 0

/***************************************************************************
 *PRIO_TBL_TOGL - Priority Table Toggle
 ***************************************************************************/
/* MOCA_ECL_REGS :: PRIO_TBL_TOGL :: reserved0 [31:01] */
#define BCHP_MOCA_ECL_REGS_PRIO_TBL_TOGL_reserved0_MASK            0xfffffffe
#define BCHP_MOCA_ECL_REGS_PRIO_TBL_TOGL_reserved0_SHIFT           1

/* MOCA_ECL_REGS :: PRIO_TBL_TOGL :: prio_tbl_togl [00:00] */
#define BCHP_MOCA_ECL_REGS_PRIO_TBL_TOGL_prio_tbl_togl_MASK        0x00000001
#define BCHP_MOCA_ECL_REGS_PRIO_TBL_TOGL_prio_tbl_togl_SHIFT       0

/***************************************************************************
 *ECL_UPDT_REG_0 - QID Update register 0
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_UPDT_REG_0 :: reserved0 [31:06] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_0_reserved0_MASK           0xffffffc0
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_0_reserved0_SHIFT          6

/* MOCA_ECL_REGS :: ECL_UPDT_REG_0 :: qid [05:00] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_0_qid_MASK                 0x0000003f
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_0_qid_SHIFT                0

/***************************************************************************
 *ECL_UPDT_REG_1 - QID Update register 1
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_UPDT_REG_1 :: reserved0 [31:30] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_1_reserved0_MASK           0xc0000000
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_1_reserved0_SHIFT          30

/* MOCA_ECL_REGS :: ECL_UPDT_REG_1 :: mask [29:00] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_1_mask_MASK                0x3fffffff
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_1_mask_SHIFT               0

/***************************************************************************
 *ECL_UPDT_REG_2 - QID Update register 2
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_UPDT_REG_2 :: ecl_updt_reg_2 [31:00] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_2_ecl_updt_reg_2_MASK      0xffffffff
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_2_ecl_updt_reg_2_SHIFT     0

/***************************************************************************
 *ECL_UPDT_REG_3 - QID Update register 3
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_UPDT_REG_3 :: ecl_updt_reg_3 [31:00] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_3_ecl_updt_reg_3_MASK      0xffffffff
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_3_ecl_updt_reg_3_SHIFT     0

/***************************************************************************
 *ECL_UPDT_REG_4 - QID Update register 4
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_UPDT_REG_4 :: ecl_updt_reg_4 [31:00] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_4_ecl_updt_reg_4_MASK      0xffffffff
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_4_ecl_updt_reg_4_SHIFT     0

/***************************************************************************
 *ECL_UPDT_REG_5 - QID Update register 5
 ***************************************************************************/
/* MOCA_ECL_REGS :: ECL_UPDT_REG_5 :: ecl_updt_reg_5 [31:00] */
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_5_ecl_updt_reg_5_MASK      0xffffffff
#define BCHP_MOCA_ECL_REGS_ECL_UPDT_REG_5_ecl_updt_reg_5_SHIFT     0

/***************************************************************************
 *UPDT_CTL - QID Update Control
 ***************************************************************************/
/* MOCA_ECL_REGS :: UPDT_CTL :: reserved0 [31:07] */
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_reserved0_MASK                 0xffffff80
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_reserved0_SHIFT                7

/* MOCA_ECL_REGS :: UPDT_CTL :: rd_cmd_busy [06:06] */
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_rd_cmd_busy_MASK               0x00000040
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_rd_cmd_busy_SHIFT              6

/* MOCA_ECL_REGS :: UPDT_CTL :: wr_cmd_busy [05:05] */
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_wr_cmd_busy_MASK               0x00000020
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_wr_cmd_busy_SHIFT              5

/* MOCA_ECL_REGS :: UPDT_CTL :: qid_table_address [04:00] */
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_qid_table_address_MASK         0x0000001f
#define BCHP_MOCA_ECL_REGS_UPDT_CTL_qid_table_address_SHIFT        0

/***************************************************************************
 *QID_AGING - QID Aging Register
 ***************************************************************************/
/* MOCA_ECL_REGS :: QID_AGING :: qid_aging [31:00] */
#define BCHP_MOCA_ECL_REGS_QID_AGING_qid_aging_MASK                0xffffffff
#define BCHP_MOCA_ECL_REGS_QID_AGING_qid_aging_SHIFT               0

/***************************************************************************
 *DEF_QUEUE - Default queue.
 ***************************************************************************/
/* MOCA_ECL_REGS :: DEF_QUEUE :: reserved0 [31:06] */
#define BCHP_MOCA_ECL_REGS_DEF_QUEUE_reserved0_MASK                0xffffffc0
#define BCHP_MOCA_ECL_REGS_DEF_QUEUE_reserved0_SHIFT               6

/* MOCA_ECL_REGS :: DEF_QUEUE :: def_queue [05:00] */
#define BCHP_MOCA_ECL_REGS_DEF_QUEUE_def_queue_MASK                0x0000003f
#define BCHP_MOCA_ECL_REGS_DEF_QUEUE_def_queue_SHIFT               0

/***************************************************************************
 *DEF_NID - Default node ID
 ***************************************************************************/
/* MOCA_ECL_REGS :: DEF_NID :: reserved0 [31:08] */
#define BCHP_MOCA_ECL_REGS_DEF_NID_reserved0_MASK                  0xffffff00
#define BCHP_MOCA_ECL_REGS_DEF_NID_reserved0_SHIFT                 8

/* MOCA_ECL_REGS :: DEF_NID :: def_nid [07:00] */
#define BCHP_MOCA_ECL_REGS_DEF_NID_def_nid_MASK                    0x000000ff
#define BCHP_MOCA_ECL_REGS_DEF_NID_def_nid_SHIFT                   0

/***************************************************************************
 *SELF_NID - Self NID register
 ***************************************************************************/
/* MOCA_ECL_REGS :: SELF_NID :: reserved0 [31:08] */
#define BCHP_MOCA_ECL_REGS_SELF_NID_reserved0_MASK                 0xffffff00
#define BCHP_MOCA_ECL_REGS_SELF_NID_reserved0_SHIFT                8

/* MOCA_ECL_REGS :: SELF_NID :: self_nid [07:00] */
#define BCHP_MOCA_ECL_REGS_SELF_NID_self_nid_MASK                  0x000000ff
#define BCHP_MOCA_ECL_REGS_SELF_NID_self_nid_SHIFT                 0

/***************************************************************************
 *NID_AGING_0 - NID Aging Register 0
 ***************************************************************************/
/* MOCA_ECL_REGS :: NID_AGING_0 :: nid_aging_0 [31:00] */
#define BCHP_MOCA_ECL_REGS_NID_AGING_0_nid_aging_0_MASK            0xffffffff
#define BCHP_MOCA_ECL_REGS_NID_AGING_0_nid_aging_0_SHIFT           0

/***************************************************************************
 *NID_AGING_1 - NID Aging Register 1
 ***************************************************************************/
/* MOCA_ECL_REGS :: NID_AGING_1 :: nid_aging_1 [31:00] */
#define BCHP_MOCA_ECL_REGS_NID_AGING_1_nid_aging_1_MASK            0xffffffff
#define BCHP_MOCA_ECL_REGS_NID_AGING_1_nid_aging_1_SHIFT           0

/***************************************************************************
 *NID_AGING_2 - NID Aging Register 2
 ***************************************************************************/
/* MOCA_ECL_REGS :: NID_AGING_2 :: nid_aging_2 [31:00] */
#define BCHP_MOCA_ECL_REGS_NID_AGING_2_nid_aging_2_MASK            0xffffffff
#define BCHP_MOCA_ECL_REGS_NID_AGING_2_nid_aging_2_SHIFT           0

/***************************************************************************
 *NID_AGING_3 - NID Aging Register 3
 ***************************************************************************/
/* MOCA_ECL_REGS :: NID_AGING_3 :: nid_aging_3 [31:00] */
#define BCHP_MOCA_ECL_REGS_NID_AGING_3_nid_aging_3_MASK            0xffffffff
#define BCHP_MOCA_ECL_REGS_NID_AGING_3_nid_aging_3_SHIFT           0

#endif /* #ifndef BCHP_MOCA_ECL_REGS_H__ */

/* End of File */
