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
 *            Module: VTTCntrl
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: VttCntrl_Can_Cfg.c
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



#define VTTCAN_SOURCE

/**********************************************************************************************************************
*  INCLUDES
*********************************************************************************************************************/
#include "VttCntrl_Can.h"

/**********************************************************************************************************************
*  PRAGMAS
*********************************************************************************************************************/
/* The following pragmas ensure that all variables of this module are places in memory that is not cleared during a
 * simulated ECU reset/poweron */
#pragma bss_seg()
#pragma data_seg()

/**********************************************************************************************************************
*  VERSION CHECK
*********************************************************************************************************************/

/* vendor specific version information is BCD coded */
#if (  (VTTCAN_SW_MAJOR_VERSION != (0x09)) || (VTTCAN_SW_MINOR_VERSION != (0x00)) || (VTTCAN_SW_PATCH_VERSION != (0x00)) )
# error "Vendor specific version numbers of VttCntrl_Can_Cfg.c and VttCntrl_Can.h are inconsistent"
#endif

#if (  (VTTCAN_CFG_SW_MAJOR_VERSION != (0x14)) || (VTTCAN_CFG_SW_MINOR_VERSION != (0x00)) || (VTTCAN_CFG_SW_PATCH_VERSION != (0x01)) )
# error "Vendor specific version numbers of VttCntrl_Can_Cfg.c and VttCntrl_Can_Cfg.h are inconsistent"
#endif

/**********************************************************************************************************************
*  LOCAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/



/**********************************************************************************************************************
*  END OF FILE: VttCntrl_Can_Cfg.c
*********************************************************************************************************************/

