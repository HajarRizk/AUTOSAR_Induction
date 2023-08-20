/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte.c
 *           Config:  AUTOSAR_Induction.dpa
 *      ECU-Project:  AUTOSAR_Induction
 *
 *        Generator:  MICROSAR RTE Generator Version 4.20.0
 *                    RTE Core Version 1.20.0
 *          License:  CBD1800285
 *
 *      Description:  RTE implementation file
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

/* PRQA S 0777, 0779, 0781, 0857 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779, MD_Rte_0781, MD_MSR_1.1_857 */

#define RTE_CORE
#include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */
#include "Rte_Type.h"
#include "Rte_Main.h"

#include "Rte_BswM.h"
#include "Rte_ComM.h"
#include "Rte_Det.h"
#include "Rte_EcuM.h"
#include "Rte_Os_OsCore0_swc.h"
#include "SchM_BswM.h"
#include "SchM_Can.h"
#include "SchM_CanIf.h"
#include "SchM_CanSM.h"
#include "SchM_CanTp.h"
#include "SchM_Com.h"
#include "SchM_ComM.h"
#include "SchM_ComXf.h"
#include "SchM_Det.h"
#include "SchM_EcuM.h"
#include "SchM_Mcu.h"
#include "SchM_PduR.h"

#include "Rte_Hook.h"
#include "Rte_VttHook.h"

/* AUTOSAR 3.x compatibility */
#if !defined (RTE_LOCAL)
# define RTE_LOCAL static
#endif


/**********************************************************************************************************************
 * API for enable / disable interrupts global
 *********************************************************************************************************************/

#if defined(osDisableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableAllInterrupts() osDisableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_DisableAllInterrupts() DisableAllInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableGlobalKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableAllInterrupts() osEnableGlobalKM()   /* MICROSAR OS */
#else
# define Rte_EnableAllInterrupts() EnableAllInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * API for enable / disable interrupts up to the systemLevel
 *********************************************************************************************************************/

#if defined(osDisableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_DisableOSInterrupts() osDisableLevelKM()   /* MICROSAR OS */
#else
# define Rte_DisableOSInterrupts() SuspendOSInterrupts()   /* AUTOSAR OS */
#endif

#if defined(osEnableLevelKM) && !defined(RTE_DISABLE_ENHANCED_INTERRUPT_LOCK_API)
# define Rte_EnableOSInterrupts() osEnableLevelKM()   /* MICROSAR OS */
#else
# define Rte_EnableOSInterrupts() ResumeOSInterrupts()   /* AUTOSAR OS */
#endif

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

volatile VAR(uint8, RTE_VAR_ZERO_INIT) Rte_InitState = RTE_STATE_UNINIT; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */
volatile VAR(uint8, RTE_VAR_ZERO_INIT) Rte_StartTiming_InitState = RTE_STATE_UNINIT; /* PRQA S 0850, 3408 */ /* MD_MSR_19.8, MD_Rte_3408 */

#define RTE_STOP_SEC_VAR_ZERO_INIT_8BIT
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Internal definitions
 *********************************************************************************************************************/

#define RTE_TASK_TIMEOUT_EVENT_MASK   ((EventMaskType)0x01)
#define RTE_TASK_WAITPOINT_EVENT_MASK ((EventMaskType)0x02)

/**********************************************************************************************************************
 * Buffers for Basic Tasks triggered by OS Schedule Table
 *********************************************************************************************************************/

#define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

VAR(uint8, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_PeriodicTask_Step = 0U; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * RTE life cycle API
 *********************************************************************************************************************/

#define RTE_START_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

FUNC(void, RTE_CODE) SchM_Init(void)
{
  /* activate the schedule tables */
  (void)StartScheduleTableRel(MainScheduleTable_PeriodicTask, 1); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_SCHM_INIT;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Start(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  /* mode management initialization part 1 */

  Rte_StartTiming_InitState = RTE_STATE_INIT;
  Rte_InitState = RTE_STATE_INIT;

  return RTE_E_OK;
} /* PRQA S 6050 */ /* MD_MSR_STCAL */

FUNC(Std_ReturnType, RTE_CODE) Rte_Stop(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Rte_StartTiming_InitState = RTE_STATE_UNINIT;
  Rte_InitState = RTE_STATE_SCHM_INIT;

  return RTE_E_OK;
}

FUNC(void, RTE_CODE) SchM_Deinit(void)
{
  /* deactivate schedule tables */
  (void)StopScheduleTable(MainScheduleTable_PeriodicTask); /* PRQA S 3417 */ /* MD_Rte_Os */

  Rte_InitState = RTE_STATE_UNINIT;
}

FUNC(void, RTE_CODE) Rte_InitMemory(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
  Rte_InitState = RTE_STATE_UNINIT;
  Rte_StartTiming_InitState = RTE_STATE_UNINIT;

  /* reset OsScheduleTable variables */
  Rte_ScheduleTable_PeriodicTask_Step = 0U;

}


/**********************************************************************************************************************
 * Exclusive area access
 *********************************************************************************************************************/

FUNC(void, RTE_CODE) SchM_Enter_Mcu_AtomAgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_AtomAgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}


FUNC(void, RTE_CODE) SchM_Enter_Mcu_TomTgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  SuspendAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}

FUNC(void, RTE_CODE) SchM_Exit_Mcu_TomTgcReg(void)
{
  /* RteAnalyzer(ExclusiveArea, ALL_INTERRUPT_BLOCKING) */
  ResumeAllInterrupts(); /* PRQA S 3109 */ /* MD_MSR_14.3 */
}



/**********************************************************************************************************************
 * Task bodies for RTE controlled tasks
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Task:     PeriodicTask
 * Priority: 0
 * Schedule: FULL
 *********************************************************************************************************************/
TASK(PeriodicTask) /* PRQA S 3408, 1503 */ /* MD_Rte_3408, MD_MSR_14.1 */
{

  if (Rte_ScheduleTable_PeriodicTask_Step == 0)
  {
    /* call runnable */
    ComM_MainFunction_0();

    /* call runnable */
    EcuM_MainFunction();

    /* call schedulable entity */
    Com_MainFunctionTx();

    /* call schedulable entity */
    Can_MainFunction_Write();

    /* call schedulable entity */
    Can_MainFunction_Read();

    /* call schedulable entity */
    Com_MainFunctionRx();

    /* call schedulable entity */
    CanSM_MainFunction();

    /* call schedulable entity */
    Can_MainFunction_BusOff();

    /* call schedulable entity */
    Can_MainFunction_Mode();

    /* call schedulable entity */
    Can_MainFunction_Wakeup();

    /* call schedulable entity */
    CanTp_MainFunction();

    Rte_ScheduleTable_PeriodicTask_Step = 1;
  }
  else if (Rte_ScheduleTable_PeriodicTask_Step == 1) /* PRQA S 2004 */ /* MD_Rte_2004 */ /* COV_RTE_STATE_MACHINE_LAST_STATE */
  {
    /* call runnable */
    EcuM_MainFunction();

    /* call schedulable entity */
    Com_MainFunctionTx();

    /* call schedulable entity */
    Can_MainFunction_Write();

    /* call schedulable entity */
    Can_MainFunction_Read();

    /* call schedulable entity */
    Com_MainFunctionRx();

    /* call schedulable entity */
    CanSM_MainFunction();

    /* call schedulable entity */
    Can_MainFunction_BusOff();

    /* call schedulable entity */
    Can_MainFunction_Mode();

    /* call schedulable entity */
    Can_MainFunction_Wakeup();

    /* call schedulable entity */
    CanTp_MainFunction();

    Rte_ScheduleTable_PeriodicTask_Step = 0;
  }

  //(void)TerminateTask(); /* PRQA S 3417 */ /* MD_Rte_Os */
} /* PRQA S 6010, 6030, 6050, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STCAL, MD_MSR_STMIF */

#define RTE_STOP_SEC_CODE
#include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0781:  MISRA rule: 5.6
     Reason:     The name is being used as a structure/union member as well as being a label, tag or ordinary identifier.
                 The compliance to this rule is under user's control.
     Risk:       Ambiguous identifiers can lead to compiler errors / warnings.
     Prevention: Verified during compile time. If the compiler reports an error or warning, the user has to rename the objects leading to the violation.

   MD_Rte_2004:  MISRA rule: 14.10
     Reason:     The concluding else is not needed and an empty else makes the code more difficult to understand.
     Risk:       Wrong implementations could remain undetected.
     Prevention: Code inspection and test of different source code variants by the component test suites.

   MD_Rte_3408:  MISRA rule: 8.8
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/

/**********************************************************************************************************************
 Code coverage justifications
 *********************************************************************************************************************/

/* COV_JUSTIFICATION_BEGIN
   \ID COV_RTE_STATE_MACHINE_LAST_STATE
     \ACCEPT TX
     \REASON The condition realizes a state of a cyclic state machine. At each time one of the implemented states is valid. Because of the
             "else if" construction the last state can never be covered false.

COV_JUSTIFICATION_END */
