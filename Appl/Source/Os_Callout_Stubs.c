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
 *              File: Os_Callout_Stubs.c
 *   Generation Time: 2023-08-16 18:19:55
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

#define OS_CALLOUT_STUBS_SOURCE

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/

#include "Os.h"

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_Include>
 *********************************************************************************************************************/
#include "EcuM.h"
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  StartupHook()
 *********************************************************************************************************************/
#if OS_CFG_STARTUPHOOK_SYSTEM == STD_ON
# define OS_START_SEC_STARTUPHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_STARTUPHOOK_CODE) StartupHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_StartupHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_STARTUPHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_STARTUPHOOK_SYSTEM */


/**********************************************************************************************************************
 *  ShutdownHook()
 *********************************************************************************************************************/
#if OS_CFG_SHUTDOWNHOOK_SYSTEM == STD_ON
# define OS_START_SEC_SHUTDOWNHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_SHUTDOWNHOOK_CODE) ShutdownHook(StatusType Fatalerror)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ShutdownHook>
 *********************************************************************************************************************/
  EcuM_Shutdown();
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_SHUTDOWNHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_SHUTDOWNHOOK_SYSTEM */


/**********************************************************************************************************************
 *  ErrorHook()
 *********************************************************************************************************************/
#if OS_CFG_ERRORHOOK_SYSTEM == STD_ON
# define OS_START_SEC_ERRORHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_ERRORHOOK_CODE) ErrorHook(StatusType Error)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ErrorHook>
 *********************************************************************************************************************/
  Os_ErrorInformationType CurrentError;
  volatile uint8 endless = 1u;
  (void)Os_GetDetailedError(&CurrentError);
  while(endless)
  {
    
  }
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_ERRORHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_ERRORHOOK_SYSTEM */


/**********************************************************************************************************************
 *  ProtectionHook()
 *********************************************************************************************************************/
#if OS_CFG_PROTECTIONHOOK_SYSTEM == STD_ON
# define OS_START_SEC_PROTECTIONHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(ProtectionReturnType, OS_PROTECTIONHOOK_CODE) ProtectionHook(StatusType Fatalerror)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_ProtectionHook>
 *********************************************************************************************************************/
  return PRO_SHUTDOWN;
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_PROTECTIONHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_PROTECTIONHOOK_SYSTEM */


/**********************************************************************************************************************
 *  PreTaskHook()
 *********************************************************************************************************************/
#if OS_CFG_PRETASKHOOK == STD_ON
# define OS_START_SEC_PRETASKHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_PRETASKHOOK_CODE) PreTaskHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PreTaskHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_PRETASKHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_PRETASKHOOK */


/**********************************************************************************************************************
 *  PostTaskHook()
 *********************************************************************************************************************/
#if OS_CFG_POSTTASKHOOK == STD_ON
# define OS_START_SEC_POSTTASKHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_POSTTASKHOOK_CODE) PostTaskHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PostTaskHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_POSTTASKHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_POSTTASKHOOK */


/**********************************************************************************************************************
 *  Os_PanicHook()
 *********************************************************************************************************************/
#if OS_CFG_PANICHOOK == STD_ON
# define OS_START_SEC_PANICHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, OS_PANICHOOK_CODE) Os_PanicHook(void)
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           <USERBLOCK OS_Callout_Stubs_PanicHook>
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           </USERBLOCK>
 *********************************************************************************************************************/

}

# define OS_STOP_SEC_PANICHOOK_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
#endif /* OS_CFG_PANICHOOK */



/* Unrecognized User Blocks */
#if 0
#endif


/**********************************************************************************************************************
 *  END OF FILE: Os_Callout_Stubs.c
 *********************************************************************************************************************/
