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
 *  \addtogroup  Os_Hal_Core
 *  \{
 *
 *  \file        Os_Hal_Core.c
 *  \brief       Core related primitives which don't have to be inlined.
 *
 *
 **********************************************************************************************************************/
/***********************************************************************************************************************
 *  REVISION HISTORY
 *  --------------------------------------------------------------------------------------------------------------------
 *  Refer to Os_Hal_Os.h.
 **********************************************************************************************************************/

                                                                                                                        /* PRQA S 0777 EOF */ /* MD_MSR_Rule5.1 */


#define OS_HAL_CORE_SOURCE

/***********************************************************************************************************************
 *  INCLUDES
 **********************************************************************************************************************/
/* AUTOSAR includes */
#include "Std_Types.h"

/* Os module declarations */
#include "Os_Hal_Core.h"

/* Os kernel module dependencies */
#include "Os_Error_Lcfg.h"

/* Os hal dependencies */
#include "Os_Hal_Os.h"
#include "Os_Hal_Cfg.h"

/***********************************************************************************************************************
 *  VERSION CHECK
 **********************************************************************************************************************/

/* Check the version of OS header file */
#if (  (OS_HAL_SW_MAJOR_VERSION != (2u)) \
    || (OS_HAL_SW_MINOR_VERSION != (25u)) \
    || (OS_HAL_SW_PATCH_VERSION != (0u)) )
# error "Vendor specific version numbers of Os_Hal_Core.c and Os_Hal_Os.h are inconsistent"
#endif

/* Check the version of the configuration header file */
#if (  (OS_CFG_HAL_MAJOR_VERSION != (2u)) \
    || (OS_CFG_HAL_MINOR_VERSION != (17u)) )
# error "Version numbers of Os_Hal_Core.c and Os_Hal_Cfg.h are inconsistent!"
#endif

/***********************************************************************************************************************
 *  LOCAL CONSTANT MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL FUNCTION MACROS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  LOCAL DATA PROTOTYPES
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL DATA
 **********************************************************************************************************************/

P2VAR(Os_Hal_ContextType, AUTOMATIC, AUTOMATIC) Os_Hal_CoreId2CurrentContext[OS_COREID_COUNT];

uint8 _OS_CODE_START[1] = { 0 };                                                                                        /* PRQA S 0602 */ /* MD_Os_Hal_Rule1.3_0602 */
uint8 _OS_CODE_END[1]   = { 0 };                                                                                        /* PRQA S 0602 */ /* MD_Os_Hal_Rule1.3_0602 */

/***********************************************************************************************************************
 *  LOCAL FUNCTION PROTOTYPES
 **********************************************************************************************************************/
#define OS_START_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_MemMap */


/***********************************************************************************************************************
 *  LOCAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 **********************************************************************************************************************/

/***********************************************************************************************************************
 *  Os_Hal_CoreInit()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 *
 */
FUNC(void, OS_CODE) Os_Hal_CoreInit(P2CONST(Os_Hal_CoreAsrConfigType, AUTOMATIC, OS_CONST) Config)
{
  /* #10 Configure the number of tasks on the local core. */
  CANoeEmuProcessor_ConfigureNumberOfTasks((sint32)(Config->NumberOfCANoeEmuTasks));

  /*
   * Highest possible level before CANoeEmuProcessor_SetInterruptRoutingMask is 0 because
   * CANoeEmuProcessor_SetInterruptLevel reduces the level to the lowest configured maskable
   * interrupt.
   * Keep this interrupt level by raising the level to OS_CFG_MAX_INT_LEVEL.
   */

  /* #20 Set interrupt level on the local core. */
  (void)CANoeEmuProcessor_SetInterruptLevel(OS_CFG_MAX_INT_LEVEL);
}


/***********************************************************************************************************************
 *  Os_Hal_ConsumeStack()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, OS_CODE) Os_Hal_ConsumeStack(P2CONST(Os_StackConfigType, AUTOMATIC, OS_CONST) Stack)
{
  /* #10 Consume the given stack. */
  *Stack->HighAddress = ~OS_HAL_STACK_FILL_PATTERN;
}

/***********************************************************************************************************************
 *  Os_Hal_CoreInitHardware()
 **********************************************************************************************************************/
/*!
 * Internal comment removed.
 *
 *
 */
FUNC(void, OS_CODE) Os_Hal_CoreInitHardware(P2CONST(Os_Hal_SystemConfigType, AUTOMATIC, OS_CONST) Config)
{

  OS_IGNORE_UNREF_PARAM(Config);                                                                                        /* PRQA S 3112 */ /* MD_MSR_DummyStmt */

  /* #10 Initialize interrupt router. */
  CANoeEmuProcessor_InitInterruptRouter();
  CANoeEmuProcessor_DisableInterruptsAtStartOfISR(1);

}


/***********************************************************************************************************************
 *  Os_Hal_CoreFreeze()
 **********************************************************************************************************************/
/*!
* Internal comment removed.
 *
 *
*/
OS_FUNC_ATTRIBUTE_DEFINITION(void, OS_CODE, OS_NORETURN, Os_Hal_CoreFreeze,
(
  void
))
{
  /* #10 Loop endlessly. */
  for( ; ; )
  {
    CANoeAPI_ConsumeTicks(1);
  }
}


#define OS_STOP_SEC_CODE
#include "Os_MemMap_OsCode.h"                                                                                           /* PRQA S 5087 */ /* MD_MSR_MemMap */

/* START_COVERAGE_JUSTIFICATION

Justifications for Variant Coverage:

\ID COV_OS_HALVTTCANOEAPIVERSION
  \ACCEPT TX
  \REASON VTT OS requires a specific CANoe API version. The test suite uses at least the required version, so this
          check is always true. The required version is checked by code inspection.

END_COVERAGE_JUSTIFICATION */

/*!
 * \}
 */

/***********************************************************************************************************************
 *  END OF FILE: Os_Hal_Core.c
 **********************************************************************************************************************/
