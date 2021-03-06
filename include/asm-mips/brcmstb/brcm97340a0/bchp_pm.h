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
 * Date:           Generated on         Mon Mar 23 10:15:27 2009
 *                 MD5 Checksum         39db7382cfc6d56476b4578f59380093
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_pm.h $
 * 
 * Hydra_Software_Devel/2   3/23/09 12:58p yuxiaz
 * PR53430: Update RDB header files.
 *
 ***************************************************************************/

#ifndef BCHP_PM_H__
#define BCHP_PM_H__

/***************************************************************************
 *PM - Peripheral Module Configuration
 ***************************************************************************/
#define BCHP_PM_CONFIG                           0x00406180 /* PERIPHERAL MODULE CONFIGURATION REGISTER */
#define BCHP_PM_CLK_CTRL                         0x00406184 /* UPG Clock control register */

/***************************************************************************
 *CONFIG - PERIPHERAL MODULE CONFIGURATION REGISTER
 ***************************************************************************/
/* PM :: CONFIG :: reserved_for_eco0 [31:30] */
#define BCHP_PM_CONFIG_reserved_for_eco0_MASK                      0xc0000000
#define BCHP_PM_CONFIG_reserved_for_eco0_SHIFT                     30

/* PM :: CONFIG :: bicap1_sel [29:28] */
#define BCHP_PM_CONFIG_bicap1_sel_MASK                             0x30000000
#define BCHP_PM_CONFIG_bicap1_sel_SHIFT                            28

/* PM :: CONFIG :: bicap0_sel [27:26] */
#define BCHP_PM_CONFIG_bicap0_sel_MASK                             0x0c000000
#define BCHP_PM_CONFIG_bicap0_sel_SHIFT                            26

/* PM :: CONFIG :: testport_sel [25:25] */
#define BCHP_PM_CONFIG_testport_sel_MASK                           0x02000000
#define BCHP_PM_CONFIG_testport_sel_SHIFT                          25

/* PM :: CONFIG :: reserved_for_eco1 [24:23] */
#define BCHP_PM_CONFIG_reserved_for_eco1_MASK                      0x01800000
#define BCHP_PM_CONFIG_reserved_for_eco1_SHIFT                     23

/* PM :: CONFIG :: uart_enable_busy_detect [22:22] */
#define BCHP_PM_CONFIG_uart_enable_busy_detect_MASK                0x00400000
#define BCHP_PM_CONFIG_uart_enable_busy_detect_SHIFT               22

/* PM :: CONFIG :: uart_disable_busy_wr [21:21] */
#define BCHP_PM_CONFIG_uart_disable_busy_wr_MASK                   0x00200000
#define BCHP_PM_CONFIG_uart_disable_busy_wr_SHIFT                  21

/* PM :: CONFIG :: irout_sel [20:19] */
#define BCHP_PM_CONFIG_irout_sel_MASK                              0x00180000
#define BCHP_PM_CONFIG_irout_sel_SHIFT                             19

/* PM :: CONFIG :: uc_sir_in [18:18] */
#define BCHP_PM_CONFIG_uc_sir_in_MASK                              0x00040000
#define BCHP_PM_CONFIG_uc_sir_in_SHIFT                             18

/* PM :: CONFIG :: ub_sir_in [17:17] */
#define BCHP_PM_CONFIG_ub_sir_in_MASK                              0x00020000
#define BCHP_PM_CONFIG_ub_sir_in_SHIFT                             17

/* PM :: CONFIG :: ua_sir_in [16:16] */
#define BCHP_PM_CONFIG_ua_sir_in_MASK                              0x00010000
#define BCHP_PM_CONFIG_ua_sir_in_SHIFT                             16

/* PM :: CONFIG :: uart_clk_sel [15:15] */
#define BCHP_PM_CONFIG_uart_clk_sel_MASK                           0x00008000
#define BCHP_PM_CONFIG_uart_clk_sel_SHIFT                          15

/* PM :: CONFIG :: uart_sw_reset [14:14] */
#define BCHP_PM_CONFIG_uart_sw_reset_MASK                          0x00004000
#define BCHP_PM_CONFIG_uart_sw_reset_SHIFT                         14

/* PM :: CONFIG :: reserved_for_eco2 [13:12] */
#define BCHP_PM_CONFIG_reserved_for_eco2_MASK                      0x00003000
#define BCHP_PM_CONFIG_reserved_for_eco2_SHIFT                     12

/* PM :: CONFIG :: irr3_in [11:10] */
#define BCHP_PM_CONFIG_irr3_in_MASK                                0x00000c00
#define BCHP_PM_CONFIG_irr3_in_SHIFT                               10

/* PM :: CONFIG :: mcif_sw_reset [09:09] */
#define BCHP_PM_CONFIG_mcif_sw_reset_MASK                          0x00000200
#define BCHP_PM_CONFIG_mcif_sw_reset_SHIFT                         9

/* PM :: CONFIG :: sc_late_sw_reset [08:08] */
#define BCHP_PM_CONFIG_sc_late_sw_reset_MASK                       0x00000100
#define BCHP_PM_CONFIG_sc_late_sw_reset_SHIFT                      8

/* PM :: CONFIG :: sc_sw_reset [07:07] */
#define BCHP_PM_CONFIG_sc_sw_reset_MASK                            0x00000080
#define BCHP_PM_CONFIG_sc_sw_reset_SHIFT                           7

/* PM :: CONFIG :: RESERVED2 [06:00] */
#define BCHP_PM_CONFIG_RESERVED2_MASK                              0x0000007f
#define BCHP_PM_CONFIG_RESERVED2_SHIFT                             0

/***************************************************************************
 *CLK_CTRL - UPG Clock control register
 ***************************************************************************/
/* PM :: CLK_CTRL :: reserved_for_eco0 [31:18] */
#define BCHP_PM_CLK_CTRL_reserved_for_eco0_MASK                    0xfffc0000
#define BCHP_PM_CLK_CTRL_reserved_for_eco0_SHIFT                   18

/* PM :: CLK_CTRL :: tmon_clk_ctrl [17:17] */
#define BCHP_PM_CLK_CTRL_tmon_clk_ctrl_MASK                        0x00020000
#define BCHP_PM_CLK_CTRL_tmon_clk_ctrl_SHIFT                       17

/* PM :: CLK_CTRL :: timer_clk_ctrl [16:16] */
#define BCHP_PM_CLK_CTRL_timer_clk_ctrl_MASK                       0x00010000
#define BCHP_PM_CLK_CTRL_timer_clk_ctrl_SHIFT                      16

/* PM :: CLK_CTRL :: gpio_clk_ctrl [15:15] */
#define BCHP_PM_CLK_CTRL_gpio_clk_ctrl_MASK                        0x00008000
#define BCHP_PM_CLK_CTRL_gpio_clk_ctrl_SHIFT                       15

/* PM :: CLK_CTRL :: kbd4_clk_ctrl [14:14] */
#define BCHP_PM_CLK_CTRL_kbd4_clk_ctrl_MASK                        0x00004000
#define BCHP_PM_CLK_CTRL_kbd4_clk_ctrl_SHIFT                       14

/* PM :: CLK_CTRL :: kbd3_clk_ctrl [13:13] */
#define BCHP_PM_CLK_CTRL_kbd3_clk_ctrl_MASK                        0x00002000
#define BCHP_PM_CLK_CTRL_kbd3_clk_ctrl_SHIFT                       13

/* PM :: CLK_CTRL :: kbd2_clk_ctrl [12:12] */
#define BCHP_PM_CLK_CTRL_kbd2_clk_ctrl_MASK                        0x00001000
#define BCHP_PM_CLK_CTRL_kbd2_clk_ctrl_SHIFT                       12

/* PM :: CLK_CTRL :: kbd1_clk_ctrl [11:11] */
#define BCHP_PM_CLK_CTRL_kbd1_clk_ctrl_MASK                        0x00000800
#define BCHP_PM_CLK_CTRL_kbd1_clk_ctrl_SHIFT                       11

/* PM :: CLK_CTRL :: icap_clk_ctrl [10:10] */
#define BCHP_PM_CLK_CTRL_icap_clk_ctrl_MASK                        0x00000400
#define BCHP_PM_CLK_CTRL_icap_clk_ctrl_SHIFT                       10

/* PM :: CLK_CTRL :: pwmb_clk_ctrl [09:09] */
#define BCHP_PM_CLK_CTRL_pwmb_clk_ctrl_MASK                        0x00000200
#define BCHP_PM_CLK_CTRL_pwmb_clk_ctrl_SHIFT                       9

/* PM :: CLK_CTRL :: pwma_clk_ctrl [08:08] */
#define BCHP_PM_CLK_CTRL_pwma_clk_ctrl_MASK                        0x00000100
#define BCHP_PM_CLK_CTRL_pwma_clk_ctrl_SHIFT                       8

/* PM :: CLK_CTRL :: mspi_clk_ctrl [07:07] */
#define BCHP_PM_CLK_CTRL_mspi_clk_ctrl_MASK                        0x00000080
#define BCHP_PM_CLK_CTRL_mspi_clk_ctrl_SHIFT                       7

/* PM :: CLK_CTRL :: bsce_clk_ctrl [06:06] */
#define BCHP_PM_CLK_CTRL_bsce_clk_ctrl_MASK                        0x00000040
#define BCHP_PM_CLK_CTRL_bsce_clk_ctrl_SHIFT                       6

/* PM :: CLK_CTRL :: bscd_clk_ctrl [05:05] */
#define BCHP_PM_CLK_CTRL_bscd_clk_ctrl_MASK                        0x00000020
#define BCHP_PM_CLK_CTRL_bscd_clk_ctrl_SHIFT                       5

/* PM :: CLK_CTRL :: bscc_clk_ctrl [04:04] */
#define BCHP_PM_CLK_CTRL_bscc_clk_ctrl_MASK                        0x00000010
#define BCHP_PM_CLK_CTRL_bscc_clk_ctrl_SHIFT                       4

/* PM :: CLK_CTRL :: bscb_clk_ctrl [03:03] */
#define BCHP_PM_CLK_CTRL_bscb_clk_ctrl_MASK                        0x00000008
#define BCHP_PM_CLK_CTRL_bscb_clk_ctrl_SHIFT                       3

/* PM :: CLK_CTRL :: bsca_clk_ctrl [02:02] */
#define BCHP_PM_CLK_CTRL_bsca_clk_ctrl_MASK                        0x00000004
#define BCHP_PM_CLK_CTRL_bsca_clk_ctrl_SHIFT                       2

/* PM :: CLK_CTRL :: ldk_clk_ctrl [01:01] */
#define BCHP_PM_CLK_CTRL_ldk_clk_ctrl_MASK                         0x00000002
#define BCHP_PM_CLK_CTRL_ldk_clk_ctrl_SHIFT                        1

/* PM :: CLK_CTRL :: irb_clk_ctrl [00:00] */
#define BCHP_PM_CLK_CTRL_irb_clk_ctrl_MASK                         0x00000001
#define BCHP_PM_CLK_CTRL_irb_clk_ctrl_SHIFT                        0

#endif /* #ifndef BCHP_PM_H__ */

/* End of File */
