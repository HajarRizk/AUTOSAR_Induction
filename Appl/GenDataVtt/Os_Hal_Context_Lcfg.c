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
 *              File: Os_Hal_Context_Lcfg.c
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

/* PRQA S 0777, 0779, 0828 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2, MD_MSR_Dir1.1 */

#define OS_HAL_CONTEXT_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Context_Lcfg.h"
#include "Os_Hal_Context.h"

/* Os kernel module dependencies */
#include "OsInt.h"
#include "Os_Core.h"
#include "Os_Hook_Lcfg.h"
#include "Os_Hook.h"
#include "Os_Ioc_Lcfg.h"
#include "Os_Isr_Lcfg.h"
#include "Os_Lcfg.h"
#include "Os_Stack_Lcfg.h"
#include "Os_Task_Lcfg.h"
#include "Os_Task.h"

/* Os hal dependencies */
#include "Os_Hal_Core.h"


/**********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL dynamic hook context data: Os_CoreInitHook_OsCore0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0_Dyn;

/*! HAL dynamic hook context data: ErrorHook_OsCore0 */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_ErrorHook_OsCore0_Dyn;

/*! HAL dynamic task context data: InitTask */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_InitTask_Dyn;

/*! HAL dynamic task context data: PeriodicTask */
VAR(Os_Hal_ContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_PeriodicTask_Dyn;

/*! HAL exception context data: OsCore0 */
VAR(Os_ExceptionContextType, OS_VAR_NOINIT) OsCfg_Hal_Context_OsCore0_ExceptionContext;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! HAL hook context configuration data: Os_CoreInitHook_OsCore0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_Os_CoreInitHook_OsCore0 =
{
  /* Type =              */ Os_Hal_ContextConfigType_Hook,
  /* CANoeTask           */
  {
    /* Name =              */ "Os_CoreInitHook_OsCore0",
    /* Id =                */ CANoeTaskId_Os_CoreInitHook_OsCore0,
    /* Main =              */ Os_Hal_EntryExecuteThreadWithParam
  },
  /* CANoeIsrHost        */
  {
    /* Name =              */ "Os_CoreInitHook_OsCore0_IsrHost",
    /* Id =                */ CANoeTaskId_Os_CoreInitHook_OsCore0_IsrHost,
    /* Main =              */ Os_Hal_EntryIsrRun
  },  
  /* Entry =             */ (Os_Hal_ContextEntryCBType)  Os_HookWrapperOs_CoreInitHook,                                /* PRQA S 0313 */ /* MD_Os_Hal_Rule11.1_0313 */
  /* ReturnAddress =     */ (Os_Hal_ContextReturnCBType) Os_TrapHookReturn,
  /* IntLockLevel =      */ 0,
  /* Stack =             */ &OsCfg_Stack_OsCore0_Init
}
;

/*! HAL hook context configuration data: ErrorHook_OsCore0 */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_ErrorHook_OsCore0 =
{
  /* Type =              */ Os_Hal_ContextConfigType_Hook,
  /* CANoeTask           */
  {
    /* Name =              */ "ErrorHook_OsCore0",
    /* Id =                */ CANoeTaskId_ErrorHook_OsCore0,
    /* Main =              */ Os_Hal_EntryExecuteThreadWithParam
  },
  /* CANoeIsrHost        */
  {
    /* Name =              */ "ErrorHook_OsCore0_IsrHost",
    /* Id =                */ CANoeTaskId_ErrorHook_OsCore0_IsrHost,
    /* Main =              */ Os_Hal_EntryIsrRun
  },  
  /* Entry =             */ (Os_Hal_ContextEntryCBType)  Os_HookWrapperStatusHook,                                /* PRQA S 0313 */ /* MD_Os_Hal_Rule11.1_0313 */
  /* ReturnAddress =     */ (Os_Hal_ContextReturnCBType) Os_TrapHookReturn,
  /* IntLockLevel =      */ 0,
  /* Stack =             */ &OsCfg_Stack_OsCore0_Error
}
;

/*! HAL task context configuration data: InitTask */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_InitTask =
{
  /* Type =              */ Os_Hal_ContextConfigType_Task,
  /* CANoeTask           */
  {
    /* Name =              */ "InitTask",
    /* Id =                */ CANoeTaskId_InitTask,
    /* Main =              */ Os_Hal_EntryExecuteThread
  },
  /* CANoeIsrHost        */
  {
    /* Name =              */ "InitTask_IsrHost",
    /* Id =                */ CANoeTaskId_InitTask_IsrHost,
    /* Main =              */ &Os_Hal_EntryIsrRun
  },  
  /* Entry =             */ (Os_Hal_ContextEntryCBType)  Os_Task_Os_IdleTask,                              /* PRQA S 0313 */ /* MD_Os_Hal_Rule11.1_0313 */
  /* ReturnAddress =     */ (Os_Hal_ContextReturnCBType) Os_TaskMissingTerminateTask,
  /* IntLockLevel =      */ 0,
  /* Stack =             */ &OsCfg_Stack_OsCore0_Task_Prio4294967295
}
;

/*! HAL task context configuration data: PeriodicTask */
CONST(Os_Hal_ContextConfigType, OS_CONST) OsCfg_Hal_Context_PeriodicTask =
{
  /* Type =              */ Os_Hal_ContextConfigType_Task,
  /* CANoeTask           */
  {
    /* Name =              */ "PeriodicTask",
    /* Id =                */ CANoeTaskId_PeriodicTask,
    /* Main =              */ Os_Hal_EntryExecuteThread
  },
  /* CANoeIsrHost        */
  {
    /* Name =              */ "PeriodicTask_IsrHost",
    /* Id =                */ CANoeTaskId_PeriodicTask_IsrHost,
    /* Main =              */ &Os_Hal_EntryIsrRun
  },  
  /* Entry =             */ (Os_Hal_ContextEntryCBType)  Os_Task_PeriodicTask,                              /* PRQA S 0313 */ /* MD_Os_Hal_Rule11.1_0313 */
  /* ReturnAddress =     */ (Os_Hal_ContextReturnCBType) Os_TaskMissingTerminateTask,
  /* IntLockLevel =      */ 0,
  /* Stack =             */ &OsCfg_Stack_OsCore0_Task_Prio0
}
;

/*! HAL kernel stack configuration data: OsCore0_Kernel */
CONST(Os_Hal_ContextStackConfigType, OS_CONST) OsCfg_Hal_Stack_OsCore0_Kernel =
{
  /* .Dummy = */ (uint32)0,  /* OsCore0_Kernel */
}
;

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for HAL exception context. */
CONSTP2VAR(Os_ExceptionContextType, AUTOMATIC, OS_CONST)
  OsCfg_Hal_Context_ExceptionContextRef[OS_CFG_COREPHYSICALID_COUNT + 1u] =
{
  &OsCfg_Hal_Context_OsCore0_ExceptionContext,
  NULL_PTR
};

#define OS_STOP_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
/**********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  LOCAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  END OF FILE: Os_Hal_Context_Lcfg.c
 *********************************************************************************************************************/
