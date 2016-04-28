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
 * Date:           Generated on         Mon Mar 23 09:57:57 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_kbd1.h $
 * 
 * Hydra_Software_Devel/2   3/23/09 12:57p yuxiaz
 * PR53430: Update RDB header files.
 *
 ***************************************************************************/

#ifndef BCHP_KBD1_H__
#define BCHP_KBD1_H__

/***************************************************************************
 *KBD1 - IR Keyboard/Remote Receiver 1
 ***************************************************************************/
#define BCHP_KBD1_STATUS                         0x00406600 /* KEYBOARD/REMOTE RECEIVER STATUS REGISTER */
#define BCHP_KBD1_DIVISOR                        0x00406604 /* KEYBOARD/REMOTE RECEIVER DIVISOR */
#define BCHP_KBD1_FILTER1                        0x00406608 /* KEYBOARD FILTER1 */
#define BCHP_KBD1_DATA1                          0x0040660c /* KEYBOARD/REMOTE RECEIVER DATA WORD 1 (MS Word) */
#define BCHP_KBD1_DATA0                          0x00406610 /* KEYBOARD/REMOTE RECEIVER DATA WORD 0 (LS Word) */
#define BCHP_KBD1_CMD                            0x00406614 /* KEYBOARD/REMOTE RECEIVER COMMAND REGISTER */
#define BCHP_KBD1_CIR_ADDR                       0x00406618 /* CONSUMER IR DECODER ADDRESS REGISTER */
#define BCHP_KBD1_CIR_DATA                       0x0040661c /* CONSUMER IR DECODER DATA (LSB) */
#define BCHP_KBD1_KBD_MASK0                      0x00406620 /* KEBOARD INPUT MASK (LSB) */
#define BCHP_KBD1_KBD_MASK1                      0x00406624 /* KEBOARD INPUT MASK (MSB) */
#define BCHP_KBD1_KBD_PAT0                       0x00406628 /* KEBOARD INPUT PATTERN MATCH (LSB) */
#define BCHP_KBD1_KBD_PAT1                       0x0040662c /* KEBOARD INPUT PATTERN MATCH (MSB) */
#define BCHP_KBD1_STATUS2                        0x0040663c /* KEYBOARD/REMOTE RECEIVER STATUS2 REGISTER */

/***************************************************************************
 *STATUS - KEYBOARD/REMOTE RECEIVER STATUS REGISTER
 ***************************************************************************/
/* KBD1 :: STATUS :: reserved0 [31:08] */
#define BCHP_KBD1_STATUS_reserved0_MASK                            0xffffff00
#define BCHP_KBD1_STATUS_reserved0_SHIFT                           8

/* KBD1 :: STATUS :: lflag [07:07] */
#define BCHP_KBD1_STATUS_lflag_MASK                                0x00000080
#define BCHP_KBD1_STATUS_lflag_SHIFT                               7

/* KBD1 :: STATUS :: cir_pa [06:06] */
#define BCHP_KBD1_STATUS_cir_pa_MASK                               0x00000040
#define BCHP_KBD1_STATUS_cir_pa_SHIFT                              6

/* KBD1 :: STATUS :: cir_pb [05:05] */
#define BCHP_KBD1_STATUS_cir_pb_MASK                               0x00000020
#define BCHP_KBD1_STATUS_cir_pb_SHIFT                              5

/* KBD1 :: STATUS :: device [04:02] */
#define BCHP_KBD1_STATUS_device_MASK                               0x0000001c
#define BCHP_KBD1_STATUS_device_SHIFT                              2

/* KBD1 :: STATUS :: rflag [01:01] */
#define BCHP_KBD1_STATUS_rflag_MASK                                0x00000002
#define BCHP_KBD1_STATUS_rflag_SHIFT                               1

/* KBD1 :: STATUS :: irq [00:00] */
#define BCHP_KBD1_STATUS_irq_MASK                                  0x00000001
#define BCHP_KBD1_STATUS_irq_SHIFT                                 0

/***************************************************************************
 *DIVISOR - KEYBOARD/REMOTE RECEIVER DIVISOR
 ***************************************************************************/
/* KBD1 :: DIVISOR :: reserved0 [31:06] */
#define BCHP_KBD1_DIVISOR_reserved0_MASK                           0xffffffc0
#define BCHP_KBD1_DIVISOR_reserved0_SHIFT                          6

/* KBD1 :: DIVISOR :: divisor [05:00] */
#define BCHP_KBD1_DIVISOR_divisor_MASK                             0x0000003f
#define BCHP_KBD1_DIVISOR_divisor_SHIFT                            0

/***************************************************************************
 *FILTER1 - KEYBOARD FILTER1
 ***************************************************************************/
/* KBD1 :: FILTER1 :: reserved0 [31:07] */
#define BCHP_KBD1_FILTER1_reserved0_MASK                           0xffffff80
#define BCHP_KBD1_FILTER1_reserved0_SHIFT                          7

/* KBD1 :: FILTER1 :: filter_en [06:06] */
#define BCHP_KBD1_FILTER1_filter_en_MASK                           0x00000040
#define BCHP_KBD1_FILTER1_filter_en_SHIFT                          6

/* KBD1 :: FILTER1 :: filter_width [05:00] */
#define BCHP_KBD1_FILTER1_filter_width_MASK                        0x0000003f
#define BCHP_KBD1_FILTER1_filter_width_SHIFT                       0

/***************************************************************************
 *DATA1 - KEYBOARD/REMOTE RECEIVER DATA WORD 1 (MS Word)
 ***************************************************************************/
/* KBD1 :: DATA1 :: reserved0 [31:08] */
#define BCHP_KBD1_DATA1_reserved0_MASK                             0xffffff00
#define BCHP_KBD1_DATA1_reserved0_SHIFT                            8

/* KBD1 :: DATA1 :: data [07:00] */
#define BCHP_KBD1_DATA1_data_MASK                                  0x000000ff
#define BCHP_KBD1_DATA1_data_SHIFT                                 0

/***************************************************************************
 *DATA0 - KEYBOARD/REMOTE RECEIVER DATA WORD 0 (LS Word)
 ***************************************************************************/
/* KBD1 :: DATA0 :: data [31:00] */
#define BCHP_KBD1_DATA0_data_MASK                                  0xffffffff
#define BCHP_KBD1_DATA0_data_SHIFT                                 0

/***************************************************************************
 *CMD - KEYBOARD/REMOTE RECEIVER COMMAND REGISTER
 ***************************************************************************/
/* KBD1 :: CMD :: reserved0 [31:09] */
#define BCHP_KBD1_CMD_reserved0_MASK                               0xfffffe00
#define BCHP_KBD1_CMD_reserved0_SHIFT                              9

/* KBD1 :: CMD :: data_filtering [08:08] */
#define BCHP_KBD1_CMD_data_filtering_MASK                          0x00000100
#define BCHP_KBD1_CMD_data_filtering_SHIFT                         8

/* KBD1 :: CMD :: test_mode [07:07] */
#define BCHP_KBD1_CMD_test_mode_MASK                               0x00000080
#define BCHP_KBD1_CMD_test_mode_SHIFT                              7

/* KBD1 :: CMD :: alt_table [06:06] */
#define BCHP_KBD1_CMD_alt_table_MASK                               0x00000040
#define BCHP_KBD1_CMD_alt_table_SHIFT                              6

/* KBD1 :: CMD :: kbd_irqen [05:05] */
#define BCHP_KBD1_CMD_kbd_irqen_MASK                               0x00000020
#define BCHP_KBD1_CMD_kbd_irqen_SHIFT                              5

/* KBD1 :: CMD :: device_en [04:00] */
#define BCHP_KBD1_CMD_device_en_MASK                               0x0000001f
#define BCHP_KBD1_CMD_device_en_SHIFT                              0

/***************************************************************************
 *CIR_ADDR - CONSUMER IR DECODER ADDRESS REGISTER
 ***************************************************************************/
/* KBD1 :: CIR_ADDR :: reserved0 [31:05] */
#define BCHP_KBD1_CIR_ADDR_reserved0_MASK                          0xffffffe0
#define BCHP_KBD1_CIR_ADDR_reserved0_SHIFT                         5

/* KBD1 :: CIR_ADDR :: cir_addr [04:00] */
#define BCHP_KBD1_CIR_ADDR_cir_addr_MASK                           0x0000001f
#define BCHP_KBD1_CIR_ADDR_cir_addr_SHIFT                          0

/***************************************************************************
 *CIR_DATA - CONSUMER IR DECODER DATA (LSB)
 ***************************************************************************/
/* KBD1 :: CIR_DATA :: cir_data [31:00] */
#define BCHP_KBD1_CIR_DATA_cir_data_MASK                           0xffffffff
#define BCHP_KBD1_CIR_DATA_cir_data_SHIFT                          0

/***************************************************************************
 *KBD_MASK0 - KEBOARD INPUT MASK (LSB)
 ***************************************************************************/
/* KBD1 :: KBD_MASK0 :: kbd_mask0 [31:00] */
#define BCHP_KBD1_KBD_MASK0_kbd_mask0_MASK                         0xffffffff
#define BCHP_KBD1_KBD_MASK0_kbd_mask0_SHIFT                        0

/***************************************************************************
 *KBD_MASK1 - KEBOARD INPUT MASK (MSB)
 ***************************************************************************/
/* KBD1 :: KBD_MASK1 :: reserved0 [31:08] */
#define BCHP_KBD1_KBD_MASK1_reserved0_MASK                         0xffffff00
#define BCHP_KBD1_KBD_MASK1_reserved0_SHIFT                        8

/* KBD1 :: KBD_MASK1 :: kbd_mask1 [07:00] */
#define BCHP_KBD1_KBD_MASK1_kbd_mask1_MASK                         0x000000ff
#define BCHP_KBD1_KBD_MASK1_kbd_mask1_SHIFT                        0

/***************************************************************************
 *KBD_PAT0 - KEBOARD INPUT PATTERN MATCH (LSB)
 ***************************************************************************/
/* KBD1 :: KBD_PAT0 :: kbd_pat0 [31:00] */
#define BCHP_KBD1_KBD_PAT0_kbd_pat0_MASK                           0xffffffff
#define BCHP_KBD1_KBD_PAT0_kbd_pat0_SHIFT                          0

/***************************************************************************
 *KBD_PAT1 - KEBOARD INPUT PATTERN MATCH (MSB)
 ***************************************************************************/
/* KBD1 :: KBD_PAT1 :: reserved0 [31:08] */
#define BCHP_KBD1_KBD_PAT1_reserved0_MASK                          0xffffff00
#define BCHP_KBD1_KBD_PAT1_reserved0_SHIFT                         8

/* KBD1 :: KBD_PAT1 :: kbd_pat1 [07:00] */
#define BCHP_KBD1_KBD_PAT1_kbd_pat1_MASK                           0x000000ff
#define BCHP_KBD1_KBD_PAT1_kbd_pat1_SHIFT                          0

/***************************************************************************
 *STATUS2 - KEYBOARD/REMOTE RECEIVER STATUS2 REGISTER
 ***************************************************************************/
/* KBD1 :: STATUS2 :: reserved0 [31:07] */
#define BCHP_KBD1_STATUS2_reserved0_MASK                           0xffffff80
#define BCHP_KBD1_STATUS2_reserved0_SHIFT                          7

/* KBD1 :: STATUS2 :: cir_nbits_rcvd [06:00] */
#define BCHP_KBD1_STATUS2_cir_nbits_rcvd_MASK                      0x0000007f
#define BCHP_KBD1_STATUS2_cir_nbits_rcvd_SHIFT                     0

#endif /* #ifndef BCHP_KBD1_H__ */

/* End of File */
