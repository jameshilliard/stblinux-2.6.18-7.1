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
 * Date:           Generated on         Fri Mar 20 13:04:27 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_moca_spi.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:54p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_MOCA_SPI_H__
#define BCHP_MOCA_SPI_H__

/***************************************************************************
 *MOCA_SPI - MOCA_SPI registers
 ***************************************************************************/
#define BCHP_MOCA_SPI_REG_TX_RX_0                0x002a0800 /* SPI Data Register 0  Bits 31 to 0 */
#define BCHP_MOCA_SPI_REG_TX_RX_1                0x002a0804 /* SPI Data Register 1  Bits 63 to 32 */
#define BCHP_MOCA_SPI_REG_TX_RX_2                0x002a0808 /* SPI Data Register 2  Bits 95 to 64 */
#define BCHP_MOCA_SPI_REG_TX_RX_3                0x002a080c /* SPI Data Register 3  Bits 127 to 96 */
#define BCHP_MOCA_SPI_REG_TX_RX_4                0x002a0810 /* SPI Data Register 4  Bits 159 to 128 */
#define BCHP_MOCA_SPI_REG_TX_RX_5                0x002a0814 /* SPI Data Register 5  Bits 191 to 160 */
#define BCHP_MOCA_SPI_REG_TX_RX_6                0x002a0818 /* SPI Data Register 6  Bits 223 to 192 */
#define BCHP_MOCA_SPI_REG_TX_RX_7                0x002a081c /* SPI Data Register 7  Bits 255 to 224 */
#define BCHP_MOCA_SPI_REG_CTRL                   0x002a0820 /* SPI Control Register */
#define BCHP_MOCA_SPI_REG_DIVIDER                0x002a0824 /* SPI Clock Setting Register */
#define BCHP_MOCA_SPI_REG_SLAVE_SEL              0x002a0828 /* SPI Slave Select Register */
#define BCHP_MOCA_SPI_REG_INT_STATUS             0x002a082c /* SPI Interrupt Status Register */

/***************************************************************************
 *REG_TX_RX_0 - SPI Data Register 0  Bits 31 to 0
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_0 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_0_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_0_data_SHIFT                       0

/***************************************************************************
 *REG_TX_RX_1 - SPI Data Register 1  Bits 63 to 32
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_1 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_1_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_1_data_SHIFT                       0

/***************************************************************************
 *REG_TX_RX_2 - SPI Data Register 2  Bits 95 to 64
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_2 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_2_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_2_data_SHIFT                       0

/***************************************************************************
 *REG_TX_RX_3 - SPI Data Register 3  Bits 127 to 96
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_3 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_3_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_3_data_SHIFT                       0

/***************************************************************************
 *REG_TX_RX_4 - SPI Data Register 4  Bits 159 to 128
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_4 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_4_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_4_data_SHIFT                       0

/***************************************************************************
 *REG_TX_RX_5 - SPI Data Register 5  Bits 191 to 160
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_5 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_5_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_5_data_SHIFT                       0

/***************************************************************************
 *REG_TX_RX_6 - SPI Data Register 6  Bits 223 to 192
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_6 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_6_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_6_data_SHIFT                       0

/***************************************************************************
 *REG_TX_RX_7 - SPI Data Register 7  Bits 255 to 224
 ***************************************************************************/
/* MOCA_SPI :: REG_TX_RX_7 :: data [31:00] */
#define BCHP_MOCA_SPI_REG_TX_RX_7_data_MASK                        0xffffffff
#define BCHP_MOCA_SPI_REG_TX_RX_7_data_SHIFT                       0

/***************************************************************************
 *REG_CTRL - SPI Control Register
 ***************************************************************************/
/* MOCA_SPI :: REG_CTRL :: reserved0 [31:14] */
#define BCHP_MOCA_SPI_REG_CTRL_reserved0_MASK                      0xffffc000
#define BCHP_MOCA_SPI_REG_CTRL_reserved0_SHIFT                     14

/* MOCA_SPI :: REG_CTRL :: ass [13:13] */
#define BCHP_MOCA_SPI_REG_CTRL_ass_MASK                            0x00002000
#define BCHP_MOCA_SPI_REG_CTRL_ass_SHIFT                           13

/* MOCA_SPI :: REG_CTRL :: ie [12:12] */
#define BCHP_MOCA_SPI_REG_CTRL_ie_MASK                             0x00001000
#define BCHP_MOCA_SPI_REG_CTRL_ie_SHIFT                            12

/* MOCA_SPI :: REG_CTRL :: lsb [11:11] */
#define BCHP_MOCA_SPI_REG_CTRL_lsb_MASK                            0x00000800
#define BCHP_MOCA_SPI_REG_CTRL_lsb_SHIFT                           11

/* MOCA_SPI :: REG_CTRL :: cpol [10:10] */
#define BCHP_MOCA_SPI_REG_CTRL_cpol_MASK                           0x00000400
#define BCHP_MOCA_SPI_REG_CTRL_cpol_SHIFT                          10

/* MOCA_SPI :: REG_CTRL :: cpha [09:09] */
#define BCHP_MOCA_SPI_REG_CTRL_cpha_MASK                           0x00000200
#define BCHP_MOCA_SPI_REG_CTRL_cpha_SHIFT                          9

/* MOCA_SPI :: REG_CTRL :: go_bsy [08:08] */
#define BCHP_MOCA_SPI_REG_CTRL_go_bsy_MASK                         0x00000100
#define BCHP_MOCA_SPI_REG_CTRL_go_bsy_SHIFT                        8

/* MOCA_SPI :: REG_CTRL :: len [07:00] */
#define BCHP_MOCA_SPI_REG_CTRL_len_MASK                            0x000000ff
#define BCHP_MOCA_SPI_REG_CTRL_len_SHIFT                           0

/***************************************************************************
 *REG_DIVIDER - SPI Clock Setting Register
 ***************************************************************************/
/* MOCA_SPI :: REG_DIVIDER :: reserved0 [31:08] */
#define BCHP_MOCA_SPI_REG_DIVIDER_reserved0_MASK                   0xffffff00
#define BCHP_MOCA_SPI_REG_DIVIDER_reserved0_SHIFT                  8

/* MOCA_SPI :: REG_DIVIDER :: div [07:00] */
#define BCHP_MOCA_SPI_REG_DIVIDER_div_MASK                         0x000000ff
#define BCHP_MOCA_SPI_REG_DIVIDER_div_SHIFT                        0

/***************************************************************************
 *REG_SLAVE_SEL - SPI Slave Select Register
 ***************************************************************************/
/* MOCA_SPI :: REG_SLAVE_SEL :: reserved0 [31:08] */
#define BCHP_MOCA_SPI_REG_SLAVE_SEL_reserved0_MASK                 0xffffff00
#define BCHP_MOCA_SPI_REG_SLAVE_SEL_reserved0_SHIFT                8

/* MOCA_SPI :: REG_SLAVE_SEL :: ss [07:00] */
#define BCHP_MOCA_SPI_REG_SLAVE_SEL_ss_MASK                        0x000000ff
#define BCHP_MOCA_SPI_REG_SLAVE_SEL_ss_SHIFT                       0

/***************************************************************************
 *REG_INT_STATUS - SPI Interrupt Status Register
 ***************************************************************************/
/* MOCA_SPI :: REG_INT_STATUS :: reserved0 [31:01] */
#define BCHP_MOCA_SPI_REG_INT_STATUS_reserved0_MASK                0xfffffffe
#define BCHP_MOCA_SPI_REG_INT_STATUS_reserved0_SHIFT               1

/* MOCA_SPI :: REG_INT_STATUS :: is [00:00] */
#define BCHP_MOCA_SPI_REG_INT_STATUS_is_MASK                       0x00000001
#define BCHP_MOCA_SPI_REG_INT_STATUS_is_SHIFT                      0

#endif /* #ifndef BCHP_MOCA_SPI_H__ */

/* End of File */
