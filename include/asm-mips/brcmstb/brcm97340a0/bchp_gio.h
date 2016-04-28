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
 * Date:           Generated on         Fri Mar 20 12:50:41 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_gio.h $
 * 
 * Hydra_Software_Devel/1   3/22/09 8:24p yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#ifndef BCHP_GIO_H__
#define BCHP_GIO_H__

/***************************************************************************
 *GIO - GPIO
 ***************************************************************************/
#define BCHP_GIO_ODEN_LO                         0x00406700 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE [31:0] */
#define BCHP_GIO_DATA_LO                         0x00406704 /* GENERAL PURPOSE I/O DATA [31:0] */
#define BCHP_GIO_IODIR_LO                        0x00406708 /* GENERAL PURPOSE I/O DIRECTION [31:0] */
#define BCHP_GIO_EC_LO                           0x0040670c /* GENERAL PURPOSE I/O EDGE CONFIGURATION [31:0] */
#define BCHP_GIO_EI_LO                           0x00406710 /* GENERAL PURPOSE I/O EDGE INSENSITIVE [31:0] */
#define BCHP_GIO_MASK_LO                         0x00406714 /* GENERAL PURPOSE I/O INTERRUPT MASK [31:0] */
#define BCHP_GIO_LEVEL_LO                        0x00406718 /* GENERAL PURPOSE I/O INTERRUPT TYPE [31:0] */
#define BCHP_GIO_STAT_LO                         0x0040671c /* GENERAL PURPOSE I/O INTERRUPT STATUS [31:0] */
#define BCHP_GIO_ODEN_HI                         0x00406720 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE [63:32] */
#define BCHP_GIO_DATA_HI                         0x00406724 /* GENERAL PURPOSE I/O DATA [63:32] */
#define BCHP_GIO_IODIR_HI                        0x00406728 /* GENERAL PURPOSE I/O DIRECTION [63:32] */
#define BCHP_GIO_EC_HI                           0x0040672c /* GENERAL PURPOSE I/O EDGE CONFIGURATION [63:32] */
#define BCHP_GIO_EI_HI                           0x00406730 /* GENERAL PURPOSE I/O EDGE INSENSITIVE [63:32] */
#define BCHP_GIO_MASK_HI                         0x00406734 /* GENERAL PURPOSE I/O INTERRUPT MASK [63:32] */
#define BCHP_GIO_LEVEL_HI                        0x00406738 /* GENERAL PURPOSE I/O INTERRUPT TYPE [63:32] */
#define BCHP_GIO_STAT_HI                         0x0040673c /* GENERAL PURPOSE I/O INTERRUPT STATUS [63:32] */
#define BCHP_GIO_ODEN_EXT                        0x00406740 /* GENERAL PURPOSE I/O OPEN DRAIN ENABLE [85:64] (GPIO[77:64], SGPIO[7:0]) */
#define BCHP_GIO_DATA_EXT                        0x00406744 /* GENERAL PURPOSE I/O DATA [85:64] (GPIO[77:64], SGPIO[7:0]) */
#define BCHP_GIO_IODIR_EXT                       0x00406748 /* GENERAL PURPOSE I/O DIRECTION [85:64] (GPIO[77:64], SGPIO[7:0]) */
#define BCHP_GIO_EC_EXT                          0x0040674c /* GENERAL PURPOSE I/O EDGE CONFIGURATION [85:64] (GPIO[77:64], SGPIO[7:0]) */
#define BCHP_GIO_EI_EXT                          0x00406750 /* GENERAL PURPOSE I/O EDGE INSENSITIVE [85:64] (GPIO[77:64], SGPIO[7:0]) */
#define BCHP_GIO_MASK_EXT                        0x00406754 /* GENERAL PURPOSE I/O INTERRUPT MASK [85:64] (GPIO[77:64], SGPIO[7:0]) */
#define BCHP_GIO_LEVEL_EXT                       0x00406758 /* GENERAL PURPOSE I/O INTERRUPT TYPE [85:64] (GPIO[77:64], SGPIO[7:0]) */
#define BCHP_GIO_STAT_EXT                        0x0040675c /* GENERAL PURPOSE I/O INTERRUPT STATUS [85:64] (GPIO[77:64], SGPIO[7:0]) */

/***************************************************************************
 *ODEN_LO - GENERAL PURPOSE I/O OPEN DRAIN ENABLE [31:0]
 ***************************************************************************/
/* GIO :: ODEN_LO :: oden [31:00] */
#define BCHP_GIO_ODEN_LO_oden_MASK                                 0xffffffff
#define BCHP_GIO_ODEN_LO_oden_SHIFT                                0

/***************************************************************************
 *DATA_LO - GENERAL PURPOSE I/O DATA [31:0]
 ***************************************************************************/
/* GIO :: DATA_LO :: data [31:00] */
#define BCHP_GIO_DATA_LO_data_MASK                                 0xffffffff
#define BCHP_GIO_DATA_LO_data_SHIFT                                0

/***************************************************************************
 *IODIR_LO - GENERAL PURPOSE I/O DIRECTION [31:0]
 ***************************************************************************/
/* GIO :: IODIR_LO :: iodir [31:00] */
#define BCHP_GIO_IODIR_LO_iodir_MASK                               0xffffffff
#define BCHP_GIO_IODIR_LO_iodir_SHIFT                              0

/***************************************************************************
 *EC_LO - GENERAL PURPOSE I/O EDGE CONFIGURATION [31:0]
 ***************************************************************************/
/* GIO :: EC_LO :: edge_config [31:00] */
#define BCHP_GIO_EC_LO_edge_config_MASK                            0xffffffff
#define BCHP_GIO_EC_LO_edge_config_SHIFT                           0

/***************************************************************************
 *EI_LO - GENERAL PURPOSE I/O EDGE INSENSITIVE [31:0]
 ***************************************************************************/
/* GIO :: EI_LO :: edge_insensitive [31:00] */
#define BCHP_GIO_EI_LO_edge_insensitive_MASK                       0xffffffff
#define BCHP_GIO_EI_LO_edge_insensitive_SHIFT                      0

/***************************************************************************
 *MASK_LO - GENERAL PURPOSE I/O INTERRUPT MASK [31:0]
 ***************************************************************************/
/* GIO :: MASK_LO :: irq_mask [31:00] */
#define BCHP_GIO_MASK_LO_irq_mask_MASK                             0xffffffff
#define BCHP_GIO_MASK_LO_irq_mask_SHIFT                            0

/***************************************************************************
 *LEVEL_LO - GENERAL PURPOSE I/O INTERRUPT TYPE [31:0]
 ***************************************************************************/
/* GIO :: LEVEL_LO :: level [31:00] */
#define BCHP_GIO_LEVEL_LO_level_MASK                               0xffffffff
#define BCHP_GIO_LEVEL_LO_level_SHIFT                              0

/***************************************************************************
 *STAT_LO - GENERAL PURPOSE I/O INTERRUPT STATUS [31:0]
 ***************************************************************************/
/* GIO :: STAT_LO :: irq_status [31:00] */
#define BCHP_GIO_STAT_LO_irq_status_MASK                           0xffffffff
#define BCHP_GIO_STAT_LO_irq_status_SHIFT                          0

/***************************************************************************
 *ODEN_HI - GENERAL PURPOSE I/O OPEN DRAIN ENABLE [63:32]
 ***************************************************************************/
/* GIO :: ODEN_HI :: oden [31:00] */
#define BCHP_GIO_ODEN_HI_oden_MASK                                 0xffffffff
#define BCHP_GIO_ODEN_HI_oden_SHIFT                                0

/***************************************************************************
 *DATA_HI - GENERAL PURPOSE I/O DATA [63:32]
 ***************************************************************************/
/* GIO :: DATA_HI :: data [31:00] */
#define BCHP_GIO_DATA_HI_data_MASK                                 0xffffffff
#define BCHP_GIO_DATA_HI_data_SHIFT                                0

/***************************************************************************
 *IODIR_HI - GENERAL PURPOSE I/O DIRECTION [63:32]
 ***************************************************************************/
/* GIO :: IODIR_HI :: iodir [31:00] */
#define BCHP_GIO_IODIR_HI_iodir_MASK                               0xffffffff
#define BCHP_GIO_IODIR_HI_iodir_SHIFT                              0

/***************************************************************************
 *EC_HI - GENERAL PURPOSE I/O EDGE CONFIGURATION [63:32]
 ***************************************************************************/
/* GIO :: EC_HI :: edge_config [31:00] */
#define BCHP_GIO_EC_HI_edge_config_MASK                            0xffffffff
#define BCHP_GIO_EC_HI_edge_config_SHIFT                           0

/***************************************************************************
 *EI_HI - GENERAL PURPOSE I/O EDGE INSENSITIVE [63:32]
 ***************************************************************************/
/* GIO :: EI_HI :: edge_insensitive [31:00] */
#define BCHP_GIO_EI_HI_edge_insensitive_MASK                       0xffffffff
#define BCHP_GIO_EI_HI_edge_insensitive_SHIFT                      0

/***************************************************************************
 *MASK_HI - GENERAL PURPOSE I/O INTERRUPT MASK [63:32]
 ***************************************************************************/
/* GIO :: MASK_HI :: irq_mask [31:00] */
#define BCHP_GIO_MASK_HI_irq_mask_MASK                             0xffffffff
#define BCHP_GIO_MASK_HI_irq_mask_SHIFT                            0

/***************************************************************************
 *LEVEL_HI - GENERAL PURPOSE I/O INTERRUPT TYPE [63:32]
 ***************************************************************************/
/* GIO :: LEVEL_HI :: level [31:00] */
#define BCHP_GIO_LEVEL_HI_level_MASK                               0xffffffff
#define BCHP_GIO_LEVEL_HI_level_SHIFT                              0

/***************************************************************************
 *STAT_HI - GENERAL PURPOSE I/O INTERRUPT STATUS [63:32]
 ***************************************************************************/
/* GIO :: STAT_HI :: irq_status [31:00] */
#define BCHP_GIO_STAT_HI_irq_status_MASK                           0xffffffff
#define BCHP_GIO_STAT_HI_irq_status_SHIFT                          0

/***************************************************************************
 *ODEN_EXT - GENERAL PURPOSE I/O OPEN DRAIN ENABLE [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: ODEN_EXT :: reserved0 [31:22] */
#define BCHP_GIO_ODEN_EXT_reserved0_MASK                           0xffc00000
#define BCHP_GIO_ODEN_EXT_reserved0_SHIFT                          22

/* GIO :: ODEN_EXT :: oden [21:00] */
#define BCHP_GIO_ODEN_EXT_oden_MASK                                0x003fffff
#define BCHP_GIO_ODEN_EXT_oden_SHIFT                               0

/***************************************************************************
 *DATA_EXT - GENERAL PURPOSE I/O DATA [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: DATA_EXT :: reserved0 [31:22] */
#define BCHP_GIO_DATA_EXT_reserved0_MASK                           0xffc00000
#define BCHP_GIO_DATA_EXT_reserved0_SHIFT                          22

/* GIO :: DATA_EXT :: data [21:00] */
#define BCHP_GIO_DATA_EXT_data_MASK                                0x003fffff
#define BCHP_GIO_DATA_EXT_data_SHIFT                               0

/***************************************************************************
 *IODIR_EXT - GENERAL PURPOSE I/O DIRECTION [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: IODIR_EXT :: reserved0 [31:22] */
#define BCHP_GIO_IODIR_EXT_reserved0_MASK                          0xffc00000
#define BCHP_GIO_IODIR_EXT_reserved0_SHIFT                         22

/* GIO :: IODIR_EXT :: iodir [21:00] */
#define BCHP_GIO_IODIR_EXT_iodir_MASK                              0x003fffff
#define BCHP_GIO_IODIR_EXT_iodir_SHIFT                             0

/***************************************************************************
 *EC_EXT - GENERAL PURPOSE I/O EDGE CONFIGURATION [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: EC_EXT :: reserved0 [31:22] */
#define BCHP_GIO_EC_EXT_reserved0_MASK                             0xffc00000
#define BCHP_GIO_EC_EXT_reserved0_SHIFT                            22

/* GIO :: EC_EXT :: edge_config [21:00] */
#define BCHP_GIO_EC_EXT_edge_config_MASK                           0x003fffff
#define BCHP_GIO_EC_EXT_edge_config_SHIFT                          0

/***************************************************************************
 *EI_EXT - GENERAL PURPOSE I/O EDGE INSENSITIVE [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: EI_EXT :: reserved0 [31:22] */
#define BCHP_GIO_EI_EXT_reserved0_MASK                             0xffc00000
#define BCHP_GIO_EI_EXT_reserved0_SHIFT                            22

/* GIO :: EI_EXT :: edge_insensitive [21:00] */
#define BCHP_GIO_EI_EXT_edge_insensitive_MASK                      0x003fffff
#define BCHP_GIO_EI_EXT_edge_insensitive_SHIFT                     0

/***************************************************************************
 *MASK_EXT - GENERAL PURPOSE I/O INTERRUPT MASK [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: MASK_EXT :: reserved0 [31:22] */
#define BCHP_GIO_MASK_EXT_reserved0_MASK                           0xffc00000
#define BCHP_GIO_MASK_EXT_reserved0_SHIFT                          22

/* GIO :: MASK_EXT :: irq_mask [21:00] */
#define BCHP_GIO_MASK_EXT_irq_mask_MASK                            0x003fffff
#define BCHP_GIO_MASK_EXT_irq_mask_SHIFT                           0

/***************************************************************************
 *LEVEL_EXT - GENERAL PURPOSE I/O INTERRUPT TYPE [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: LEVEL_EXT :: reserved0 [31:22] */
#define BCHP_GIO_LEVEL_EXT_reserved0_MASK                          0xffc00000
#define BCHP_GIO_LEVEL_EXT_reserved0_SHIFT                         22

/* GIO :: LEVEL_EXT :: level [21:00] */
#define BCHP_GIO_LEVEL_EXT_level_MASK                              0x003fffff
#define BCHP_GIO_LEVEL_EXT_level_SHIFT                             0

/***************************************************************************
 *STAT_EXT - GENERAL PURPOSE I/O INTERRUPT STATUS [85:64] (GPIO[77:64], SGPIO[7:0])
 ***************************************************************************/
/* GIO :: STAT_EXT :: reserved0 [31:22] */
#define BCHP_GIO_STAT_EXT_reserved0_MASK                           0xffc00000
#define BCHP_GIO_STAT_EXT_reserved0_SHIFT                          22

/* GIO :: STAT_EXT :: irq_status [21:00] */
#define BCHP_GIO_STAT_EXT_irq_status_MASK                          0x003fffff
#define BCHP_GIO_STAT_EXT_irq_status_SHIFT                         0

#endif /* #ifndef BCHP_GIO_H__ */

/* End of File */
