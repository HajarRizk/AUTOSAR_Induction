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
 *              File: Os_ScheduleTable_Lcfg.c
 *   Generation Time: 2023-08-17 19:04:25
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

#define OS_SCHEDULETABLE_LCFG_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_ScheduleTable_Cfg.h"
#include "Os_ScheduleTable_Lcfg.h"
#include "Os_ScheduleTable.h"

/* Os kernel module dependencies */
#include "Os_Application_Lcfg.h"
#include "Os_Cfg.h"
#include "Os_Common.h"
#include "Os_Task_Lcfg.h"

/* Os hal dependencies */
#include "Os_Hal_Cfg.h"


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

#define OS_START_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Dynamic schedule table data: MainScheduleTable_PeriodicTask */
OS_LOCAL VAR(Os_SchTType, OS_VAR_NOINIT) OsCfg_SchT_MainScheduleTable_PeriodicTask_Dyn;

#define OS_STOP_SEC_CORE0_VAR_NOINIT_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* Expiry points configuration data: MainScheduleTable_PeriodicTask */
OS_LOCAL CONST(Os_SchTExPoConfigType, OS_CONST) OsCfg_ExPo_MainScheduleTable_PeriodicTask_1;
OS_LOCAL CONST(Os_SchTExPoConfigType, OS_CONST) OsCfg_ExPo_MainScheduleTable_PeriodicTask_DummyLast;

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 *  GLOBAL DATA
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT DATA
 *********************************************************************************************************************/

#define OS_START_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* Schedule table: MainScheduleTable_PeriodicTask */

/*! Expiry point task activations: MainScheduleTable_PeriodicTask_1 */
OS_LOCAL CONST(Os_SchTExPoActionTaskConfigType, OS_CONST) OsCfg_ExPo_MainScheduleTable_PeriodicTask_1_Tasks[OS_CFG_NUM_EXPO_MAINSCHEDULETABLE_PERIODICTASK_1_TASKS] =
{
  /* Activate task: PeriodicTask */
  {
    /* .Task = */ &OsCfg_Task_PeriodicTask
  }
};

/*! Expiry point configuration data: MainScheduleTable_PeriodicTask_1 */
OS_LOCAL CONST(Os_SchTExPoConfigType, OS_CONST) OsCfg_ExPo_MainScheduleTable_PeriodicTask_1 =
{
  /* .Next            = */ OS_SCHT_CASTCONFIG_SCHTEXPO_2_SCHTEXPO(OsCfg_ExPo_MainScheduleTable_PeriodicTask_DummyLast),
  /* .Kind            = */ OS_SCHT_EXPO_KIND_EXECUTE,
  /* .Tasks           = */ OsCfg_ExPo_MainScheduleTable_PeriodicTask_1_Tasks,
  /* .TaskCount       = */ OS_CFG_NUM_EXPO_MAINSCHEDULETABLE_PERIODICTASK_1_TASKS,
  /* .Events          = */ NULL_PTR,
  /* .EventCount      = */ OS_CFG_NUM_EXPO_MAINSCHEDULETABLE_PERIODICTASK_1_EVENTS,
  /* .RelOffsetToNext = */ ((Os_TickType)10)
};

/*! Expiry point configuration data: MainScheduleTable_PeriodicTask_DummyLast */
OS_LOCAL CONST(Os_SchTExPoConfigType, OS_CONST) OsCfg_ExPo_MainScheduleTable_PeriodicTask_DummyLast =
{
  /* .Next            = */ NULL_PTR,
  /* .Kind            = */ OS_SCHT_EXPO_KIND_EXECUTE_CYCLIC,
  /* .Tasks           = */ NULL_PTR,
  /* .TaskCount       = */ OS_CFG_NUM_EXPO_MAINSCHEDULETABLE_PERIODICTASK_DUMMYLAST_TASKS,
  /* .Events          = */ NULL_PTR,
  /* .EventCount      = */ OS_CFG_NUM_EXPO_MAINSCHEDULETABLE_PERIODICTASK_DUMMYLAST_EVENTS,
  /* .RelOffsetToNext = */ ((Os_TickType)0)
};

/*! Schedule table configuration data: MainScheduleTable_PeriodicTask */
CONST(Os_SchTConfigType, OS_CONST) OsCfg_SchT_MainScheduleTable_PeriodicTask =
{
  /* .Job                   = */
  {
    /* .Dyn      = */ OS_SCHT_CASTDYN_SCHT_2_JOB(OsCfg_SchT_MainScheduleTable_PeriodicTask_Dyn),
    /* .Counter  = */ OS_COUNTER_CASTCONFIG_TIMERSW_2_COUNTER(OsCfg_Counter_SystemTimer),
    /* .Callback = */ &Os_SchTWorkScheduleTable
  },
  /* .Autostart             = */
  {
    /* .StartTime     = */ 0uL,
    /* .AutostartMode = */ OS_SCHT_AUTOSTART_NON,
    /* .AppModeType   = */ OS_APPMODE_NONE
  },
  /* .SyncKind              = */ OS_SCHT_SYNC_KIND_NON,
  /* .AccessingApplications = */ OS_APPID2MASK(SystemApplication_OsCore0),
  /* .OwnerApplication      = */ &OsCfg_App_SystemApplication_OsCore0,
  /* .ExPoHead              = */ OS_SCHT_CASTCONFIG_SCHTEXPO_2_SCHTEXPO(OsCfg_ExPo_MainScheduleTable_PeriodicTask_1),
  /* .InitialNext           = */ OS_SCHT_CASTCONFIG_SCHT_2_SCHT(OsCfg_SchT_MainScheduleTable_PeriodicTask)
};

#define OS_STOP_SEC_CORE0_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


#define OS_START_SEC_CONST_UNSPECIFIED
#include "Os_MemMap_OsSections.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/*! Object reference table for schedule tables. */
CONSTP2CONST(Os_SchTConfigType, OS_CONST, OS_CONST) OsCfg_SchTRefs[OS_SCHTID_COUNT + 1] =                  /* PRQA S 4521 */ /* MD_Os_Rule10.1_4521 */
{
  OS_SCHT_CASTCONFIG_SCHT_2_SCHT(OsCfg_SchT_MainScheduleTable_PeriodicTask),
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
 *  END OF FILE: Os_ScheduleTable_Lcfg.c
 *********************************************************************************************************************/
