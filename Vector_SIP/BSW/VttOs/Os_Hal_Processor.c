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
 *  \addtogroup  VttOs
 *  \{
 *
 *  \file        Os_Hal_Processor.c
 *  \brief
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777 EOF */ /* MD_MSR_Rule5.1 */

#define OS_HAL_PROCESSOR_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */


/* Os kernel module dependencies */

/* Os hal dependencies */
#include "Os_Hal_TimerInt.h"

#include "Os_Hal_Compiler.h"
#include "Os_Hal_Processor.h"

/**********************************************************************************************************************
*  PRAGMAS
*********************************************************************************************************************/

/*! \brief Ensure that the internal states of the timers used by the OS are not cleared during a simulated ECU reset. */
#pragma bss_seg()                                                                                                       /* PRQA S 3116 */ /* MD_MSR_Pragma */
#pragma data_seg()                                                                                                      /* PRQA S 3116 */ /* MD_MSR_Pragma */


/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/
static CANoeAPI_UserTimer2_Handle VttOs_Pits[OS_CANOE_PIT_COUNT];
static uint8 VttOs_PitCount;


/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_MemMap */


/***********************************************************************************************************************
 *  Os_Hal_ProcessorInit()
 **********************************************************************************************************************/
/*! \brief       Initializes the processor on reset
 *  \details     -
 *  \pre         -
 *  \context     OS_INTERNAL
 *  \reentrant   FALSE
 *  \synchronous TRUE
 *  \note        Must only be called during processor startup.
 **********************************************************************************************************************/
OS_FUNC_ATTRIBUTE_DECLARATION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
    Os_Hal_ProcessorInit,
(
  void
));


/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_ProcessorInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
OS_FUNC_ATTRIBUTE_DEFINITION(OS_LOCAL_INLINE void, OS_CODE, OS_ALWAYS_INLINE,
    Os_Hal_ProcessorInit,
(
  void
))
{
  (void)CANoeEmuProcessor_DisableInterrupts();
  VttOs_PitCount = 0u;
}


/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_ProcessorCreatePit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 *
 */
FUNC(void, OS_CODE) Os_Hal_ProcessorCreatePit
(
    Os_Hal_TimerPitNameType Name,
    uint32 CycleTime,
    sint32 InterruptSource
)
{
  CANoeAPI_UserTimer2_Handle index;

  Os_Assert((Os_StdReturnType)(VttOs_PitCount < OS_CANOE_PIT_COUNT));                                                   /* PRQA S 1880, 4304 */ /* MD_Os_Rule10.4_1880, MD_Os_C90BooleanCompatibility */
  index = CANoeAPI_UserTimer2_Create(Name);
  CANoeAPI_UserTimer2_SetCallbackFunction(index,
      (CANoeAPI_UserTimer2_Handler)Os_Hal_ProcessorPitUserTimer2Handler, InterruptSource);
  (void)CANoeAPI_UserTimer2_SetCyclic(index, CANOEAPI_USERTIMER2_MICROSECONDS(CycleTime));
  VttOs_Pits[VttOs_PitCount] = index;
  VttOs_PitCount++;
}

/***********************************************************************************************************************
 *  Os_Hal_ProcessorDestroyTimers()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, OS_CODE) Os_Hal_ProcessorDestroyTimers
(
    void
)
{
  uint8_least i;


  for(i = 0; i < OS_CANOE_HRT_COUNT; i++)                                                                               /* PRQA S 1880 */ /* MD_Os_Rule10.4_1880 */
  {
    CANoeEmuHRTimer_SetIrqNumber((sint32)i, CANOEEMUPROCESSOR_INVALIDIRQ);
  }

  for(i = 0; i < VttOs_PitCount; i++)
  {
    CANoeAPI_UserTimer2_Destroy(VttOs_Pits[i]);
  }
  VttOs_PitCount = 0;
}

/***********************************************************************************************************************
 *  VttOs_OnStateChange()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, OS_CODE) VttOs_OnStateChange
(
    uint8 Action,
    uint8 OldState,
    uint8 NewState
)
{
  OS_IGNORE_UNREF_PARAM(NewState);                                                                                      /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  OS_IGNORE_UNREF_PARAM(OldState);                                                                                      /* PRQA S 3112 */ /* MD_MSR_DummyStmt */

  switch(Action)
  {
  case CANOEAPI_ECUACTION_LOAD:
    break;

  case CANOEAPI_ECUACTION_UNLOAD:
    break;

  case CANOEAPI_ECUACTION_STARTMEASUREMENT:
    break;

  case CANOEAPI_ECUACTION_STOPMEASUREMENT:
    break;

  case CANOEAPI_ECUACTION_SWITCHON:
    Os_Hal_ProcessorInit();
    break;

  case CANOEAPI_ECUACTION_RESET:
    (void)CANoeEmuProcessor_DisableInterrupts();
    Os_Hal_ProcessorDestroyTimers();
    break;

  case CANOEAPI_ECUACTION_SWITCHOFF:
    (void)CANoeEmuProcessor_DisableInterrupts();
    Os_Hal_ProcessorDestroyTimers();
    break;

  case CANOEAPI_ECUACTION_GOTOSLEEP:
    break;

  case CANOEAPI_ECUACTION_WAKEUP:
    break;

  default: /* Do nothing */
    break;
  }
}


/***********************************************************************************************************************
 *  Os_Hal_TimerPitUserTimer2Handler()
 **********************************************************************************************************************/
/*!
 *
 * Internal comment removed.
 *
 *
 */
FUNC(void, OS_CODE) Os_Hal_ProcessorPitUserTimer2Handler
(
  sint32 InterruptSource,
  P2CONST(Os_Hal_CANoeNameType, AUTOMATIC, OS_CONST) Name
)
{
  OS_IGNORE_UNREF_PARAM(Name);                                                                                          /* PRQA S 3112 */ /* MD_MSR_DummyStmt */
  /* #10 Trigger the interrupt for this timer */
  CANoeAPI_SetInterrupt(InterruptSource);
}


#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_MemMap */


/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Processor.c
 **********************************************************************************************************************/
