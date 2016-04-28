/***************************************************************************
 *     Copyright (c) 1999-2006, Broadcom Corporation
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
 * $brcm_Workfile: bchp_sata_cfg.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/14/06 1:03p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Wed Jul 12 11:57:03 2006
 *                 MD5 Checksum         65dc148f276b8e1325bb5f85be0ccf82
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.006
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/7401/rdb/c0/bchp_sata_cfg.h $
 * 
 * Hydra_Software_Devel/1   7/14/06 1:03p jasonh
 * PR 22628: Initial version
 *
 ***************************************************************************/

#ifndef BCHP_SATA_CFG_H__
#define BCHP_SATA_CFG_H__

/***************************************************************************
 *SATA_CFG - PCI Configuration Register
 ***************************************************************************/
#define BCHP_SATA_CFG_VENDOR_ID                  0x520000 /* Vendor Identification Register */
#define BCHP_SATA_CFG_DEVICE_ID                  0x520002 /* Device Identification Register */
#define BCHP_SATA_CFG_PCI_COMMAND                0x520004 /* PCI Command Register */
#define BCHP_SATA_CFG_PCI_STATUS                 0x520006 /* PCI Status  Register */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE          0x00520008 /* Class Code Register */
#define BCHP_SATA_CFG_CACHELINE_SIZE             0x52000c /* Cacheline Size Register */
#define BCHP_SATA_CFG_MASTER_LATECY_TIMER        0x52000d /* Master Latency Timer Register */
#define BCHP_SATA_CFG_HEADER_TYPE                0x52000e /* Header Type Register */
#define BCHP_SATA_CFG_BIST                       0x52000f /* Built-in Self Test (BIST) Register */
#define BCHP_SATA_CFG_PCS0                       0x00520010 /* Base Address Register 0 (Primary CS0) */
#define BCHP_SATA_CFG_PCS1                       0x00520014 /* Base Address Register 1 (Primary CS1) */
#define BCHP_SATA_CFG_SCS0                       0x00520018 /* Base Address Register 2 (Secondary CS0) */
#define BCHP_SATA_CFG_SCS1                       0x0052001c /* Base Address Register 3 (Secondary CS1) */
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR       0x00520020 /* Bus Master Interface Base Address Register */
#define BCHP_SATA_CFG_MMIO_BASE_ADDR             0x00520024 /* MMIO Base Address Register */
#define BCHP_SATA_CFG_SUB_VENDOR_ID              0x52002c /* Sub-System Vendor ID Register */
#define BCHP_SATA_CFG_SUB_DEVICE_ID              0x52002e /* Sub-System Device ID Register */
#define BCHP_SATA_CFG_INTERRUPT_LINE             0x52003c /* Interrupt Line Register */
#define BCHP_SATA_CFG_INTERRUPT_PIN              0x52003d /* Interrupt Pin Register */
#define BCHP_SATA_CFG_MINIIMUM_GRANT             0x52003e /* Minimum Grant Register */
#define BCHP_SATA_CFG_MAXIMUM_LATENCY            0x52003f /* Maximum Latency Register */
#define BCHP_SATA_CFG_MISC_CONTROL               0x520070 /* SerialATA Misc Control Register */
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL          0x520078 /* SerialATA PCI Debug Control Register */
#define BCHP_SATA_CFG_GLOBAL_INTERRUPT_STATUS    0x00520080 /* SerialATA Global Interrupt Status Register */

/***************************************************************************
 *VENDOR_ID - Vendor Identification Register
 ***************************************************************************/
/* SATA_CFG :: VENDOR_ID :: ID [15:00] */
#define BCHP_SATA_CFG_VENDOR_ID_ID_MASK                            0xffff
#define BCHP_SATA_CFG_VENDOR_ID_ID_SHIFT                           0

/***************************************************************************
 *DEVICE_ID - Device Identification Register
 ***************************************************************************/
/* SATA_CFG :: DEVICE_ID :: ID [15:00] */
#define BCHP_SATA_CFG_DEVICE_ID_ID_MASK                            0xffff
#define BCHP_SATA_CFG_DEVICE_ID_ID_SHIFT                           0

/***************************************************************************
 *PCI_COMMAND - PCI Command Register
 ***************************************************************************/
/* SATA_CFG :: PCI_COMMAND :: Reserved [15:11] */
#define BCHP_SATA_CFG_PCI_COMMAND_Reserved_MASK                    0xf800
#define BCHP_SATA_CFG_PCI_COMMAND_Reserved_SHIFT                   11

/* SATA_CFG :: PCI_COMMAND :: Interrupt_Disable [10:10] */
#define BCHP_SATA_CFG_PCI_COMMAND_Interrupt_Disable_MASK           0x0400
#define BCHP_SATA_CFG_PCI_COMMAND_Interrupt_Disable_SHIFT          10

/* SATA_CFG :: PCI_COMMAND :: Fast_Back_to_Back_Enable [09:09] */
#define BCHP_SATA_CFG_PCI_COMMAND_Fast_Back_to_Back_Enable_MASK    0x0200
#define BCHP_SATA_CFG_PCI_COMMAND_Fast_Back_to_Back_Enable_SHIFT   9

/* SATA_CFG :: PCI_COMMAND :: SERR_Enable [08:08] */
#define BCHP_SATA_CFG_PCI_COMMAND_SERR_Enable_MASK                 0x0100
#define BCHP_SATA_CFG_PCI_COMMAND_SERR_Enable_SHIFT                8

/* SATA_CFG :: PCI_COMMAND :: Wait_Cycle_Control [07:07] */
#define BCHP_SATA_CFG_PCI_COMMAND_Wait_Cycle_Control_MASK          0x0080
#define BCHP_SATA_CFG_PCI_COMMAND_Wait_Cycle_Control_SHIFT         7

/* SATA_CFG :: PCI_COMMAND :: Parity_Error_Detection_Enable [06:06] */
#define BCHP_SATA_CFG_PCI_COMMAND_Parity_Error_Detection_Enable_MASK 0x0040
#define BCHP_SATA_CFG_PCI_COMMAND_Parity_Error_Detection_Enable_SHIFT 6

/* SATA_CFG :: PCI_COMMAND :: VGA_Palette_Snoop_Enable [05:05] */
#define BCHP_SATA_CFG_PCI_COMMAND_VGA_Palette_Snoop_Enable_MASK    0x0020
#define BCHP_SATA_CFG_PCI_COMMAND_VGA_Palette_Snoop_Enable_SHIFT   5

/* SATA_CFG :: PCI_COMMAND :: Memory_Write_Invalidate_Enable [04:04] */
#define BCHP_SATA_CFG_PCI_COMMAND_Memory_Write_Invalidate_Enable_MASK 0x0010
#define BCHP_SATA_CFG_PCI_COMMAND_Memory_Write_Invalidate_Enable_SHIFT 4

/* SATA_CFG :: PCI_COMMAND :: Special_Cycle_Recognition_Enable [03:03] */
#define BCHP_SATA_CFG_PCI_COMMAND_Special_Cycle_Recognition_Enable_MASK 0x0008
#define BCHP_SATA_CFG_PCI_COMMAND_Special_Cycle_Recognition_Enable_SHIFT 3

/* SATA_CFG :: PCI_COMMAND :: Bus_Master_Enable [02:02] */
#define BCHP_SATA_CFG_PCI_COMMAND_Bus_Master_Enable_MASK           0x0004
#define BCHP_SATA_CFG_PCI_COMMAND_Bus_Master_Enable_SHIFT          2

/* SATA_CFG :: PCI_COMMAND :: Memory_Space_Enable [01:01] */
#define BCHP_SATA_CFG_PCI_COMMAND_Memory_Space_Enable_MASK         0x0002
#define BCHP_SATA_CFG_PCI_COMMAND_Memory_Space_Enable_SHIFT        1

/* SATA_CFG :: PCI_COMMAND :: IO_Space_Enable [00:00] */
#define BCHP_SATA_CFG_PCI_COMMAND_IO_Space_Enable_MASK             0x0001
#define BCHP_SATA_CFG_PCI_COMMAND_IO_Space_Enable_SHIFT            0

/***************************************************************************
 *PCI_STATUS - PCI Status  Register
 ***************************************************************************/
/* SATA_CFG :: PCI_STATUS :: Detected_Parity_Error [15:15] */
#define BCHP_SATA_CFG_PCI_STATUS_Detected_Parity_Error_MASK        0x8000
#define BCHP_SATA_CFG_PCI_STATUS_Detected_Parity_Error_SHIFT       15

/* SATA_CFG :: PCI_STATUS :: Signaled_System_Error [14:14] */
#define BCHP_SATA_CFG_PCI_STATUS_Signaled_System_Error_MASK        0x4000
#define BCHP_SATA_CFG_PCI_STATUS_Signaled_System_Error_SHIFT       14

/* SATA_CFG :: PCI_STATUS :: Received_Master_Abort [13:13] */
#define BCHP_SATA_CFG_PCI_STATUS_Received_Master_Abort_MASK        0x2000
#define BCHP_SATA_CFG_PCI_STATUS_Received_Master_Abort_SHIFT       13

/* SATA_CFG :: PCI_STATUS :: Received_Target_Abort [12:12] */
#define BCHP_SATA_CFG_PCI_STATUS_Received_Target_Abort_MASK        0x1000
#define BCHP_SATA_CFG_PCI_STATUS_Received_Target_Abort_SHIFT       12

/* SATA_CFG :: PCI_STATUS :: Signaled_Target_Abort [11:11] */
#define BCHP_SATA_CFG_PCI_STATUS_Signaled_Target_Abort_MASK        0x0800
#define BCHP_SATA_CFG_PCI_STATUS_Signaled_Target_Abort_SHIFT       11

/* SATA_CFG :: PCI_STATUS :: DEVSEL_Timing [10:09] */
#define BCHP_SATA_CFG_PCI_STATUS_DEVSEL_Timing_MASK                0x0600
#define BCHP_SATA_CFG_PCI_STATUS_DEVSEL_Timing_SHIFT               9

/* SATA_CFG :: PCI_STATUS :: Data_Parity_Error [08:08] */
#define BCHP_SATA_CFG_PCI_STATUS_Data_Parity_Error_MASK            0x0100
#define BCHP_SATA_CFG_PCI_STATUS_Data_Parity_Error_SHIFT           8

/* SATA_CFG :: PCI_STATUS :: Fast_Back_to_Back_Capable [07:07] */
#define BCHP_SATA_CFG_PCI_STATUS_Fast_Back_to_Back_Capable_MASK    0x0080
#define BCHP_SATA_CFG_PCI_STATUS_Fast_Back_to_Back_Capable_SHIFT   7

/* SATA_CFG :: PCI_STATUS :: UDF_Supported [06:06] */
#define BCHP_SATA_CFG_PCI_STATUS_UDF_Supported_MASK                0x0040
#define BCHP_SATA_CFG_PCI_STATUS_UDF_Supported_SHIFT               6

/* SATA_CFG :: PCI_STATUS :: MHz66_Capable [05:05] */
#define BCHP_SATA_CFG_PCI_STATUS_MHz66_Capable_MASK                0x0020
#define BCHP_SATA_CFG_PCI_STATUS_MHz66_Capable_SHIFT               5

/* SATA_CFG :: PCI_STATUS :: Reserved [04:00] */
#define BCHP_SATA_CFG_PCI_STATUS_Reserved_MASK                     0x001f
#define BCHP_SATA_CFG_PCI_STATUS_Reserved_SHIFT                    0

/***************************************************************************
 *REV_ID_CLASS_CODE - Class Code Register
 ***************************************************************************/
/* SATA_CFG :: REV_ID_CLASS_CODE :: Class_Code [31:24] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Class_Code_MASK            0xff000000
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Class_Code_SHIFT           24

/* SATA_CFG :: REV_ID_CLASS_CODE :: Sub_Class_Code [23:16] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Sub_Class_Code_MASK        0x00ff0000
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Sub_Class_Code_SHIFT       16

/* SATA_CFG :: REV_ID_CLASS_CODE :: Master_IDE_Device [15:15] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Master_IDE_Device_MASK     0x00008000
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Master_IDE_Device_SHIFT    15

/* SATA_CFG :: REV_ID_CLASS_CODE :: reserved0 [14:12] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_reserved0_MASK             0x00007000
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_reserved0_SHIFT            12

/* SATA_CFG :: REV_ID_CLASS_CODE :: Programmable_Mode_for_Secondary [11:11] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Programmable_Mode_for_Secondary_MASK 0x00000800
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Programmable_Mode_for_Secondary_SHIFT 11

/* SATA_CFG :: REV_ID_CLASS_CODE :: Operating_Mode_for_Secondary [10:10] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Operating_Mode_for_Secondary_MASK 0x00000400
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Operating_Mode_for_Secondary_SHIFT 10

/* SATA_CFG :: REV_ID_CLASS_CODE :: Programmable_Mode_for_Primary [09:09] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Programmable_Mode_for_Primary_MASK 0x00000200
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Programmable_Mode_for_Primary_SHIFT 9

/* SATA_CFG :: REV_ID_CLASS_CODE :: Operating_Mode_for_Primary [08:08] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Operating_Mode_for_Primary_MASK 0x00000100
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_Operating_Mode_for_Primary_SHIFT 8

/* SATA_CFG :: REV_ID_CLASS_CODE :: ID [07:00] */
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_ID_MASK                    0x000000ff
#define BCHP_SATA_CFG_REV_ID_CLASS_CODE_ID_SHIFT                   0

/***************************************************************************
 *CACHELINE_SIZE - Cacheline Size Register
 ***************************************************************************/
/* SATA_CFG :: CACHELINE_SIZE :: Size [07:00] */
#define BCHP_SATA_CFG_CACHELINE_SIZE_Size_MASK                     0xff
#define BCHP_SATA_CFG_CACHELINE_SIZE_Size_SHIFT                    0

/***************************************************************************
 *MASTER_LATECY_TIMER - Master Latency Timer Register
 ***************************************************************************/
/* SATA_CFG :: MASTER_LATECY_TIMER :: Master_Latency_Timer [07:00] */
#define BCHP_SATA_CFG_MASTER_LATECY_TIMER_Master_Latency_Timer_MASK 0xff
#define BCHP_SATA_CFG_MASTER_LATECY_TIMER_Master_Latency_Timer_SHIFT 0

/***************************************************************************
 *HEADER_TYPE - Header Type Register
 ***************************************************************************/
/* SATA_CFG :: HEADER_TYPE :: Header_Type [07:00] */
#define BCHP_SATA_CFG_HEADER_TYPE_Header_Type_MASK                 0xff
#define BCHP_SATA_CFG_HEADER_TYPE_Header_Type_SHIFT                0

/***************************************************************************
 *BIST - Built-in Self Test (BIST) Register
 ***************************************************************************/
/* SATA_CFG :: BIST :: BIST [07:00] */
#define BCHP_SATA_CFG_BIST_BIST_MASK                               0xff
#define BCHP_SATA_CFG_BIST_BIST_SHIFT                              0

/***************************************************************************
 *PCS0 - Base Address Register 0 (Primary CS0)
 ***************************************************************************/
/* SATA_CFG :: PCS0 :: reserved0 [31:16] */
#define BCHP_SATA_CFG_PCS0_reserved0_MASK                          0xffff0000
#define BCHP_SATA_CFG_PCS0_reserved0_SHIFT                         16

/* SATA_CFG :: PCS0 :: Base_Address [15:03] */
#define BCHP_SATA_CFG_PCS0_Base_Address_MASK                       0x0000fff8
#define BCHP_SATA_CFG_PCS0_Base_Address_SHIFT                      3

/* SATA_CFG :: PCS0 :: reserved1 [02:01] */
#define BCHP_SATA_CFG_PCS0_reserved1_MASK                          0x00000006
#define BCHP_SATA_CFG_PCS0_reserved1_SHIFT                         1

/* SATA_CFG :: PCS0 :: Resource_Type_Indicator [00:00] */
#define BCHP_SATA_CFG_PCS0_Resource_Type_Indicator_MASK            0x00000001
#define BCHP_SATA_CFG_PCS0_Resource_Type_Indicator_SHIFT           0

/***************************************************************************
 *PCS1 - Base Address Register 1 (Primary CS1)
 ***************************************************************************/
/* SATA_CFG :: PCS1 :: reserved0 [31:16] */
#define BCHP_SATA_CFG_PCS1_reserved0_MASK                          0xffff0000
#define BCHP_SATA_CFG_PCS1_reserved0_SHIFT                         16

/* SATA_CFG :: PCS1 :: Base_Address [15:03] */
#define BCHP_SATA_CFG_PCS1_Base_Address_MASK                       0x0000fff8
#define BCHP_SATA_CFG_PCS1_Base_Address_SHIFT                      3

/* SATA_CFG :: PCS1 :: reserved1 [02:01] */
#define BCHP_SATA_CFG_PCS1_reserved1_MASK                          0x00000006
#define BCHP_SATA_CFG_PCS1_reserved1_SHIFT                         1

/* SATA_CFG :: PCS1 :: Resource_Type_Indicator [00:00] */
#define BCHP_SATA_CFG_PCS1_Resource_Type_Indicator_MASK            0x00000001
#define BCHP_SATA_CFG_PCS1_Resource_Type_Indicator_SHIFT           0

/***************************************************************************
 *SCS0 - Base Address Register 2 (Secondary CS0)
 ***************************************************************************/
/* SATA_CFG :: SCS0 :: reserved0 [31:16] */
#define BCHP_SATA_CFG_SCS0_reserved0_MASK                          0xffff0000
#define BCHP_SATA_CFG_SCS0_reserved0_SHIFT                         16

/* SATA_CFG :: SCS0 :: Base_Address [15:02] */
#define BCHP_SATA_CFG_SCS0_Base_Address_MASK                       0x0000fffc
#define BCHP_SATA_CFG_SCS0_Base_Address_SHIFT                      2

/* SATA_CFG :: SCS0 :: reserved1 [01:01] */
#define BCHP_SATA_CFG_SCS0_reserved1_MASK                          0x00000002
#define BCHP_SATA_CFG_SCS0_reserved1_SHIFT                         1

/* SATA_CFG :: SCS0 :: Resource_Type_Indicator [00:00] */
#define BCHP_SATA_CFG_SCS0_Resource_Type_Indicator_MASK            0x00000001
#define BCHP_SATA_CFG_SCS0_Resource_Type_Indicator_SHIFT           0

/***************************************************************************
 *SCS1 - Base Address Register 3 (Secondary CS1)
 ***************************************************************************/
/* SATA_CFG :: SCS1 :: reserved0 [31:16] */
#define BCHP_SATA_CFG_SCS1_reserved0_MASK                          0xffff0000
#define BCHP_SATA_CFG_SCS1_reserved0_SHIFT                         16

/* SATA_CFG :: SCS1 :: Base_Address [15:02] */
#define BCHP_SATA_CFG_SCS1_Base_Address_MASK                       0x0000fffc
#define BCHP_SATA_CFG_SCS1_Base_Address_SHIFT                      2

/* SATA_CFG :: SCS1 :: reserved1 [01:01] */
#define BCHP_SATA_CFG_SCS1_reserved1_MASK                          0x00000002
#define BCHP_SATA_CFG_SCS1_reserved1_SHIFT                         1

/* SATA_CFG :: SCS1 :: Resource_Type_Indicator [00:00] */
#define BCHP_SATA_CFG_SCS1_Resource_Type_Indicator_MASK            0x00000001
#define BCHP_SATA_CFG_SCS1_Resource_Type_Indicator_SHIFT           0

/***************************************************************************
 *BUS_MASTER_BASE_ADDR - Bus Master Interface Base Address Register
 ***************************************************************************/
/* SATA_CFG :: BUS_MASTER_BASE_ADDR :: reserved0 [31:16] */
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_reserved0_MASK          0xffff0000
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_reserved0_SHIFT         16

/* SATA_CFG :: BUS_MASTER_BASE_ADDR :: Base_Address [15:04] */
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_Base_Address_MASK       0x0000fff0
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_Base_Address_SHIFT      4

/* SATA_CFG :: BUS_MASTER_BASE_ADDR :: reserved1 [03:01] */
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_reserved1_MASK          0x0000000e
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_reserved1_SHIFT         1

/* SATA_CFG :: BUS_MASTER_BASE_ADDR :: Resource_Type_Indicator [00:00] */
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_Resource_Type_Indicator_MASK 0x00000001
#define BCHP_SATA_CFG_BUS_MASTER_BASE_ADDR_Resource_Type_Indicator_SHIFT 0

/***************************************************************************
 *MMIO_BASE_ADDR - MMIO Base Address Register
 ***************************************************************************/
/* SATA_CFG :: MMIO_BASE_ADDR :: Base_Address [31:13] */
#define BCHP_SATA_CFG_MMIO_BASE_ADDR_Base_Address_MASK             0xffffe000
#define BCHP_SATA_CFG_MMIO_BASE_ADDR_Base_Address_SHIFT            13

/* SATA_CFG :: MMIO_BASE_ADDR :: reserved0 [12:01] */
#define BCHP_SATA_CFG_MMIO_BASE_ADDR_reserved0_MASK                0x00001ffe
#define BCHP_SATA_CFG_MMIO_BASE_ADDR_reserved0_SHIFT               1

/* SATA_CFG :: MMIO_BASE_ADDR :: Resource_Type_Indicator [00:00] */
#define BCHP_SATA_CFG_MMIO_BASE_ADDR_Resource_Type_Indicator_MASK  0x00000001
#define BCHP_SATA_CFG_MMIO_BASE_ADDR_Resource_Type_Indicator_SHIFT 0

/***************************************************************************
 *SUB_VENDOR_ID - Sub-System Vendor ID Register
 ***************************************************************************/
/* SATA_CFG :: SUB_VENDOR_ID :: ID [15:00] */
#define BCHP_SATA_CFG_SUB_VENDOR_ID_ID_MASK                        0xffff
#define BCHP_SATA_CFG_SUB_VENDOR_ID_ID_SHIFT                       0

/***************************************************************************
 *SUB_DEVICE_ID - Sub-System Device ID Register
 ***************************************************************************/
/* SATA_CFG :: SUB_DEVICE_ID :: ID [15:00] */
#define BCHP_SATA_CFG_SUB_DEVICE_ID_ID_MASK                        0xffff
#define BCHP_SATA_CFG_SUB_DEVICE_ID_ID_SHIFT                       0

/***************************************************************************
 *INTERRUPT_LINE - Interrupt Line Register
 ***************************************************************************/
/* SATA_CFG :: INTERRUPT_LINE :: Value [07:00] */
#define BCHP_SATA_CFG_INTERRUPT_LINE_Value_MASK                    0xff
#define BCHP_SATA_CFG_INTERRUPT_LINE_Value_SHIFT                   0

/***************************************************************************
 *INTERRUPT_PIN - Interrupt Pin Register
 ***************************************************************************/
/* SATA_CFG :: INTERRUPT_PIN :: Value [07:00] */
#define BCHP_SATA_CFG_INTERRUPT_PIN_Value_MASK                     0xff
#define BCHP_SATA_CFG_INTERRUPT_PIN_Value_SHIFT                    0

/***************************************************************************
 *MINIIMUM_GRANT - Minimum Grant Register
 ***************************************************************************/
/* SATA_CFG :: MINIIMUM_GRANT :: Value [07:00] */
#define BCHP_SATA_CFG_MINIIMUM_GRANT_Value_MASK                    0xff
#define BCHP_SATA_CFG_MINIIMUM_GRANT_Value_SHIFT                   0

/***************************************************************************
 *MAXIMUM_LATENCY - Maximum Latency Register
 ***************************************************************************/
/* SATA_CFG :: MAXIMUM_LATENCY :: Value [07:00] */
#define BCHP_SATA_CFG_MAXIMUM_LATENCY_Value_MASK                   0xff
#define BCHP_SATA_CFG_MAXIMUM_LATENCY_Value_SHIFT                  0

/***************************************************************************
 *MISC_CONTROL - SerialATA Misc Control Register
 ***************************************************************************/
/* SATA_CFG :: MISC_CONTROL :: reserved0 [07:05] */
#define BCHP_SATA_CFG_MISC_CONTROL_reserved0_MASK                  0xe0
#define BCHP_SATA_CFG_MISC_CONTROL_reserved0_SHIFT                 5

/* SATA_CFG :: MISC_CONTROL :: Mult_Function_Disable [04:04] */
#define BCHP_SATA_CFG_MISC_CONTROL_Mult_Function_Disable_MASK      0x10
#define BCHP_SATA_CFG_MISC_CONTROL_Mult_Function_Disable_SHIFT     4

/* SATA_CFG :: MISC_CONTROL :: Solaris [03:03] */
#define BCHP_SATA_CFG_MISC_CONTROL_Solaris_MASK                    0x08
#define BCHP_SATA_CFG_MISC_CONTROL_Solaris_SHIFT                   3

/* SATA_CFG :: MISC_CONTROL :: Reg_Write [02:02] */
#define BCHP_SATA_CFG_MISC_CONTROL_Reg_Write_MASK                  0x04
#define BCHP_SATA_CFG_MISC_CONTROL_Reg_Write_SHIFT                 2

/* SATA_CFG :: MISC_CONTROL :: MMIO [01:01] */
#define BCHP_SATA_CFG_MISC_CONTROL_MMIO_MASK                       0x02
#define BCHP_SATA_CFG_MISC_CONTROL_MMIO_SHIFT                      1

/* SATA_CFG :: MISC_CONTROL :: PCI_Config [00:00] */
#define BCHP_SATA_CFG_MISC_CONTROL_PCI_Config_MASK                 0x01
#define BCHP_SATA_CFG_MISC_CONTROL_PCI_Config_SHIFT                0

/***************************************************************************
 *PCI_DEBUG_CONTROL - SerialATA PCI Debug Control Register
 ***************************************************************************/
/* SATA_CFG :: PCI_DEBUG_CONTROL :: reserved0 [07:03] */
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_reserved0_MASK             0xf8
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_reserved0_SHIFT            3

/* SATA_CFG :: PCI_DEBUG_CONTROL :: DMA_Bar [02:02] */
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_DMA_Bar_MASK               0x04
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_DMA_Bar_SHIFT              2

/* SATA_CFG :: PCI_DEBUG_CONTROL :: ARB_Policy [01:01] */
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_ARB_Policy_MASK            0x02
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_ARB_Policy_SHIFT           1

/* SATA_CFG :: PCI_DEBUG_CONTROL :: Round_Robin [00:00] */
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_Round_Robin_MASK           0x01
#define BCHP_SATA_CFG_PCI_DEBUG_CONTROL_Round_Robin_SHIFT          0

/***************************************************************************
 *GLOBAL_INTERRUPT_STATUS - SerialATA Global Interrupt Status Register
 ***************************************************************************/
/* SATA_CFG :: GLOBAL_INTERRUPT_STATUS :: reserved0 [31:02] */
#define BCHP_SATA_CFG_GLOBAL_INTERRUPT_STATUS_reserved0_MASK       0xfffffffc
#define BCHP_SATA_CFG_GLOBAL_INTERRUPT_STATUS_reserved0_SHIFT      2

/* SATA_CFG :: GLOBAL_INTERRUPT_STATUS :: Port_1 [01:01] */
#define BCHP_SATA_CFG_GLOBAL_INTERRUPT_STATUS_Port_1_MASK          0x00000002
#define BCHP_SATA_CFG_GLOBAL_INTERRUPT_STATUS_Port_1_SHIFT         1

/* SATA_CFG :: GLOBAL_INTERRUPT_STATUS :: Port_0 [00:00] */
#define BCHP_SATA_CFG_GLOBAL_INTERRUPT_STATUS_Port_0_MASK          0x00000001
#define BCHP_SATA_CFG_GLOBAL_INTERRUPT_STATUS_Port_0_SHIFT         0

#endif /* #ifndef BCHP_SATA_CFG_H__ */

/* End of File */
