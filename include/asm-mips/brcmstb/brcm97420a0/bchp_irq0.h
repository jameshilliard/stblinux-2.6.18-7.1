/***************************************************************************
 *     Copyright (c) 1999-2008, Broadcom Corporation
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
 * Date:           Generated on         Tue Jun 10 12:51:47 2008
 *                 MD5 Checksum         4f19f1f3a208e874e2a583f12a043545
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7420/rdb/a0/bchp_irq0.h $
 * 
 * Hydra_Software_Devel/2   6/10/08 3:43p tdo
 * PR42663: Update RDB
 *
 ***************************************************************************/

#ifndef BCHP_IRQ0_H__
#define BCHP_IRQ0_H__

/***************************************************************************
 *IRQ0 - Level 2 CPU Interrupt Enable/Status
 ***************************************************************************/
#define BCHP_IRQ0_IRQEN                          0x00406780 /* Interrupt Enable */
#define BCHP_IRQ0_IRQSTAT                        0x00406784 /* Interrupt Status */

/***************************************************************************
 *IRQEN - Interrupt Enable
 ***************************************************************************/
/* IRQ0 :: IRQEN :: reserved0 [31:29] */
#define BCHP_IRQ0_IRQEN_reserved0_MASK                             0xe0000000
#define BCHP_IRQ0_IRQEN_reserved0_SHIFT                            29

/* IRQ0 :: IRQEN :: iice_irqen [28:28] */
#define BCHP_IRQ0_IRQEN_iice_irqen_MASK                            0x10000000
#define BCHP_IRQ0_IRQEN_iice_irqen_SHIFT                           28

/* IRQ0 :: IRQEN :: iicd_irqen [27:27] */
#define BCHP_IRQ0_IRQEN_iicd_irqen_MASK                            0x08000000
#define BCHP_IRQ0_IRQEN_iicd_irqen_SHIFT                           27

/* IRQ0 :: IRQEN :: iicc_irqen [26:26] */
#define BCHP_IRQ0_IRQEN_iicc_irqen_MASK                            0x04000000
#define BCHP_IRQ0_IRQEN_iicc_irqen_SHIFT                           26

/* IRQ0 :: IRQEN :: iicb_irqen [25:25] */
#define BCHP_IRQ0_IRQEN_iicb_irqen_MASK                            0x02000000
#define BCHP_IRQ0_IRQEN_iicb_irqen_SHIFT                           25

/* IRQ0 :: IRQEN :: iica_irqen [24:24] */
#define BCHP_IRQ0_IRQEN_iica_irqen_MASK                            0x01000000
#define BCHP_IRQ0_IRQEN_iica_irqen_SHIFT                           24

/* IRQ0 :: IRQEN :: reserved1 [23:21] */
#define BCHP_IRQ0_IRQEN_reserved1_MASK                             0x00e00000
#define BCHP_IRQ0_IRQEN_reserved1_SHIFT                            21

/* IRQ0 :: IRQEN :: spi_irqen [20:20] */
#define BCHP_IRQ0_IRQEN_spi_irqen_MASK                             0x00100000
#define BCHP_IRQ0_IRQEN_spi_irqen_SHIFT                            20

/* IRQ0 :: IRQEN :: reserved_for_eco2 [19:19] */
#define BCHP_IRQ0_IRQEN_reserved_for_eco2_MASK                     0x00080000
#define BCHP_IRQ0_IRQEN_reserved_for_eco2_SHIFT                    19

/* IRQ0 :: IRQEN :: uartc_irqen [18:18] */
#define BCHP_IRQ0_IRQEN_uartc_irqen_MASK                           0x00040000
#define BCHP_IRQ0_IRQEN_uartc_irqen_SHIFT                          18

/* IRQ0 :: IRQEN :: uartb_irqen [17:17] */
#define BCHP_IRQ0_IRQEN_uartb_irqen_MASK                           0x00020000
#define BCHP_IRQ0_IRQEN_uartb_irqen_SHIFT                          17

/* IRQ0 :: IRQEN :: uarta_irqen [16:16] */
#define BCHP_IRQ0_IRQEN_uarta_irqen_MASK                           0x00010000
#define BCHP_IRQ0_IRQEN_uarta_irqen_SHIFT                          16

/* IRQ0 :: IRQEN :: reserved3 [15:10] */
#define BCHP_IRQ0_IRQEN_reserved3_MASK                             0x0000fc00
#define BCHP_IRQ0_IRQEN_reserved3_SHIFT                            10

/* IRQ0 :: IRQEN :: uc_irqen [09:09] */
#define BCHP_IRQ0_IRQEN_uc_irqen_MASK                              0x00000200
#define BCHP_IRQ0_IRQEN_uc_irqen_SHIFT                             9

/* IRQ0 :: IRQEN :: kbd3_irqen [08:08] */
#define BCHP_IRQ0_IRQEN_kbd3_irqen_MASK                            0x00000100
#define BCHP_IRQ0_IRQEN_kbd3_irqen_SHIFT                           8

/* IRQ0 :: IRQEN :: icap_irqen [07:07] */
#define BCHP_IRQ0_IRQEN_icap_irqen_MASK                            0x00000080
#define BCHP_IRQ0_IRQEN_icap_irqen_SHIFT                           7

/* IRQ0 :: IRQEN :: gio_irqen [06:06] */
#define BCHP_IRQ0_IRQEN_gio_irqen_MASK                             0x00000040
#define BCHP_IRQ0_IRQEN_gio_irqen_SHIFT                            6

/* IRQ0 :: IRQEN :: kbd2_irqen [05:05] */
#define BCHP_IRQ0_IRQEN_kbd2_irqen_MASK                            0x00000020
#define BCHP_IRQ0_IRQEN_kbd2_irqen_SHIFT                           5

/* IRQ0 :: IRQEN :: ua_irqen [04:04] */
#define BCHP_IRQ0_IRQEN_ua_irqen_MASK                              0x00000010
#define BCHP_IRQ0_IRQEN_ua_irqen_SHIFT                             4

/* IRQ0 :: IRQEN :: ub_irqen [03:03] */
#define BCHP_IRQ0_IRQEN_ub_irqen_MASK                              0x00000008
#define BCHP_IRQ0_IRQEN_ub_irqen_SHIFT                             3

/* IRQ0 :: IRQEN :: irb_irqen [02:02] */
#define BCHP_IRQ0_IRQEN_irb_irqen_MASK                             0x00000004
#define BCHP_IRQ0_IRQEN_irb_irqen_SHIFT                            2

/* IRQ0 :: IRQEN :: ldk_irqen [01:01] */
#define BCHP_IRQ0_IRQEN_ldk_irqen_MASK                             0x00000002
#define BCHP_IRQ0_IRQEN_ldk_irqen_SHIFT                            1

/* IRQ0 :: IRQEN :: kbd1_irqen [00:00] */
#define BCHP_IRQ0_IRQEN_kbd1_irqen_MASK                            0x00000001
#define BCHP_IRQ0_IRQEN_kbd1_irqen_SHIFT                           0

/***************************************************************************
 *IRQSTAT - Interrupt Status
 ***************************************************************************/
/* IRQ0 :: IRQSTAT :: reserved0 [31:29] */
#define BCHP_IRQ0_IRQSTAT_reserved0_MASK                           0xe0000000
#define BCHP_IRQ0_IRQSTAT_reserved0_SHIFT                          29

/* IRQ0 :: IRQSTAT :: iiceirq [28:28] */
#define BCHP_IRQ0_IRQSTAT_iiceirq_MASK                             0x10000000
#define BCHP_IRQ0_IRQSTAT_iiceirq_SHIFT                            28

/* IRQ0 :: IRQSTAT :: iicdirq [27:27] */
#define BCHP_IRQ0_IRQSTAT_iicdirq_MASK                             0x08000000
#define BCHP_IRQ0_IRQSTAT_iicdirq_SHIFT                            27

/* IRQ0 :: IRQSTAT :: iiccirq [26:26] */
#define BCHP_IRQ0_IRQSTAT_iiccirq_MASK                             0x04000000
#define BCHP_IRQ0_IRQSTAT_iiccirq_SHIFT                            26

/* IRQ0 :: IRQSTAT :: iicbirq [25:25] */
#define BCHP_IRQ0_IRQSTAT_iicbirq_MASK                             0x02000000
#define BCHP_IRQ0_IRQSTAT_iicbirq_SHIFT                            25

/* IRQ0 :: IRQSTAT :: iicairq [24:24] */
#define BCHP_IRQ0_IRQSTAT_iicairq_MASK                             0x01000000
#define BCHP_IRQ0_IRQSTAT_iicairq_SHIFT                            24

/* IRQ0 :: IRQSTAT :: reserved1 [23:21] */
#define BCHP_IRQ0_IRQSTAT_reserved1_MASK                           0x00e00000
#define BCHP_IRQ0_IRQSTAT_reserved1_SHIFT                          21

/* IRQ0 :: IRQSTAT :: spiirq [20:20] */
#define BCHP_IRQ0_IRQSTAT_spiirq_MASK                              0x00100000
#define BCHP_IRQ0_IRQSTAT_spiirq_SHIFT                             20

/* IRQ0 :: IRQSTAT :: reserved2 [19:19] */
#define BCHP_IRQ0_IRQSTAT_reserved2_MASK                           0x00080000
#define BCHP_IRQ0_IRQSTAT_reserved2_SHIFT                          19

/* IRQ0 :: IRQSTAT :: uartc_irq [18:18] */
#define BCHP_IRQ0_IRQSTAT_uartc_irq_MASK                           0x00040000
#define BCHP_IRQ0_IRQSTAT_uartc_irq_SHIFT                          18

/* IRQ0 :: IRQSTAT :: uartb_irq [17:17] */
#define BCHP_IRQ0_IRQSTAT_uartb_irq_MASK                           0x00020000
#define BCHP_IRQ0_IRQSTAT_uartb_irq_SHIFT                          17

/* IRQ0 :: IRQSTAT :: uarta_irq [16:16] */
#define BCHP_IRQ0_IRQSTAT_uarta_irq_MASK                           0x00010000
#define BCHP_IRQ0_IRQSTAT_uarta_irq_SHIFT                          16

/* IRQ0 :: IRQSTAT :: reserved3 [15:10] */
#define BCHP_IRQ0_IRQSTAT_reserved3_MASK                           0x0000fc00
#define BCHP_IRQ0_IRQSTAT_reserved3_SHIFT                          10

/* IRQ0 :: IRQSTAT :: ucirq [09:09] */
#define BCHP_IRQ0_IRQSTAT_ucirq_MASK                               0x00000200
#define BCHP_IRQ0_IRQSTAT_ucirq_SHIFT                              9

/* IRQ0 :: IRQSTAT :: kbd3irq [08:08] */
#define BCHP_IRQ0_IRQSTAT_kbd3irq_MASK                             0x00000100
#define BCHP_IRQ0_IRQSTAT_kbd3irq_SHIFT                            8

/* IRQ0 :: IRQSTAT :: icapirq [07:07] */
#define BCHP_IRQ0_IRQSTAT_icapirq_MASK                             0x00000080
#define BCHP_IRQ0_IRQSTAT_icapirq_SHIFT                            7

/* IRQ0 :: IRQSTAT :: gioirq [06:06] */
#define BCHP_IRQ0_IRQSTAT_gioirq_MASK                              0x00000040
#define BCHP_IRQ0_IRQSTAT_gioirq_SHIFT                             6

/* IRQ0 :: IRQSTAT :: kbd2irq [05:05] */
#define BCHP_IRQ0_IRQSTAT_kbd2irq_MASK                             0x00000020
#define BCHP_IRQ0_IRQSTAT_kbd2irq_SHIFT                            5

/* IRQ0 :: IRQSTAT :: uairq [04:04] */
#define BCHP_IRQ0_IRQSTAT_uairq_MASK                               0x00000010
#define BCHP_IRQ0_IRQSTAT_uairq_SHIFT                              4

/* IRQ0 :: IRQSTAT :: ubirq [03:03] */
#define BCHP_IRQ0_IRQSTAT_ubirq_MASK                               0x00000008
#define BCHP_IRQ0_IRQSTAT_ubirq_SHIFT                              3

/* IRQ0 :: IRQSTAT :: irbirq [02:02] */
#define BCHP_IRQ0_IRQSTAT_irbirq_MASK                              0x00000004
#define BCHP_IRQ0_IRQSTAT_irbirq_SHIFT                             2

/* IRQ0 :: IRQSTAT :: ldkirq [01:01] */
#define BCHP_IRQ0_IRQSTAT_ldkirq_MASK                              0x00000002
#define BCHP_IRQ0_IRQSTAT_ldkirq_SHIFT                             1

/* IRQ0 :: IRQSTAT :: kbd1irq [00:00] */
#define BCHP_IRQ0_IRQSTAT_kbd1irq_MASK                             0x00000001
#define BCHP_IRQ0_IRQSTAT_kbd1irq_SHIFT                            0

#endif /* #ifndef BCHP_IRQ0_H__ */

/* End of File */
