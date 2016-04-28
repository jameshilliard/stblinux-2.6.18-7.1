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
 * Date:           Generated on         Thu Sep  4 18:09:30 2008
 *                 MD5 Checksum         b2212171e610d78d317adc76ed35c6de
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7420/rdb/a0/bchp_sata_mmio.h $
 * 
 * Hydra_Software_Devel/2   9/5/08 11:45a tdo
 * PR42663: Sync up RDB
 *
 ***************************************************************************/

#ifndef BCHP_SATA_MMIO_H__
#define BCHP_SATA_MMIO_H__

/***************************************************************************
 *SATA_MMIO - MMI/O Address mapping
 ***************************************************************************/
#define BCHP_SATA_MMIO_SATA_STATUS               0x001a0440 /* SATA Status Register(SCR0) */
#define BCHP_SATA_MMIO_SATA_ERROR                0x001a0444 /* SATA Error Register(SCR1) */
#define BCHP_SATA_MMIO_SATA_CONTROL              0x001a0448 /* SATA Control Register(SCR2) */
#define BCHP_SATA_MMIO_SATA_CONTROL1             0x001a0480 /* SATA Internal Control 1(FIFO Control) */
#define BCHP_SATA_MMIO_SATA_CONTROL2             0x001a0484 /* SATA Internal Control 2 (Debug Control) */
#define BCHP_SATA_MMIO_SATA_MASK                 0x001a0488 /* SerialATA Interrupt Mask Register(SIMR) */
#define BCHP_SATA_MMIO_SATA_MDIO                 0x001a048c /* SATA MDIO Access Register */
#define BCHP_SATA_MMIO_SATA_BIST                 0x001a0490 /* SerialATA BIST FIS Control Register(SBCR) */

/***************************************************************************
 *SATA_STATUS - SATA Status Register(SCR0)
 ***************************************************************************/
/* SATA_MMIO :: SATA_STATUS :: reserved0 [31:12] */
#define BCHP_SATA_MMIO_SATA_STATUS_reserved0_MASK                  0xfffff000
#define BCHP_SATA_MMIO_SATA_STATUS_reserved0_SHIFT                 12

/* SATA_MMIO :: SATA_STATUS :: DET [11:08] */
#define BCHP_SATA_MMIO_SATA_STATUS_DET_MASK                        0x00000f00
#define BCHP_SATA_MMIO_SATA_STATUS_DET_SHIFT                       8

/* SATA_MMIO :: SATA_STATUS :: SPD [07:04] */
#define BCHP_SATA_MMIO_SATA_STATUS_SPD_MASK                        0x000000f0
#define BCHP_SATA_MMIO_SATA_STATUS_SPD_SHIFT                       4

/* SATA_MMIO :: SATA_STATUS :: DETN [03:00] */
#define BCHP_SATA_MMIO_SATA_STATUS_DETN_MASK                       0x0000000f
#define BCHP_SATA_MMIO_SATA_STATUS_DETN_SHIFT                      0

/***************************************************************************
 *SATA_ERROR - SATA Error Register(SCR1)
 ***************************************************************************/
/* SATA_MMIO :: SATA_ERROR :: reserved0 [31:27] */
#define BCHP_SATA_MMIO_SATA_ERROR_reserved0_MASK                   0xf8000000
#define BCHP_SATA_MMIO_SATA_ERROR_reserved0_SHIFT                  27

/* SATA_MMIO :: SATA_ERROR :: DPC [26:26] */
#define BCHP_SATA_MMIO_SATA_ERROR_DPC_MASK                         0x04000000
#define BCHP_SATA_MMIO_SATA_ERROR_DPC_SHIFT                        26

/* SATA_MMIO :: SATA_ERROR :: UFF [25:25] */
#define BCHP_SATA_MMIO_SATA_ERROR_UFF_MASK                         0x02000000
#define BCHP_SATA_MMIO_SATA_ERROR_UFF_SHIFT                        25

/* SATA_MMIO :: SATA_ERROR :: TLPE [24:24] */
#define BCHP_SATA_MMIO_SATA_ERROR_TLPE_MASK                        0x01000000
#define BCHP_SATA_MMIO_SATA_ERROR_TLPE_SHIFT                       24

/* SATA_MMIO :: SATA_ERROR :: LLPE [23:23] */
#define BCHP_SATA_MMIO_SATA_ERROR_LLPE_MASK                        0x00800000
#define BCHP_SATA_MMIO_SATA_ERROR_LLPE_SHIFT                       23

/* SATA_MMIO :: SATA_ERROR :: RERR [22:22] */
#define BCHP_SATA_MMIO_SATA_ERROR_RERR_MASK                        0x00400000
#define BCHP_SATA_MMIO_SATA_ERROR_RERR_SHIFT                       22

/* SATA_MMIO :: SATA_ERROR :: CRC [21:21] */
#define BCHP_SATA_MMIO_SATA_ERROR_CRC_MASK                         0x00200000
#define BCHP_SATA_MMIO_SATA_ERROR_CRC_SHIFT                        21

/* SATA_MMIO :: SATA_ERROR :: DE [20:20] */
#define BCHP_SATA_MMIO_SATA_ERROR_DE_MASK                          0x00100000
#define BCHP_SATA_MMIO_SATA_ERROR_DE_SHIFT                         20

/* SATA_MMIO :: SATA_ERROR :: R8B_10B [19:19] */
#define BCHP_SATA_MMIO_SATA_ERROR_R8B_10B_MASK                     0x00080000
#define BCHP_SATA_MMIO_SATA_ERROR_R8B_10B_SHIFT                    19

/* SATA_MMIO :: SATA_ERROR :: COMWAKE [18:18] */
#define BCHP_SATA_MMIO_SATA_ERROR_COMWAKE_MASK                     0x00040000
#define BCHP_SATA_MMIO_SATA_ERROR_COMWAKE_SHIFT                    18

/* SATA_MMIO :: SATA_ERROR :: PIE [17:17] */
#define BCHP_SATA_MMIO_SATA_ERROR_PIE_MASK                         0x00020000
#define BCHP_SATA_MMIO_SATA_ERROR_PIE_SHIFT                        17

/* SATA_MMIO :: SATA_ERROR :: PHY_RDY [16:16] */
#define BCHP_SATA_MMIO_SATA_ERROR_PHY_RDY_MASK                     0x00010000
#define BCHP_SATA_MMIO_SATA_ERROR_PHY_RDY_SHIFT                    16

/* SATA_MMIO :: SATA_ERROR :: reserved1 [15:12] */
#define BCHP_SATA_MMIO_SATA_ERROR_reserved1_MASK                   0x0000f000
#define BCHP_SATA_MMIO_SATA_ERROR_reserved1_SHIFT                  12

/* SATA_MMIO :: SATA_ERROR :: IERR [11:11] */
#define BCHP_SATA_MMIO_SATA_ERROR_IERR_MASK                        0x00000800
#define BCHP_SATA_MMIO_SATA_ERROR_IERR_SHIFT                       11

/* SATA_MMIO :: SATA_ERROR :: PRO_ERR [10:10] */
#define BCHP_SATA_MMIO_SATA_ERROR_PRO_ERR_MASK                     0x00000400
#define BCHP_SATA_MMIO_SATA_ERROR_PRO_ERR_SHIFT                    10

/* SATA_MMIO :: SATA_ERROR :: PERR [09:09] */
#define BCHP_SATA_MMIO_SATA_ERROR_PERR_MASK                        0x00000200
#define BCHP_SATA_MMIO_SATA_ERROR_PERR_SHIFT                       9

/* SATA_MMIO :: SATA_ERROR :: NRERR [08:08] */
#define BCHP_SATA_MMIO_SATA_ERROR_NRERR_MASK                       0x00000100
#define BCHP_SATA_MMIO_SATA_ERROR_NRERR_SHIFT                      8

/* SATA_MMIO :: SATA_ERROR :: reserved2 [07:02] */
#define BCHP_SATA_MMIO_SATA_ERROR_reserved2_MASK                   0x000000fc
#define BCHP_SATA_MMIO_SATA_ERROR_reserved2_SHIFT                  2

/* SATA_MMIO :: SATA_ERROR :: TCE [01:01] */
#define BCHP_SATA_MMIO_SATA_ERROR_TCE_MASK                         0x00000002
#define BCHP_SATA_MMIO_SATA_ERROR_TCE_SHIFT                        1

/* SATA_MMIO :: SATA_ERROR :: DRE [00:00] */
#define BCHP_SATA_MMIO_SATA_ERROR_DRE_MASK                         0x00000001
#define BCHP_SATA_MMIO_SATA_ERROR_DRE_SHIFT                        0

/***************************************************************************
 *SATA_CONTROL - SATA Control Register(SCR2)
 ***************************************************************************/
/* SATA_MMIO :: SATA_CONTROL :: reserved0 [31:12] */
#define BCHP_SATA_MMIO_SATA_CONTROL_reserved0_MASK                 0xfffff000
#define BCHP_SATA_MMIO_SATA_CONTROL_reserved0_SHIFT                12

/* SATA_MMIO :: SATA_CONTROL :: DET [11:08] */
#define BCHP_SATA_MMIO_SATA_CONTROL_DET_MASK                       0x00000f00
#define BCHP_SATA_MMIO_SATA_CONTROL_DET_SHIFT                      8

/* SATA_MMIO :: SATA_CONTROL :: SPD [07:04] */
#define BCHP_SATA_MMIO_SATA_CONTROL_SPD_MASK                       0x000000f0
#define BCHP_SATA_MMIO_SATA_CONTROL_SPD_SHIFT                      4

/* SATA_MMIO :: SATA_CONTROL :: DETN [03:00] */
#define BCHP_SATA_MMIO_SATA_CONTROL_DETN_MASK                      0x0000000f
#define BCHP_SATA_MMIO_SATA_CONTROL_DETN_SHIFT                     0

/***************************************************************************
 *SATA_CONTROL1 - SATA Internal Control 1(FIFO Control)
 ***************************************************************************/
/* SATA_MMIO :: SATA_CONTROL1 :: reserved0 [31:21] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved0_MASK                0xffe00000
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved0_SHIFT               21

/* SATA_MMIO :: SATA_CONTROL1 :: DRDY [20:20] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_DRDY_MASK                     0x00100000
#define BCHP_SATA_MMIO_SATA_CONTROL1_DRDY_SHIFT                    20

/* SATA_MMIO :: SATA_CONTROL1 :: PIOSTUP [19:19] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_PIOSTUP_MASK                  0x00080000
#define BCHP_SATA_MMIO_SATA_CONTROL1_PIOSTUP_SHIFT                 19

/* SATA_MMIO :: SATA_CONTROL1 :: reserved1 [18:18] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved1_MASK                0x00040000
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved1_SHIFT               18

/* SATA_MMIO :: SATA_CONTROL1 :: FIFO_REQ [17:16] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_FIFO_REQ_MASK                 0x00030000
#define BCHP_SATA_MMIO_SATA_CONTROL1_FIFO_REQ_SHIFT                16

/* SATA_MMIO :: SATA_CONTROL1 :: reserved2 [15:13] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved2_MASK                0x0000e000
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved2_SHIFT               13

/* SATA_MMIO :: SATA_CONTROL1 :: FIFO_MAX [12:08] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_FIFO_MAX_MASK                 0x00001f00
#define BCHP_SATA_MMIO_SATA_CONTROL1_FIFO_MAX_SHIFT                8

/* SATA_MMIO :: SATA_CONTROL1 :: reserved3 [07:05] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved3_MASK                0x000000e0
#define BCHP_SATA_MMIO_SATA_CONTROL1_reserved3_SHIFT               5

/* SATA_MMIO :: SATA_CONTROL1 :: FIFO_MIN [04:00] */
#define BCHP_SATA_MMIO_SATA_CONTROL1_FIFO_MIN_MASK                 0x0000001f
#define BCHP_SATA_MMIO_SATA_CONTROL1_FIFO_MIN_SHIFT                0

/***************************************************************************
 *SATA_CONTROL2 - SATA Internal Control 2 (Debug Control)
 ***************************************************************************/
/* SATA_MMIO :: SATA_CONTROL2 :: BREAK_CONT [31:31] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_BREAK_CONT_MASK               0x80000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_BREAK_CONT_SHIFT              31

/* SATA_MMIO :: SATA_CONTROL2 :: GEN_CONT [30:30] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_GEN_CONT_MASK                 0x40000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_GEN_CONT_SHIFT                30

/* SATA_MMIO :: SATA_CONTROL2 :: SRST [29:29] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_SRST_MASK                     0x20000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_SRST_SHIFT                    29

/* SATA_MMIO :: SATA_CONTROL2 :: LINKSM [28:28] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_LINKSM_MASK                   0x10000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_LINKSM_SHIFT                  28

/* SATA_MMIO :: SATA_CONTROL2 :: PLLLOCK [27:27] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_PLLLOCK_MASK                  0x08000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_PLLLOCK_SHIFT                 27

/* SATA_MMIO :: SATA_CONTROL2 :: OOB [26:26] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_OOB_MASK                      0x04000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_OOB_SHIFT                     26

/* SATA_MMIO :: SATA_CONTROL2 :: D10 [25:25] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_D10_MASK                      0x02000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_D10_SHIFT                     25

/* SATA_MMIO :: SATA_CONTROL2 :: BYPASS [24:24] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_BYPASS_MASK                   0x01000000
#define BCHP_SATA_MMIO_SATA_CONTROL2_BYPASS_SHIFT                  24

/* SATA_MMIO :: SATA_CONTROL2 :: reserved0 [23:21] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_reserved0_MASK                0x00e00000
#define BCHP_SATA_MMIO_SATA_CONTROL2_reserved0_SHIFT               21

/* SATA_MMIO :: SATA_CONTROL2 :: WAKEUP [20:20] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_WAKEUP_MASK                   0x00100000
#define BCHP_SATA_MMIO_SATA_CONTROL2_WAKEUP_SHIFT                  20

/* SATA_MMIO :: SATA_CONTROL2 :: SLUMBER [19:19] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_SLUMBER_MASK                  0x00080000
#define BCHP_SATA_MMIO_SATA_CONTROL2_SLUMBER_SHIFT                 19

/* SATA_MMIO :: SATA_CONTROL2 :: PARTIAL [18:18] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_PARTIAL_MASK                  0x00040000
#define BCHP_SATA_MMIO_SATA_CONTROL2_PARTIAL_SHIFT                 18

/* SATA_MMIO :: SATA_CONTROL2 :: reserved1 [17:17] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_reserved1_MASK                0x00020000
#define BCHP_SATA_MMIO_SATA_CONTROL2_reserved1_SHIFT               17

/* SATA_MMIO :: SATA_CONTROL2 :: TEST [16:16] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_TEST_MASK                     0x00010000
#define BCHP_SATA_MMIO_SATA_CONTROL2_TEST_SHIFT                    16

/* SATA_MMIO :: SATA_CONTROL2 :: PTM [15:15] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_PTM_MASK                      0x00008000
#define BCHP_SATA_MMIO_SATA_CONTROL2_PTM_SHIFT                     15

/* SATA_MMIO :: SATA_CONTROL2 :: DEBUG [14:14] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_DEBUG_MASK                    0x00004000
#define BCHP_SATA_MMIO_SATA_CONTROL2_DEBUG_SHIFT                   14

/* SATA_MMIO :: SATA_CONTROL2 :: reserved2 [13:13] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_reserved2_MASK                0x00002000
#define BCHP_SATA_MMIO_SATA_CONTROL2_reserved2_SHIFT               13

/* SATA_MMIO :: SATA_CONTROL2 :: TESTMUX [12:11] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_TESTMUX_MASK                  0x00001800
#define BCHP_SATA_MMIO_SATA_CONTROL2_TESTMUX_SHIFT                 11

/* SATA_MMIO :: SATA_CONTROL2 :: PORTSEL [10:08] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_PORTSEL_MASK                  0x00000700
#define BCHP_SATA_MMIO_SATA_CONTROL2_PORTSEL_SHIFT                 8

/* SATA_MMIO :: SATA_CONTROL2 :: TESTB [07:04] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_TESTB_MASK                    0x000000f0
#define BCHP_SATA_MMIO_SATA_CONTROL2_TESTB_SHIFT                   4

/* SATA_MMIO :: SATA_CONTROL2 :: TESTA [03:00] */
#define BCHP_SATA_MMIO_SATA_CONTROL2_TESTA_MASK                    0x0000000f
#define BCHP_SATA_MMIO_SATA_CONTROL2_TESTA_SHIFT                   0

/***************************************************************************
 *SATA_MASK - SerialATA Interrupt Mask Register(SIMR)
 ***************************************************************************/
/* SATA_MMIO :: SATA_MASK :: DISABLE [31:31] */
#define BCHP_SATA_MMIO_SATA_MASK_DISABLE_MASK                      0x80000000
#define BCHP_SATA_MMIO_SATA_MASK_DISABLE_SHIFT                     31

/* SATA_MMIO :: SATA_MASK :: reserved0 [30:27] */
#define BCHP_SATA_MMIO_SATA_MASK_reserved0_MASK                    0x78000000
#define BCHP_SATA_MMIO_SATA_MASK_reserved0_SHIFT                   27

/* SATA_MMIO :: SATA_MASK :: DPCM [26:26] */
#define BCHP_SATA_MMIO_SATA_MASK_DPCM_MASK                         0x04000000
#define BCHP_SATA_MMIO_SATA_MASK_DPCM_SHIFT                        26

/* SATA_MMIO :: SATA_MASK :: UFFM [25:25] */
#define BCHP_SATA_MMIO_SATA_MASK_UFFM_MASK                         0x02000000
#define BCHP_SATA_MMIO_SATA_MASK_UFFM_SHIFT                        25

/* SATA_MMIO :: SATA_MASK :: TLPEM [24:24] */
#define BCHP_SATA_MMIO_SATA_MASK_TLPEM_MASK                        0x01000000
#define BCHP_SATA_MMIO_SATA_MASK_TLPEM_SHIFT                       24

/* SATA_MMIO :: SATA_MASK :: LLPEM [23:23] */
#define BCHP_SATA_MMIO_SATA_MASK_LLPEM_MASK                        0x00800000
#define BCHP_SATA_MMIO_SATA_MASK_LLPEM_SHIFT                       23

/* SATA_MMIO :: SATA_MASK :: RERRM [22:22] */
#define BCHP_SATA_MMIO_SATA_MASK_RERRM_MASK                        0x00400000
#define BCHP_SATA_MMIO_SATA_MASK_RERRM_SHIFT                       22

/* SATA_MMIO :: SATA_MASK :: CRCM [21:21] */
#define BCHP_SATA_MMIO_SATA_MASK_CRCM_MASK                         0x00200000
#define BCHP_SATA_MMIO_SATA_MASK_CRCM_SHIFT                        21

/* SATA_MMIO :: SATA_MASK :: DEM [20:20] */
#define BCHP_SATA_MMIO_SATA_MASK_DEM_MASK                          0x00100000
#define BCHP_SATA_MMIO_SATA_MASK_DEM_SHIFT                         20

/* SATA_MMIO :: SATA_MASK :: R8B_10BM [19:19] */
#define BCHP_SATA_MMIO_SATA_MASK_R8B_10BM_MASK                     0x00080000
#define BCHP_SATA_MMIO_SATA_MASK_R8B_10BM_SHIFT                    19

/* SATA_MMIO :: SATA_MASK :: COMWAKEM [18:18] */
#define BCHP_SATA_MMIO_SATA_MASK_COMWAKEM_MASK                     0x00040000
#define BCHP_SATA_MMIO_SATA_MASK_COMWAKEM_SHIFT                    18

/* SATA_MMIO :: SATA_MASK :: PIEM [17:17] */
#define BCHP_SATA_MMIO_SATA_MASK_PIEM_MASK                         0x00020000
#define BCHP_SATA_MMIO_SATA_MASK_PIEM_SHIFT                        17

/* SATA_MMIO :: SATA_MASK :: PHYRDYM [16:16] */
#define BCHP_SATA_MMIO_SATA_MASK_PHYRDYM_MASK                      0x00010000
#define BCHP_SATA_MMIO_SATA_MASK_PHYRDYM_SHIFT                     16

/* SATA_MMIO :: SATA_MASK :: reserved1 [15:12] */
#define BCHP_SATA_MMIO_SATA_MASK_reserved1_MASK                    0x0000f000
#define BCHP_SATA_MMIO_SATA_MASK_reserved1_SHIFT                   12

/* SATA_MMIO :: SATA_MASK :: IEM [11:11] */
#define BCHP_SATA_MMIO_SATA_MASK_IEM_MASK                          0x00000800
#define BCHP_SATA_MMIO_SATA_MASK_IEM_SHIFT                         11

/* SATA_MMIO :: SATA_MASK :: PROM [10:10] */
#define BCHP_SATA_MMIO_SATA_MASK_PROM_MASK                         0x00000400
#define BCHP_SATA_MMIO_SATA_MASK_PROM_SHIFT                        10

/* SATA_MMIO :: SATA_MASK :: PEM [09:09] */
#define BCHP_SATA_MMIO_SATA_MASK_PEM_MASK                          0x00000200
#define BCHP_SATA_MMIO_SATA_MASK_PEM_SHIFT                         9

/* SATA_MMIO :: SATA_MASK :: NREM [08:08] */
#define BCHP_SATA_MMIO_SATA_MASK_NREM_MASK                         0x00000100
#define BCHP_SATA_MMIO_SATA_MASK_NREM_SHIFT                        8

/* SATA_MMIO :: SATA_MASK :: reserved2 [07:02] */
#define BCHP_SATA_MMIO_SATA_MASK_reserved2_MASK                    0x000000fc
#define BCHP_SATA_MMIO_SATA_MASK_reserved2_SHIFT                   2

/* SATA_MMIO :: SATA_MASK :: TCEM [01:01] */
#define BCHP_SATA_MMIO_SATA_MASK_TCEM_MASK                         0x00000002
#define BCHP_SATA_MMIO_SATA_MASK_TCEM_SHIFT                        1

/* SATA_MMIO :: SATA_MASK :: DREM [00:00] */
#define BCHP_SATA_MMIO_SATA_MASK_DREM_MASK                         0x00000001
#define BCHP_SATA_MMIO_SATA_MASK_DREM_SHIFT                        0

/***************************************************************************
 *SATA_MDIO - SATA MDIO Access Register
 ***************************************************************************/
/* SATA_MMIO :: SATA_MDIO :: RW [31:16] */
#define BCHP_SATA_MMIO_SATA_MDIO_RW_MASK                           0xffff0000
#define BCHP_SATA_MMIO_SATA_MDIO_RW_SHIFT                          16

/* SATA_MMIO :: SATA_MDIO :: DONE [15:15] */
#define BCHP_SATA_MMIO_SATA_MDIO_DONE_MASK                         0x00008000
#define BCHP_SATA_MMIO_SATA_MDIO_DONE_SHIFT                        15

/* SATA_MMIO :: SATA_MDIO :: COMMAND [14:13] */
#define BCHP_SATA_MMIO_SATA_MDIO_COMMAND_MASK                      0x00006000
#define BCHP_SATA_MMIO_SATA_MDIO_COMMAND_SHIFT                     13

/* SATA_MMIO :: SATA_MDIO :: DEV_ADDR [12:08] */
#define BCHP_SATA_MMIO_SATA_MDIO_DEV_ADDR_MASK                     0x00001f00
#define BCHP_SATA_MMIO_SATA_MDIO_DEV_ADDR_SHIFT                    8

/* SATA_MMIO :: SATA_MDIO :: reserved0 [07:05] */
#define BCHP_SATA_MMIO_SATA_MDIO_reserved0_MASK                    0x000000e0
#define BCHP_SATA_MMIO_SATA_MDIO_reserved0_SHIFT                   5

/* SATA_MMIO :: SATA_MDIO :: REG_ADDR [04:00] */
#define BCHP_SATA_MMIO_SATA_MDIO_REG_ADDR_MASK                     0x0000001f
#define BCHP_SATA_MMIO_SATA_MDIO_REG_ADDR_SHIFT                    0

/***************************************************************************
 *SATA_BIST - SerialATA BIST FIS Control Register(SBCR)
 ***************************************************************************/
/* SATA_MMIO :: SATA_BIST :: BYTE3 [31:24] */
#define BCHP_SATA_MMIO_SATA_BIST_BYTE3_MASK                        0xff000000
#define BCHP_SATA_MMIO_SATA_BIST_BYTE3_SHIFT                       24

/* SATA_MMIO :: SATA_BIST :: BYTE2 [23:16] */
#define BCHP_SATA_MMIO_SATA_BIST_BYTE2_MASK                        0x00ff0000
#define BCHP_SATA_MMIO_SATA_BIST_BYTE2_SHIFT                       16

/* SATA_MMIO :: SATA_BIST :: BYTE1 [15:08] */
#define BCHP_SATA_MMIO_SATA_BIST_BYTE1_MASK                        0x0000ff00
#define BCHP_SATA_MMIO_SATA_BIST_BYTE1_SHIFT                       8

/* SATA_MMIO :: SATA_BIST :: reserved0 [07:05] */
#define BCHP_SATA_MMIO_SATA_BIST_reserved0_MASK                    0x000000e0
#define BCHP_SATA_MMIO_SATA_BIST_reserved0_SHIFT                   5

/* SATA_MMIO :: SATA_BIST :: REQ [04:04] */
#define BCHP_SATA_MMIO_SATA_BIST_REQ_MASK                          0x00000010
#define BCHP_SATA_MMIO_SATA_BIST_REQ_SHIFT                         4

/* SATA_MMIO :: SATA_BIST :: reserved1 [03:02] */
#define BCHP_SATA_MMIO_SATA_BIST_reserved1_MASK                    0x0000000c
#define BCHP_SATA_MMIO_SATA_BIST_reserved1_SHIFT                   2

/* SATA_MMIO :: SATA_BIST :: TR_LOOP [01:01] */
#define BCHP_SATA_MMIO_SATA_BIST_TR_LOOP_MASK                      0x00000002
#define BCHP_SATA_MMIO_SATA_BIST_TR_LOOP_SHIFT                     1

/* SATA_MMIO :: SATA_BIST :: RT_LOOP [00:00] */
#define BCHP_SATA_MMIO_SATA_BIST_RT_LOOP_MASK                      0x00000001
#define BCHP_SATA_MMIO_SATA_BIST_RT_LOOP_SHIFT                     0

#endif /* #ifndef BCHP_SATA_MMIO_H__ */

/* End of File */
