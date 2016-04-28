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
 * Date:           Generated on         Mon Mar 23 11:04:56 2009
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
 * $brcm_Log: /magnum/basemodules/chp/7340/rdb/a0/bchp_int_id_memc_l2_0.h $
 * 
 * Hydra_Software_Devel/1   3/23/09 11:18a yuxiaz
 * PR53430: Initial version of header files.
 *
 ***************************************************************************/

#include "bchp.h"
#include "bchp_memc_l2_0.h"

#ifndef BCHP_INT_ID_MEMC_L2_0_H__
#define BCHP_INT_ID_MEMC_L2_0_H__

#define BCHP_INT_ID_ARC_0_INTR                BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_ARC_0_INTR_SHIFT)
#define BCHP_INT_ID_ARC_1_INTR                BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_ARC_1_INTR_SHIFT)
#define BCHP_INT_ID_ARC_2_INTR                BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_ARC_2_INTR_SHIFT)
#define BCHP_INT_ID_ARC_3_INTR                BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_ARC_3_INTR_SHIFT)
#define BCHP_INT_ID_BSP_ARCH_INTR             BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_BSP_ARCH_INTR_SHIFT)
#define BCHP_INT_ID_BSP_WRCH_INTR             BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_BSP_WRCH_INTR_SHIFT)
#define BCHP_INT_ID_GSIZE_VIOL_INTR_PFRI_0    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_GSIZE_VIOL_INTR_PFRI_0_SHIFT)
#define BCHP_INT_ID_GSIZE_VIOL_INTR_PFRI_1    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_GSIZE_VIOL_INTR_PFRI_1_SHIFT)
#define BCHP_INT_ID_GSIZE_VIOL_INTR_PFRI_2    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_GSIZE_VIOL_INTR_PFRI_2_SHIFT)
#define BCHP_INT_ID_GSIZE_VIOL_INTR_PFRI_3    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_GSIZE_VIOL_INTR_PFRI_3_SHIFT)
#define BCHP_INT_ID_INVALID_CMD_INTR          BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_INVALID_CMD_INTR_SHIFT)
#define BCHP_INT_ID_INVALID_MSTART_INTR       BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_INVALID_MSTART_INTR_SHIFT)
#define BCHP_INT_ID_INVALID_NMBX_INTR         BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_INVALID_NMBX_INTR_SHIFT)
#define BCHP_INT_ID_MISSING_EOG_INTR_PFRI_0   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_EOG_INTR_PFRI_0_SHIFT)
#define BCHP_INT_ID_MISSING_EOG_INTR_PFRI_1   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_EOG_INTR_PFRI_1_SHIFT)
#define BCHP_INT_ID_MISSING_EOG_INTR_PFRI_2   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_EOG_INTR_PFRI_2_SHIFT)
#define BCHP_INT_ID_MISSING_EOG_INTR_PFRI_3   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_EOG_INTR_PFRI_3_SHIFT)
#define BCHP_INT_ID_MISSING_LAST_WRITE_INTR   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_LAST_WRITE_INTR_SHIFT)
#define BCHP_INT_ID_MISSING_SOG_INTR_PFRI_0   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_SOG_INTR_PFRI_0_SHIFT)
#define BCHP_INT_ID_MISSING_SOG_INTR_PFRI_1   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_SOG_INTR_PFRI_1_SHIFT)
#define BCHP_INT_ID_MISSING_SOG_INTR_PFRI_2   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_SOG_INTR_PFRI_2_SHIFT)
#define BCHP_INT_ID_MISSING_SOG_INTR_PFRI_3   BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_MISSING_SOG_INTR_PFRI_3_SHIFT)
#define BCHP_INT_ID_NO_REQ_INTR               BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_NO_REQ_INTR_SHIFT)
#define BCHP_INT_ID_PAGE_BREAK_INTR_PFRI_0    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_PAGE_BREAK_INTR_PFRI_0_SHIFT)
#define BCHP_INT_ID_PAGE_BREAK_INTR_PFRI_1    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_PAGE_BREAK_INTR_PFRI_1_SHIFT)
#define BCHP_INT_ID_PAGE_BREAK_INTR_PFRI_2    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_PAGE_BREAK_INTR_PFRI_2_SHIFT)
#define BCHP_INT_ID_PAGE_BREAK_INTR_PFRI_3    BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_PAGE_BREAK_INTR_PFRI_3_SHIFT)
#define BCHP_INT_ID_RGR_BRIDGE_INTR           BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_RGR_BRIDGE_INTR_SHIFT)
#define BCHP_INT_ID_SM_TIMEOUT_INTR           BCHP_INT_ID_CREATE(BCHP_MEMC_L2_0_R5F_STATUS, BCHP_MEMC_L2_0_R5F_STATUS_SM_TIMEOUT_INTR_SHIFT)

#endif /* #ifndef BCHP_INT_ID_MEMC_L2_0_H__ */

/* End of File */
