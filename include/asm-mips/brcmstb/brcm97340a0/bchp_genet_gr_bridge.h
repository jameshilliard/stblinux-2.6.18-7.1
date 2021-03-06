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
 * Date:           Generated on         Fri Mar 20 12:53:31 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_genet_gr_bridge.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:18p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_GENET_GR_BRIDGE_H__
#define BCHP_GENET_GR_BRIDGE_H__

/***************************************************************************
 *GENET_GR_BRIDGE
 ***************************************************************************/
#define BCHP_GENET_GR_BRIDGE_REVISION            0x00080040 /* GR Bridge Revision */
#define BCHP_GENET_GR_BRIDGE_CTRL                0x00080044 /* GR Bridge Control Register */
#define BCHP_GENET_GR_BRIDGE_SW_RESET_0          0x00080048 /* GR Bridge Software Reset 0 Register */
#define BCHP_GENET_GR_BRIDGE_SW_RESET_1          0x0008004c /* GR Bridge Software Reset 1 Register */

/***************************************************************************
 *REVISION - GR Bridge Revision
 ***************************************************************************/
/* GENET_GR_BRIDGE :: REVISION :: reserved0 [31:16] */
#define BCHP_GENET_GR_BRIDGE_REVISION_reserved0_MASK               0xffff0000
#define BCHP_GENET_GR_BRIDGE_REVISION_reserved0_SHIFT              16

/* GENET_GR_BRIDGE :: REVISION :: MAJOR [15:08] */
#define BCHP_GENET_GR_BRIDGE_REVISION_MAJOR_MASK                   0x0000ff00
#define BCHP_GENET_GR_BRIDGE_REVISION_MAJOR_SHIFT                  8

/* GENET_GR_BRIDGE :: REVISION :: MINOR [07:00] */
#define BCHP_GENET_GR_BRIDGE_REVISION_MINOR_MASK                   0x000000ff
#define BCHP_GENET_GR_BRIDGE_REVISION_MINOR_SHIFT                  0

/***************************************************************************
 *CTRL - GR Bridge Control Register
 ***************************************************************************/
/* GENET_GR_BRIDGE :: CTRL :: reserved0 [31:01] */
#define BCHP_GENET_GR_BRIDGE_CTRL_reserved0_MASK                   0xfffffffe
#define BCHP_GENET_GR_BRIDGE_CTRL_reserved0_SHIFT                  1

/* GENET_GR_BRIDGE :: CTRL :: gisb_error_intr [00:00] */
#define BCHP_GENET_GR_BRIDGE_CTRL_gisb_error_intr_MASK             0x00000001
#define BCHP_GENET_GR_BRIDGE_CTRL_gisb_error_intr_SHIFT            0
#define BCHP_GENET_GR_BRIDGE_CTRL_gisb_error_intr_INTR_DISABLE     0
#define BCHP_GENET_GR_BRIDGE_CTRL_gisb_error_intr_INTR_ENABLE      1

/***************************************************************************
 *SW_RESET_0 - GR Bridge Software Reset 0 Register
 ***************************************************************************/
/* GENET_GR_BRIDGE :: SW_RESET_0 :: reserved0 [31:01] */
#define BCHP_GENET_GR_BRIDGE_SW_RESET_0_reserved0_MASK             0xfffffffe
#define BCHP_GENET_GR_BRIDGE_SW_RESET_0_reserved0_SHIFT            1

/* GENET_GR_BRIDGE :: SW_RESET_0 :: ENET00_SW_RESET [00:00] */
#define BCHP_GENET_GR_BRIDGE_SW_RESET_0_ENET00_SW_RESET_MASK       0x00000001
#define BCHP_GENET_GR_BRIDGE_SW_RESET_0_ENET00_SW_RESET_SHIFT      0
#define BCHP_GENET_GR_BRIDGE_SW_RESET_0_ENET00_SW_RESET_DEASSERT   0
#define BCHP_GENET_GR_BRIDGE_SW_RESET_0_ENET00_SW_RESET_ASSERT     1

/***************************************************************************
 *SW_RESET_1 - GR Bridge Software Reset 1 Register
 ***************************************************************************/
/* GENET_GR_BRIDGE :: SW_RESET_1 :: reserved0 [31:01] */
#define BCHP_GENET_GR_BRIDGE_SW_RESET_1_reserved0_MASK             0xfffffffe
#define BCHP_GENET_GR_BRIDGE_SW_RESET_1_reserved0_SHIFT            1

/* GENET_GR_BRIDGE :: SW_RESET_1 :: ENET00_SW_RESET [00:00] */
#define BCHP_GENET_GR_BRIDGE_SW_RESET_1_ENET00_SW_RESET_MASK       0x00000001
#define BCHP_GENET_GR_BRIDGE_SW_RESET_1_ENET00_SW_RESET_SHIFT      0
#define BCHP_GENET_GR_BRIDGE_SW_RESET_1_ENET00_SW_RESET_DEASSERT   0
#define BCHP_GENET_GR_BRIDGE_SW_RESET_1_ENET00_SW_RESET_ASSERT     1

#endif /* #ifndef BCHP_GENET_GR_BRIDGE_H__ */

/* End of File */
