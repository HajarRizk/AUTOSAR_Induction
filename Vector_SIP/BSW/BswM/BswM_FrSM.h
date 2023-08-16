/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2019 by Vector Informatik GmbH.                                                  All rights reserved.
 * 
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  BswM_FrSM.h
 *        \brief  MICROSAR Basic Software Mode Manager
 *
 *      \details  Callback header for FrSM.
 *
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  REVISION HISTORY
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the module's header file.
 *
 *  FILE VERSION
 *  -------------------------------------------------------------------------------------------------------------------
 *  Refer to the VERSION CHECK below.
 *********************************************************************************************************************/
#if !defined BSWM_FRSM_H
# define BSWM_FRSM_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
# include "FrSM.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT VERSIONS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
# define BSWM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
# include "BswM_vMemMap.h" 

/**********************************************************************************************************************
 *  BswM_FrSM_CurrentState()
 *********************************************************************************************************************/
/*! \brief      Function called by FrSM to indicate its current state.
 * \details     Passed state is stored and depending rules are arbitrated.
 * \param[in]   Network       The FlexRay cluster that the indicated state corresponds to.
 * \param[in]   CurrentState  The current state of the FlexRay cluster.
 * \pre         -
 * \context     TASK|ISR1|ISR2
 * \reentrant   TRUE for different networks.
 * \synchronous TRUE
 * \config      BSWM_ENABLE_FRSM
 * \trace       SPEC-7895, SPEC-7886, SPEC-7890, SPEC-7955
 */
extern FUNC(void, BSWM_CODE) BswM_FrSM_CurrentState(NetworkHandleType Network, FrSM_BswM_StateType CurrentState);

# define BSWM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_MemMap */
# include "BswM_vMemMap.h" 

#endif /* BSWM_FRSM_H */

/**********************************************************************************************************************
 *  END OF FILE: BswM_FrSM.h
 *********************************************************************************************************************/
