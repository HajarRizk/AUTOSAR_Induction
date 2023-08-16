/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: VTTMcu
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Mcu_PBcfg.c
 *   Generation Time: 2023-08-16 18:17:03
 *           Project: AUTOSAR_Induction - Version 1.0
 *          Delivery: CBD1800285_D02
 *      Tool Version: DaVinci Configurator (beta) 5.19.46 SP2
 *
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 ! BETA VERSION                                                                                                       !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 ! This version of DaVinci Configurator Pro and/or the related Basic Software Package is BETA software.               !
 ! BETA Software is basically operable, but not sufficiently tested, verified and/or qualified for use in series      !
 ! production and/or in vehicles operating on public or non-public roads.                                             !
 ! In particular, without limitation, BETA Software may cause unpredictable ECU behavior, may not provide all         !
 ! functions necessary for use in series production and/or may not comply with quality requirements which are         !
 ! necessary according to the state of the art. BETA Software must not be used in series production.                  !
 !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
**********************************************************************************************************************/

#define MCU_PBCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
#include "Mcu.h"


/**********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/
#define MCU_CFG_C_MAJOR_VERSION    (4u) 
#define MCU_CFG_C_MINOR_VERSION    (3u) 
#define MCU_CFG_C_PATCH_VERSION    (0u) 

#if (  (MCU_SW_MAJOR_VERSION != (2u)) \
    || (MCU_SW_MINOR_VERSION != (5u)) )
    #error "Version numbers of Mcu_PBcfg.c and Mcu.h are inconsistent!"
#endif

#if (  (MCU_CFG_MAJOR_VERSION != MCU_CFG_C_MAJOR_VERSION) \
    || (MCU_CFG_MINOR_VERSION != MCU_CFG_C_MINOR_VERSION) )
    #error "Version numbers of Mcu_PBcfg.c and Mcu_Cfg.h are inconsistent!"
#endif


/**********************************************************************************************************************
 *  MODE MAPPING TABLE
 **********************************************************************************************************************/
CONST(VttMcu_ModeType, MCU_APPL_CONST) Mcu_ModeMappingTable[] =
{
  VTTMCU_MODE_NORMAL
};


/**********************************************************************************************************************
 *  GLOBAL CONFIG DATA
 **********************************************************************************************************************/
CONST(Mcu_ConfigType, MCU_APPL_CONST) McuModuleConfiguration =  
{ 
  Mcu_ModeMappingTable, /* Pointer to the MCU mode mapping table */ 
  1, /* Number of Clock Configuration */ 
  0  /* Number of RamSection          */ 
}; 
 

/*********************************************************************************************************************
 *  END OF FILE: Mcu_PBcfg.c
 *********************************************************************************************************************/
