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
 * Date:           Generated on         Mon Mar 23 11:04:41 2009
 *                 MD5 Checksum         39db7382cfc6d56476b4578f59380093
 *
 * Compiled with:  RDB Utility          unknown
 *                 RDB Parser           3.0
 *                 generate_int_id.pl   1.0
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_int_id_hif_intr2.h $
 * 
 * Hydra_Software_Devel/1   3/23/09 11:17a yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#include "bchp.h"
#include "bchp_hif_intr2.h"

#ifndef BCHP_INT_ID_HIF_INTR2_H__
#define BCHP_INT_ID_HIF_INTR2_H__

#define BCHP_INT_ID_EBI_TEA_INTR              BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_EBI_TEA_INTR_SHIFT)
#define BCHP_INT_ID_EBI_TIMEOUT_INTR          BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_EBI_TIMEOUT_INTR_SHIFT)
#define BCHP_INT_ID_EDU_DONE_INTR             BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_EDU_DONE_INTR_SHIFT)
#define BCHP_INT_ID_EDU_ERR_INTR              BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_EDU_ERR_INTR_SHIFT)
#define BCHP_INT_ID_HIF_RGR_BRIDGE_INTR       BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_HIF_RGR_BRIDGE_INTR_SHIFT)
#define BCHP_INT_ID_MICH_INST_RD_INTR         BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_MICH_INST_RD_INTR_SHIFT)
#define BCHP_INT_ID_MICH_WR_INTR              BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_MICH_WR_INTR_SHIFT)
#define BCHP_INT_ID_NAND_BLKERA_INTR          BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_BLKERA_INTR_SHIFT)
#define BCHP_INT_ID_NAND_CORR_INTR            BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_CORR_INTR_SHIFT)
#define BCHP_INT_ID_NAND_CPYBK_INTR           BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_CPYBK_INTR_SHIFT)
#define BCHP_INT_ID_NAND_CTLRDY_INTR          BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_CTLRDY_INTR_SHIFT)
#define BCHP_INT_ID_NAND_NP_READ_INTR         BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_NP_READ_INTR_SHIFT)
#define BCHP_INT_ID_NAND_PGMPG_INTR           BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_PGMPG_INTR_SHIFT)
#define BCHP_INT_ID_NAND_RBPIN_INTR           BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_RBPIN_INTR_SHIFT)
#define BCHP_INT_ID_NAND_UNC_INTR             BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_NAND_UNC_INTR_SHIFT)
#define BCHP_INT_ID_PCI_ADR_PERR_INTR         BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_ADR_PERR_INTR_SHIFT)
#define BCHP_INT_ID_PCI_DMA_DONE              BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_DMA_DONE_SHIFT)
#define BCHP_INT_ID_PCI_DMA_ERROR             BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_DMA_ERROR_SHIFT)
#define BCHP_INT_ID_PCI_RBUS_MSTR_ERR_INTR    BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_RBUS_MSTR_ERR_INTR_SHIFT)
#define BCHP_INT_ID_PCI_REC_DATA_PERR_INTR    BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_REC_DATA_PERR_INTR_SHIFT)
#define BCHP_INT_ID_PCI_REC_MSTR_ABORT_INTR   BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_REC_MSTR_ABORT_INTR_SHIFT)
#define BCHP_INT_ID_PCI_REC_TAR_ABORT_INTR    BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_REC_TAR_ABORT_INTR_SHIFT)
#define BCHP_INT_ID_PCI_RG_BRIDGE_INTR        BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_RG_BRIDGE_INTR_SHIFT)
#define BCHP_INT_ID_PCI_SERR_DET_INTR         BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_SERR_DET_INTR_SHIFT)
#define BCHP_INT_ID_PCI_SRC_DATA_PERR_INTR    BCHP_INT_ID_CREATE(BCHP_HIF_INTR2_CPU_STATUS, BCHP_HIF_INTR2_CPU_STATUS_PCI_SRC_DATA_PERR_INTR_SHIFT)

#endif /* #ifndef BCHP_INT_ID_HIF_INTR2_H__ */

/* End of File */