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
 *             File:  Rte_CounterSWC.h
 *           Config:  AUTOSAR_Induction.dpa
 *      ECU-Project:  AUTOSAR_Induction
 *
 *        Generator:  MICROSAR RTE Generator Version 4.20.0
 *                    RTE Core Version 1.20.0
 *          License:  CBD1800285
 *
 *      Description:  Application header file for SW-C <CounterSWC>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_COUNTERSWC_H
# define _RTE_COUNTERSWC_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CounterSWC_Type.h"
# include "Rte_DataHandleType.h"

# ifndef RTE_CORE

#  include "Com.h"


# endif /* !defined(RTE_CORE) */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

#  define Rte_InitValue_CounterSignalPI_Rx_Element (0U)
#  define Rte_InitValue_CounterSignalPI_Tx_Element (0U)
# endif


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Buffers for inter-runnable variables
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern VAR(uint16, RTE_VAR_NOINIT) Rte_Irv_CounterSWC_CounterValueIRV; /* PRQA S 0850 */ /* MD_MSR_19.8 */

#  define RTE_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */
# endif /* !defined(RTE_CORE) */


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CounterSWC_CounterSignalPI_Tx_Element(uint16 data); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Read_CounterSignalPI_Rx_Element Rte_Read_CounterSWC_CounterSignalPI_Rx_Element
#  define Rte_Read_CounterSWC_CounterSignalPI_Rx_Element(data) (Com_ReceiveSignal(ComConf_ComSignal_AC_UC_AirCirc_e0001df6_Rx, (data))) /* PRQA S 3453 */ /* MD_MSR_19.7 */


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
#  define Rte_Write_CounterSignalPI_Tx_Element Rte_Write_CounterSWC_CounterSignalPI_Tx_Element


/**********************************************************************************************************************
 * Inter-runnable variables
 *********************************************************************************************************************/

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_CounterMainFunction_CounterValueIRV() \
  Rte_Irv_CounterSWC_CounterValueIRV
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_CounterMainFunction_CounterValueIRV(data) \
  (Rte_Irv_CounterSWC_CounterValueIRV = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_CounterRecieveSignal_CounterValueIRV(data) \
  (Rte_Irv_CounterSWC_CounterValueIRV = (data))
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvRead_DataServices_Counter_ReadData_CounterValueIRV() \
  Rte_Irv_CounterSWC_CounterValueIRV
/* PRQA L:L1 */

/* PRQA S 3453 L1 */ /* MD_MSR_19.7 */
#  define Rte_IrvWrite_DataServices_Counter_WriteData_CounterValueIRV(data) \
  (Rte_Irv_CounterSWC_CounterValueIRV = (data))
/* PRQA L:L1 */


# endif /* !defined(RTE_CORE) */


# define CounterSWC_START_SEC_CODE
# include "CounterSWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_CounterMainFunction CounterMainFunction
#  define RTE_RUNNABLE_CounterRecieveSignal CounterRecieveSignal
#  define RTE_RUNNABLE_DataServices_Counter_ReadData DataServices_Counter_ReadData
#  define RTE_RUNNABLE_DataServices_Counter_WriteData DataServices_Counter_WriteData
#  define RTE_RUNNABLE_DataServices_DcmDspData_CountersValue_ReadData DataServices_DcmDspData_CountersValue_ReadData
#  define RTE_RUNNABLE_RoutineServices_Counter_RequestResults RoutineServices_Counter_RequestResults
#  define RTE_RUNNABLE_RoutineServices_Counter_Start RoutineServices_Counter_Start
#  define RTE_RUNNABLE_RoutineServices_Counter_Stop RoutineServices_Counter_Stop
# endif

FUNC(void, CounterSWC_CODE) CounterMainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(void, CounterSWC_CODE) CounterRecieveSignal(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CounterSWC_CODE) DataServices_Counter_ReadData(P2VAR(uint8, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CounterSWC_CODE) DataServices_Counter_ReadData(P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CounterSWC_CODE) DataServices_Counter_WriteData(P2CONST(uint8, AUTOMATIC, RTE_COUNTERSWC_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CounterSWC_CODE) DataServices_Counter_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_COUNTERSWC_APPL_DATA) Data, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, CounterSWC_CODE) DataServices_DcmDspData_CountersValue_ReadData(P2VAR(uint8, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# else
FUNC(Std_ReturnType, CounterSWC_CODE) DataServices_DcmDspData_CountersValue_ReadData(P2VAR(Dcm_Data40ByteType, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) Data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
# endif
FUNC(Std_ReturnType, CounterSWC_CODE) RoutineServices_Counter_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint16, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) DcmDspRoutineRequestResOutSignal, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CounterSWC_CODE) RoutineServices_Counter_Start(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, CounterSWC_CODE) RoutineServices_Counter_Stop(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_COUNTERSWC_APPL_VAR) ErrorCode); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CounterSWC_STOP_SEC_CODE
# include "CounterSWC_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DataServices_DcmDspData_Counter_E_NOT_OK (1U)

#  define RTE_E_DataServices_DcmDspData_CountersValue_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Counter_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Counter_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_DcmDspRoutine_Counter_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_COUNTERSWC_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
