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
 *              File: Mcu_Cfg.h
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

#if !defined MCU_CFG_H
#define MCU_CFG_H

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/
#define MCU_CFG_MAJOR_VERSION    (4u) 
#define MCU_CFG_MINOR_VERSION    (3u) 
#define MCU_CFG_PATCH_VERSION    (0u) 


/**********************************************************************************************************************
 *  Start - Configuration class PreCompile (public part of configuration)
 **********************************************************************************************************************/
/* Compiler switches for API enabling */
/* static config parameters */
#define MCU_VERSION_INFO_API          (STD_OFF) 
#define MCU_GET_RAM_STATE_API         (STD_OFF)
#define MCU_PERFORM_RESET_API         (STD_OFF)
#define MCU_INIT_CLOCK                (STD_ON)
#define MCU_NO_PLL                    (STD_OFF)

/* generation of MCU_DEV_ERROR_DETECT  and MCU_DEV_ERROR_REPORT */
#ifndef MCU_DEV_ERROR_DETECT
#define MCU_DEV_ERROR_DETECT STD_ON
#endif
#ifndef MCU_DEV_ERROR_REPORT
#define MCU_DEV_ERROR_REPORT STD_ON
#endif


/**********************************************************************************************************************
 *  Settings for Development Mode
 *********************************************************************************************************************/
#if (STD_ON == MCU_DEV_ERROR_REPORT)
  #include "Det.h"
  #define Mcu_Errorhook(Mcu_FunctionId, Mcu_ErrorCode) \
    ( (void) Det_ReportError ((MCU_MODULE_ID), (MCU_INSTANCE_ID), (Mcu_FunctionId), (Mcu_ErrorCode)) )
#else
  #define Mcu_Errorhook(Mcu_FunctionId, Mcu_ErrorCode)
#endif /* (STD_ON == MCU_DEV_ERROR_REPORT) */

#define Mcu_Init(x) Mcu_Init_Vtt(&McuModuleConfiguration)


/**********************************************************************************************************************
 *  TYPE DEFINITIONS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 * INCLUDES AFTER TYPE DEFINITIONS
 **********************************************************************************************************************/


/**********************************************************************************************************************
 *  Start - Configuration class PostBuild (public part of configuration)
 **********************************************************************************************************************/
/* Symbolic Name Values  of the symbolic names of Mcu modes */
#define McuConf_McuModeSettingConf_McuModeSettingConf (0u) 
 

/* Highest number of all configured McuModes */
#define MCU_HIGHEST_MODE_NUMBER (0u)

/* Symbolic Name Values of RAM sections */
 

/* Symbolic Name Values of Mcu clocks */
#define McuConf_McuClockSettingConfig_McuClockSettingConfig (0u) 
 

/* Symbolic Name Values  of the reset reasons */
 

#if !defined MCU_PBCFG_SOURCE
  /* Extern declarations of configuration instances */
  extern CONST(Mcu_ConfigType, MCU_APPL_CONST) McuModuleConfiguration; 
  
#endif /* !defined MCU_PBCFG_SOURCE */


#endif /* !defined MCU_CFG_H */


/*********************************************************************************************************************
 *  END OF FILE: Mcu_Cfg.h
 *********************************************************************************************************************/
 
