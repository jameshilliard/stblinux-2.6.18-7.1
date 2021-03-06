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
 * Date:           Generated on         Mon Mar 23 10:08:58 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_scirq0.h $
 * 
 * Hydra_Software_Devel/2   3/23/09 12:59p yuxiaz
 * PR53430: Update RDB header files.
 *
 ***************************************************************************/

#ifndef BCHP_SCIRQ0_H__
#define BCHP_SCIRQ0_H__

/***************************************************************************
 *SCIRQ0 - Smart Card Level 2 CPU Interrupt Enable/Status
 ***************************************************************************/
#define BCHP_SCIRQ0_SCIRQEN                      0x00406b40 /* SMART CARD L2 INTERRUPT ENABLE */
#define BCHP_SCIRQ0_SCIRQSTAT                    0x00406b44 /* SMART CARD L2 INTERRUPT STATUS */

/***************************************************************************
 *SCIRQEN - SMART CARD L2 INTERRUPT ENABLE
 ***************************************************************************/
/* SCIRQ0 :: SCIRQEN :: reserved0 [31:02] */
#define BCHP_SCIRQ0_SCIRQEN_reserved0_MASK                         0xfffffffc
#define BCHP_SCIRQ0_SCIRQEN_reserved0_SHIFT                        2

/* SCIRQ0 :: SCIRQEN :: scb_irqen [01:01] */
#define BCHP_SCIRQ0_SCIRQEN_scb_irqen_MASK                         0x00000002
#define BCHP_SCIRQ0_SCIRQEN_scb_irqen_SHIFT                        1

/* SCIRQ0 :: SCIRQEN :: sca_irqen [00:00] */
#define BCHP_SCIRQ0_SCIRQEN_sca_irqen_MASK                         0x00000001
#define BCHP_SCIRQ0_SCIRQEN_sca_irqen_SHIFT                        0

/***************************************************************************
 *SCIRQSTAT - SMART CARD L2 INTERRUPT STATUS
 ***************************************************************************/
/* SCIRQ0 :: SCIRQSTAT :: reserved0 [31:02] */
#define BCHP_SCIRQ0_SCIRQSTAT_reserved0_MASK                       0xfffffffc
#define BCHP_SCIRQ0_SCIRQSTAT_reserved0_SHIFT                      2

/* SCIRQ0 :: SCIRQSTAT :: scbirq [01:01] */
#define BCHP_SCIRQ0_SCIRQSTAT_scbirq_MASK                          0x00000002
#define BCHP_SCIRQ0_SCIRQSTAT_scbirq_SHIFT                         1

/* SCIRQ0 :: SCIRQSTAT :: scairq [00:00] */
#define BCHP_SCIRQ0_SCIRQSTAT_scairq_MASK                          0x00000001
#define BCHP_SCIRQ0_SCIRQSTAT_scairq_SHIFT                         0

#endif /* #ifndef BCHP_SCIRQ0_H__ */

/* End of File */
