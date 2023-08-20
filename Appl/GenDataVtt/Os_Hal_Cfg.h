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
 *            Module: VTTOs
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Hal_Cfg.h
 *   Generation Time: 2023-08-17 14:16:38
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


                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */

#ifndef OS_HAL_CFG_H
# define OS_HAL_CFG_H

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/*! HAL configuration major version identification. */
# define OS_CFG_HAL_MAJOR_VERSION                (2u)

/*! HAL configuration minor version identification. */
# define OS_CFG_HAL_MINOR_VERSION                (17u)

/* ISR core and level definitions */

/* Hardware counter timing macros */





#define OS_CANOE_IRQ_COUNT 0


#define OS_CFG_CAT1_ISR_COUNT         (0)
#define OS_CFG_MAX_INT_LEVEL          (0)

typedef enum
{
  /* OsCore0 */
  CANoeTaskId_InitTask = 1,
  CANoeTaskId_InitTask_IsrHost = 2,

  CANoeTaskId_PeriodicTask = 3,
  CANoeTaskId_PeriodicTask_IsrHost = 4,

  CANoeTaskId_Os_CoreInitHook_OsCore0 = 5,
  CANoeTaskId_Os_CoreInitHook_OsCore0_IsrHost = 6,

  CANoeTaskId_ErrorHook_OsCore0 = 7,
  CANoeTaskId_ErrorHook_OsCore0_IsrHost = 8,

  OS_CANOE_OsCore0_TASK_COUNT = 9     /* PRQA S 0647 */ /* MD_Os_Hal_Dir1.1_0647 */
  
} CANoeTaskIdType;                                                                                                      

typedef enum
{
  CANoeHrtId_STM0_Ch1 = 1,
  CANoeHrtId_STM0_Ch0 = 2,
  OS_CANOE_HRT_COUNT = 3
} CANoeHrtIdType;

typedef enum
{
  CANoePitId_GPT_Ch1  = 1,
  CANoePitId_GPT_Ch0  = 2,
  OS_CANOE_PIT_COUNT = 3
} CANoePitIdType;



/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


#endif /* OS_HAL_CFG_H */

/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Cfg.h
 *********************************************************************************************************************/
