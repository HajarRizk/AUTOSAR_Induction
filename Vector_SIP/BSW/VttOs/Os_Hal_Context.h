/***********************************************************************************************************************
 *  COPYRIGHT
 *  --------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2018 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  --------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  ------------------------------------------------------------------------------------------------------------------*/
/**
 *  \addtogroup Os_Hal_Context
 *  \trace      CREQ-1201
 *
 *  \{
 *
 *  \file       Os_Hal_Context.h
 *  \brief      Context switching primitives.
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/
                                                                                                                        /* PRQA S 0388  EOF */ /* MD_MSR_Dir1.1 */
#ifndef OS_HAL_CONTEXT_H
# define OS_HAL_CONTEXT_H

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
# include "Std_Types.h"

/* Os module dependencies */
# include "Os_Hal_ContextInt.h"
# include "Os_Hal_Context_Lcfg.h"

/* Os kernel module dependencies */

/* Os Hal dependencies */
# include "Os_Hal_Compiler.h"
# include "Os_Hal_Interrupt.h"
# include "Os_Hal_Core.h"
# include "Os_Hal_EntryInt.h"


/***********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
# define OS_START_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_MemMap */


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/


/***********************************************************************************************************************
 *  Os_Hal_ContextCANoeInit()
 **********************************************************************************************************************/
 /*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextCANoeInit,
(
  P2CONST(Os_Hal_CANoeTaskConfigType, AUTOMATIC, OS_CONST) Config
))
{
  P2VAR(Os_Hal_CANoeNameType, AUTOMATIC, OS_VAR_NOINIT) taskName;

  taskName = (P2VAR(Os_Hal_CANoeNameType, AUTOMATIC, OS_VAR_NOINIT))(Config->Name);                                     /* PRQA S 0311 */ /* MD_Os_Hal_Rule11.8_0311 */

  /* #10 Configure the task of the given context from its configuration. */
  CANoeEmuProcessor_ConfigureTaskName((sint32)(Config->Id), taskName);
  CANoeEmuProcessor_ConfigureTaskFunction((sint32)(Config->Id), Config->Main);
}


/***********************************************************************************************************************
 *  Os_Hal_ContextResetCANoeTasks()
 **********************************************************************************************************************/
 /*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
Os_Hal_ContextResetCANoeTasks,
(
    P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  sint32 result;

  /* #10 Reset the task. */
  result = CANoeEmuProcessor_RollbackStackOfTask((sint32)(Context->Config->CANoeTask.Id));
  Os_Assert((uint32)(result == CANOEEMUPROCESSOR_ROLLBACK));                                                            /* PRQA S 4304 */ /* MD_Os_C90BooleanCompatibility */

  /* #20 Reset the second Isrhost task. */
  result = CANoeEmuProcessor_RollbackStackOfTask((sint32)(Context->Config->CANoeIsrHost.Id));
  Os_Assert((uint32)(result == CANOEEMUPROCESSOR_ROLLBACK));                                                            /* PRQA S 4304 */ /* MD_Os_C90BooleanCompatibility */
}


/***********************************************************************************************************************
 *  Os_Hal_ContextInit()
 **********************************************************************************************************************/
 /*!
 * Internal comment removed.
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextInit,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) Config,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /* #10 Initialize common fields of the given context from its configuration. */
  Context->Config = Config;
  Context->CurrentInterruptState = Config->IntLockLevel;

  /* #20 Initialize both tasks(task and ISR host task) of the context. */
  Os_Hal_ContextCANoeInit(&(Config->CANoeTask));
  Os_Hal_ContextCANoeInit(&(Config->CANoeIsrHost));

  Context->ActiveCANoeTaskId = (Os_Hal_CANoeTaskIdType)(Config->CANoeTask.Id);
  Context->GlobalInterruptState = Os_Hal_ContextGlobalInterruptState_Enabled;
  Context->HostedIsr = NULL_PTR;

  Context->ResetContext = TRUE;
}


/***********************************************************************************************************************
 *  Os_Hal_ContextReset()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
Os_Hal_ContextReset,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) Config,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /* #10 Reinitialize the common fields of the given context from its configuration. */
  Context->CurrentInterruptState = Config->IntLockLevel;
  Context->GlobalInterruptState = Os_Hal_ContextGlobalInterruptState_Enabled;
  Context->ActiveCANoeTaskId = (Os_Hal_CANoeTaskIdType)(Config->CANoeTask.Id);

  /* #20 Reset the tasks in the current context. */
  Os_Hal_ContextResetCANoeTasks(Context);
}

/***********************************************************************************************************************
 *  Os_Hal_ContextSetParameter()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_ContextSetParameter,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context,
  P2CONST(void, AUTOMATIC, OS_VAR_NOINIT) Parameter
))
{
  /* #10 Set the first parameter of the given context. */
  Context->Parameter = Parameter;
}


/***********************************************************************************************************************
 *  Os_Hal_ContextSetStack()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_ContextSetStack,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context,
  P2CONST(Os_Hal_ContextStackConfigType, AUTOMATIC, OS_VAR_NOINIT) Stack
))
{
  /* Nothing to be done */
  OS_IGNORE_UNREF_PARAM(Context);                                                                                       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  OS_IGNORE_UNREF_PARAM(Stack);                                                                                         /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}


/***********************************************************************************************************************
 *  Os_Hal_ContextGetStack()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
Os_Hal_ContextGetStack,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) Context,
  P2VAR(Os_Hal_ContextStackConfigType, AUTOMATIC, OS_VAR_NOINIT) Stack
))
{
  /* Nothing to be done */
  OS_IGNORE_UNREF_PARAM(Context);                                                                                       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  OS_IGNORE_UNREF_PARAM(Stack);                                                                                         /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}


/***********************************************************************************************************************
 *  Os_Hal_ContextSetInterruptState()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextSetInterruptState,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context,
  P2CONST(Os_Hal_IntStateType, AUTOMATIC, OS_VAR_NOINIT) InterruptState
))
{
  /* #10 Set the interrupt state of the given context. */
  Context->CurrentInterruptState = *InterruptState;
}


/***********************************************************************************************************************
 *  Os_Hal_ContextSetUserMsrBits()
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
Os_Hal_ContextSetUserMsrBits,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /*!
   * Internal comment removed.
 *
 *
   */
  OS_IGNORE_UNREF_PARAM(Context);                                                                                       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}


/***********************************************************************************************************************
 *  Os_Hal_ContextFirstResume()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextFirstResume,
(
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Disable all maskable interrupts. */
  (void)CANoeEmuProcessor_DisableInterrupts();

  /* #20 Set the interrupt level of the next context. */
  Os_Hal_IntSetLevel(&(Next->CurrentInterruptState));
  Os_Hal_ConsumeStack(Next->Config->Stack);

  /* #30 Start first thread. */
  Os_Hal_ContextSetTaskToRunAndRestoreInterrupts(Next);

  CANoeEmuProcessor_RollbackStack();
}


/***********************************************************************************************************************
 *  Os_Hal_ContextSwitch()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextSwitch,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  Os_Hal_IntLevelType nextInterruptState;

  /* #10 Disable global interrupts. */
  Os_Hal_ContextGlobalInterruptsDisable();

  /* #20 Store common context elements to current context. */
  Os_Hal_IntGetLevel(&(Current->CurrentInterruptState));

  /* #30 Restore common context elements from next context. */
  nextInterruptState = Next->Config->IntLockLevel;
  Os_Hal_IntSetLevel(&nextInterruptState);
  Os_Hal_ConsumeStack(Next->Config->Stack);

  /* #40 Start or resume next thread. */
  Os_Hal_ContextSetTaskToRunAndRestoreInterrupts(Next);

  /* #50 Restore global interrupts. */
  Os_Hal_ContextGlobalInterruptsEnable();

  /* #60 If context reset is required: */
  if(Current->ResetContext == TRUE)
  {
    /* #70 Rollback current stack. */
    CANoeEmuProcessor_RollbackStack();
  }
}


/***********************************************************************************************************************
 *  Os_Hal_ContextResetAndResume()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextResetAndResume,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) CurrentConfig,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 Disable global interrupts. */
  Os_Hal_ContextGlobalInterruptsDisable();
  Current->CurrentInterruptState = CurrentConfig->IntLockLevel;

  /* #20 Start or resume next thread. */
  (void)CANoeEmuProcessor_SetInterruptLevel(Next->Config->IntLockLevel);
  Os_Hal_ConsumeStack(Next->Config->Stack);
  Os_Hal_ContextSetTaskToRunAndRestoreInterrupts(Next);

  /* #30 Restore global interrupts. */
  Os_Hal_ContextGlobalInterruptsEnable();
  CANoeEmuProcessor_RollbackStack();
  Os_Hal_CoreFreeze();
}


/***********************************************************************************************************************
 *  Os_Hal_ContextAbort()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextAbort,
(
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) Config,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  Context->CurrentInterruptState = Config->IntLockLevel;

  /* #10 Set execution of the given context to the return function, and reset task. */
  CANoeEmuProcessor_ConfigureTaskFunction(Context->ActiveCANoeTaskId, Os_Hal_EntryISRAbort);

  Os_Hal_ContextResetCANoeTasks(Context);
}


/***********************************************************************************************************************
 *  Os_Hal_ContextCall()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
Os_Hal_ContextCall,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  Os_Hal_IntGetLevel(&(Current->CurrentInterruptState));
  Os_Hal_IntSetLevel(&(Next->CurrentInterruptState));

  /* #10 setjmp to the current context and call the entry function to the next config. */
  if(setjmp(Current->Call.JmpBuf) == 0u)
  {
    Next->Config->Entry(Next->Parameter);
  }
}


/***********************************************************************************************************************
 *  Os_Hal_ContextCallOnStack()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(                                                                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE, Os_Hal_ContextCallOnStack,
(
  P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  Os_Hal_IntGetLevel(&(Current->CurrentInterruptState));
  Os_Hal_IntSetLevel(&(Next->CurrentInterruptState));

  /* #10 if next context is a non-trusted function: */
  if(Next->Config->Type == Os_Hal_ContextConfigType_NontrustedFunction)
  {
    /* #20 setjmp to the current context and call the entry function to the next config. */
    if(setjmp(Current->Call.JmpBuf) == 0u)
    {
      Next->Config->Entry(Next->Parameter);
    }
  }
  /* #30 else: */
  else
  {
    /* #40 start or resume next task. */
    Os_Hal_ConsumeStack(Next->Config->Stack);
    Os_Hal_ContextSetTaskToRunAndRestoreInterrupts(Next);
  }
}


/***********************************************************************************************************************
 *  Os_Hal_ContextReturn()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextReturn,
(
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Current,
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  /* #10 if current context is a non-trusted or a trusted function: */
  if(((Current->Config->Type) == Os_Hal_ContextConfigType_TrustedFunction)
      || ((Current->Config->Type) == Os_Hal_ContextConfigType_NontrustedFunction))
  {
    Os_Hal_IntSetLevel(&(Next->CurrentInterruptState));

    /* #20 longjmp to the next context. */
    /* Function longjmp never returns. */
    longjmp(((P2VAR(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT))Next)->Call.JmpBuf, 1);                               /* PRQA S 0311 */ /* MD_Os_Hal_Rule11.8_0311 */
  }
  /* #30 else: */
  else
  {
    /* #40 start or resume next task. */
    Os_Hal_ContextGlobalInterruptsDisable();
    Os_Hal_IntSetLevel(&(Next->CurrentInterruptState));
    Os_Hal_ContextSetTaskToRunAndRestoreInterrupts(Next);
  }

  Os_Assert((Os_StdReturnType)(Current->ResetContext == TRUE));                                                         /* PRQA S 4304 */ /* MD_Os_C90BooleanCompatibility */
  CANoeEmuProcessor_RollbackStack();

  Os_Hal_CoreFreeze();
}


/***********************************************************************************************************************
 *  Os_Hal_ContextIsExceptionContextSupported()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE Os_StdReturnType, OS_CODE, OS_ALWAYS_INLINE,                               /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextIsExceptionContextSupported,( void ))
{
  /* #10 Return 0 as exception context cannot be manipulated. */
  return 0u;
}


/***********************************************************************************************************************
 *  Os_Hal_ContextSetTaskToRunAndRestoreInterrupts()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextSetTaskToRunAndRestoreInterrupts,
(
  P2CONST(Os_Hal_ContextType, AUTOMATIC, OS_VAR_NOINIT) Next
))
{
  Os_Hal_CoreSetContext(Next);

  /* #10 if Interrupts are globally enabled: */
  if(Next->GlobalInterruptState == Os_Hal_ContextGlobalInterruptState_Enabled)
  {
    /* #20 Enable enable interrupts and run the task. */
    CANoeEmuProcessor_SetTaskToRunAndEnableInterrupts(Next->ActiveCANoeTaskId);
  }
  /* #30 else: */
  else
  {
    /* #40 Run the task. */
    CANoeEmuProcessor_SetTaskToRun(Next->ActiveCANoeTaskId);
  }
}

/***********************************************************************************************************************
 *  Os_Hal_ContextGlobalInterruptsDisable()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextGlobalInterruptsDisable, (void))
{
  P2VAR(Os_Hal_ContextType, AUTOMATIC, AUTOMATIC) currentContext;

  (void)CANoeEmuProcessor_DisableInterrupts();

  /* #10 Disable interrupt globally in the current context. */
  currentContext = Os_Hal_CoreGetContext();
  currentContext->GlobalInterruptState = Os_Hal_ContextGlobalInterruptState_Disabled;
}


/***********************************************************************************************************************
 *  Os_Hal_ContextGlobalInterruptsEnable()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextGlobalInterruptsEnable, (void))
{
  P2VAR(Os_Hal_ContextType, AUTOMATIC, AUTOMATIC) currentContext;

  /* #10 Enable interrupt globally in the current context. */
  currentContext = Os_Hal_CoreGetContext();
  currentContext->GlobalInterruptState = Os_Hal_ContextGlobalInterruptState_Enabled;

  (void)CANoeEmuProcessor_EnableInterrupts();
}


/***********************************************************************************************************************
 *  Os_Hal_ContextSwitchToIsrHost()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextSwitchToIsrHost,
(
  P2CONST(Os_IsrConfigType, AUTOMATIC, OS_CONST) Isr
))
{
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) config;
  P2VAR(Os_Hal_ContextType, AUTOMATIC, AUTOMATIC) currentContext;

  currentContext = Os_Hal_CoreGetContext();
  config = currentContext->Config;

  /* #10 Disable interrupts. */
  currentContext->GlobalInterruptStateHostBuffer = currentContext->GlobalInterruptState;
  Os_Hal_ContextGlobalInterruptsDisable();

  /* #20 Set the ISR which is executed by the host. */
  currentContext->HostedIsr = Isr;
  currentContext->ActiveCANoeTaskId = (Os_Hal_CANoeTaskIdType)(config->CANoeIsrHost.Id);

  /* #30 Reset IsrHost of current context. */
  Isr->Thread.Context->ResetContext = TRUE;

  /* #40 Switch from the current context to its ISR host context. */
  Os_Hal_ContextSetTaskToRunAndRestoreInterrupts(currentContext);
}


/***********************************************************************************************************************
 *  Os_Hal_ContextSwitchToTask()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219, */
Os_Hal_ContextSwitchToTask, (void))
{
  P2CONST(Os_Hal_ContextConfigType, AUTOMATIC, OS_CONST) config;
  P2VAR(Os_Hal_ContextType, AUTOMATIC, AUTOMATIC) currentContext;

  /* #10 Disable interrupts. */
  Os_Hal_ContextGlobalInterruptsDisable();

  currentContext = Os_Hal_CoreGetContext();
  config = currentContext->Config;

  /* #20 Update active CANoe task. */
  currentContext->ActiveCANoeTaskId = (Os_Hal_CANoeTaskIdType)(config->CANoeTask.Id);
  currentContext->GlobalInterruptState = currentContext->GlobalInterruptStateHostBuffer;

  /* #30 Resume task context. */
  Os_Hal_ContextSetTaskToRunAndRestoreInterrupts(currentContext);
}

/***********************************************************************************************************************
 *  Os_Hal_ContextFetchInitialFpuContext()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
Os_Hal_ContextFetchInitialFpuContext,
(
  P2VAR(Os_Hal_ContextFpuContextType, AUTOMATIC, OS_VAR_NOINIT) InitialContext
))
{
  /* #10 Stub implementation: fpu registers are already saved in the context switch mechanism. */
  OS_IGNORE_UNREF_PARAM(InitialContext);                                                                                /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}


/***********************************************************************************************************************
 *  Os_Hal_ContextInitFpu()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextInitFpu,
(
  P2CONST(Os_Hal_ContextFpuContextType, AUTOMATIC, OS_VAR_NOINIT) InitialContext
))
{
  /* Stub implementation: fpu registers are already saved in the context switch mechanism. */
  OS_IGNORE_UNREF_PARAM(InitialContext);                                                                                /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}


/***********************************************************************************************************************
 *  Os_Hal_ContextInitFpuContext()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
Os_Hal_ContextInitFpuContext,
(
  P2VAR(Os_Hal_ContextFpuContextType, AUTOMATIC, OS_VAR_NOINIT) Context,
  P2CONST(Os_Hal_ContextFpuContextType, AUTOMATIC, OS_VAR_NOINIT) InitialContext
))
{
  /* #10 Stub implementation: fpu registers are already saved in the context switch mechanism. */
  OS_IGNORE_UNREF_PARAM(Context);                                                                                       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  OS_IGNORE_UNREF_PARAM(InitialContext);                                                                                /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}


/***********************************************************************************************************************
 *  Os_Hal_ContextStoreFpuContext()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219, 3673 */ /* MD_Os_Rule2.1_3219, MD_MSR_Rule8.13 */
Os_Hal_ContextStoreFpuContext,
(
  P2VAR(Os_Hal_ContextFpuContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /* #10 Stub implementation: fpu context is saved during the context switch mechanism. */
  OS_IGNORE_UNREF_PARAM(Context);                                                                                       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}

/***********************************************************************************************************************
 *  Os_Hal_ContextRestoreFpuContext()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,                                           /* PRQA S 3219 */ /* MD_Os_Rule2.1_3219 */
Os_Hal_ContextRestoreFpuContext,
(
  P2CONST(Os_Hal_ContextFpuContextType, AUTOMATIC, OS_VAR_NOINIT) Context
))
{
  /* #10 Stub implementation: fpu context is restored during the context switch mechanism. */
  OS_IGNORE_UNREF_PARAM(Context);                                                                                       /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
}

# define OS_STOP_SEC_CODE
# include "Os_MemMap_OsCode.h"                                                                                          /* PRQA S 5087 */ /* MD_MSR_MemMap */


#endif /* OS_HAL_CONTEXT_H */


/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Context.h
 **********************************************************************************************************************/

