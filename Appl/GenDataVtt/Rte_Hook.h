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
 *             File:  Rte_Hook.h
 *           Config:  AUTOSAR_Induction.dpa
 *      ECU-Project:  AUTOSAR_Induction
 *
 *        Generator:  MICROSAR RTE Generator Version 4.20.0
 *                    RTE Core Version 1.20.0
 *          License:  CBD1800285
 *
 *      Description:  Header file containing definitions for VFB tracing
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * Names of available VFB-Trace-Hooks
 **********************************************************************************************************************
 *
 * Not configured:
 *
 *  Rte_CallHook_Dcm_DataServices_DcmDspData_Counter_ReadData_Return
 *  Rte_CallHook_Dcm_DataServices_DcmDspData_Counter_ReadData_Start
 *  Rte_CallHook_Dcm_DataServices_DcmDspData_Counter_WriteData_Return
 *  Rte_CallHook_Dcm_DataServices_DcmDspData_Counter_WriteData_Start
 *  Rte_CallHook_Dcm_DataServices_DcmDspData_CountersValue_ReadData_Return
 *  Rte_CallHook_Dcm_DataServices_DcmDspData_CountersValue_ReadData_Start
 *  Rte_CallHook_Dcm_RoutineServices_DcmDspRoutine_Counter_RequestResults_Return
 *  Rte_CallHook_Dcm_RoutineServices_DcmDspRoutine_Counter_RequestResults_Start
 *  Rte_CallHook_Dcm_RoutineServices_DcmDspRoutine_Counter_Start_Return
 *  Rte_CallHook_Dcm_RoutineServices_DcmDspRoutine_Counter_Start_Start
 *  Rte_CallHook_Dcm_RoutineServices_DcmDspRoutine_Counter_Stop_Return
 *  Rte_CallHook_Dcm_RoutineServices_DcmDspRoutine_Counter_Stop_Start
 *  Rte_ComHookRx_AC_UC_AirCirc_e0001df6_Rx
 *  Rte_ComHook_ACCompPow_b4e01f19_Tx_SigTx
 *  Rte_ComHook_AC_UC_AirCirc_e0001df6_Rx_SigRx
 *  Rte_IrvReadHook_CounterSWC_CounterMainFunction_CounterValueIRV_Return
 *  Rte_IrvReadHook_CounterSWC_CounterMainFunction_CounterValueIRV_Start
 *  Rte_IrvReadHook_CounterSWC_DataServices_Counter_ReadData_CounterValueIRV_Return
 *  Rte_IrvReadHook_CounterSWC_DataServices_Counter_ReadData_CounterValueIRV_Start
 *  Rte_IrvWriteHook_CounterSWC_CounterMainFunction_CounterValueIRV_Return
 *  Rte_IrvWriteHook_CounterSWC_CounterMainFunction_CounterValueIRV_Start
 *  Rte_IrvWriteHook_CounterSWC_CounterRecieveSignal_CounterValueIRV_Return
 *  Rte_IrvWriteHook_CounterSWC_CounterRecieveSignal_CounterValueIRV_Start
 *  Rte_IrvWriteHook_CounterSWC_DataServices_Counter_WriteData_CounterValueIRV_Return
 *  Rte_IrvWriteHook_CounterSWC_DataServices_Counter_WriteData_CounterValueIRV_Start
 *  Rte_ReadHook_CounterSWC_CounterSignalPI_Rx_Element_Return
 *  Rte_ReadHook_CounterSWC_CounterSignalPI_Rx_Element_Start
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Return
 *  Rte_Runnable_ComM_ComM_MainFunction_0_Start
 *  Rte_Runnable_ComM_GetCurrentComMode_Return
 *  Rte_Runnable_ComM_GetCurrentComMode_Start
 *  Rte_Runnable_ComM_GetInhibitionStatus_Return
 *  Rte_Runnable_ComM_GetInhibitionStatus_Start
 *  Rte_Runnable_ComM_GetMaxComMode_Return
 *  Rte_Runnable_ComM_GetMaxComMode_Start
 *  Rte_Runnable_ComM_GetRequestedComMode_Return
 *  Rte_Runnable_ComM_GetRequestedComMode_Start
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Return
 *  Rte_Runnable_ComM_LimitChannelToNoComMode_Start
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Return
 *  Rte_Runnable_ComM_LimitECUToNoComMode_Start
 *  Rte_Runnable_ComM_PreventWakeUp_Return
 *  Rte_Runnable_ComM_PreventWakeUp_Start
 *  Rte_Runnable_ComM_ReadInhibitCounter_Return
 *  Rte_Runnable_ComM_ReadInhibitCounter_Start
 *  Rte_Runnable_ComM_RequestComMode_Return
 *  Rte_Runnable_ComM_RequestComMode_Start
 *  Rte_Runnable_ComM_ResetInhibitCounter_Return
 *  Rte_Runnable_ComM_ResetInhibitCounter_Start
 *  Rte_Runnable_ComM_SetECUGroupClassification_Return
 *  Rte_Runnable_ComM_SetECUGroupClassification_Start
 *  Rte_Runnable_CounterSWC_CounterMainFunction_Return
 *  Rte_Runnable_CounterSWC_CounterMainFunction_Start
 *  Rte_Runnable_CounterSWC_CounterRecieveSignal_Return
 *  Rte_Runnable_CounterSWC_CounterRecieveSignal_Start
 *  Rte_Runnable_CounterSWC_DataServices_Counter_ReadData_Return
 *  Rte_Runnable_CounterSWC_DataServices_Counter_ReadData_Start
 *  Rte_Runnable_CounterSWC_DataServices_Counter_WriteData_Return
 *  Rte_Runnable_CounterSWC_DataServices_Counter_WriteData_Start
 *  Rte_Runnable_CounterSWC_DataServices_DcmDspData_CountersValue_ReadData_Return
 *  Rte_Runnable_CounterSWC_DataServices_DcmDspData_CountersValue_ReadData_Start
 *  Rte_Runnable_CounterSWC_RoutineServices_Counter_RequestResults_Return
 *  Rte_Runnable_CounterSWC_RoutineServices_Counter_RequestResults_Start
 *  Rte_Runnable_CounterSWC_RoutineServices_Counter_Start_Return
 *  Rte_Runnable_CounterSWC_RoutineServices_Counter_Start_Start
 *  Rte_Runnable_CounterSWC_RoutineServices_Counter_Stop_Return
 *  Rte_Runnable_CounterSWC_RoutineServices_Counter_Stop_Start
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Return
 *  Rte_Runnable_Dcm_Dcm_MainFunction_Start
 *  Rte_Runnable_Dcm_GetActiveProtocol_Return
 *  Rte_Runnable_Dcm_GetActiveProtocol_Start
 *  Rte_Runnable_Dcm_GetRequestKind_Return
 *  Rte_Runnable_Dcm_GetRequestKind_Start
 *  Rte_Runnable_Dcm_GetSesCtrlType_Return
 *  Rte_Runnable_Dcm_GetSesCtrlType_Start
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Return
 *  Rte_Runnable_Dcm_ResetToDefaultSession_Start
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Return
 *  Rte_Runnable_Dcm_SetActiveDiagnostic_Start
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Return
 *  Rte_Runnable_EcuM_EcuM_MainFunction_Start
 *  Rte_Runnable_EcuM_GetBootTarget_Return
 *  Rte_Runnable_EcuM_GetBootTarget_Start
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetLastShutdownTarget_Start
 *  Rte_Runnable_EcuM_GetShutdownCause_Return
 *  Rte_Runnable_EcuM_GetShutdownCause_Start
 *  Rte_Runnable_EcuM_GetShutdownTarget_Return
 *  Rte_Runnable_EcuM_GetShutdownTarget_Start
 *  Rte_Runnable_EcuM_SelectBootTarget_Return
 *  Rte_Runnable_EcuM_SelectBootTarget_Start
 *  Rte_Runnable_EcuM_SelectShutdownCause_Return
 *  Rte_Runnable_EcuM_SelectShutdownCause_Start
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Return
 *  Rte_Runnable_EcuM_SelectShutdownTarget_Start
 *  Rte_Runnable_Os_OsCore0_swc_GetCounterValue_Return
 *  Rte_Runnable_Os_OsCore0_swc_GetCounterValue_Start
 *  Rte_Runnable_Os_OsCore0_swc_GetElapsedValue_Return
 *  Rte_Runnable_Os_OsCore0_swc_GetElapsedValue_Start
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Return
 *  Rte_SwitchHook_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl_Start
 *  Rte_Task_Activate
 *  Rte_Task_Dispatch
 *  Rte_Task_Terminate
 *  Rte_WriteHook_CounterSWC_CounterSignalPI_Tx_Element_Return
 *  Rte_WriteHook_CounterSWC_CounterSignalPI_Tx_Element_Start
 *  SchM_EnterHook_BswM_BSWM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_BswM_BSWM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Return
 *  SchM_EnterHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_CanTp_CANTP_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_CanTp_CANTP_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_3_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_3_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_4_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_4_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_5_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_5_Start
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_6_Return
 *  SchM_EnterHook_Can_CAN_EXCLUSIVE_AREA_6_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_ComM_COMM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_BOTH_Return
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_BOTH_Start
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_RX_Return
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_RX_Start
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_TX_Return
 *  SchM_EnterHook_Com_COM_EXCLUSIVE_AREA_TX_Start
 *  SchM_EnterHook_Dcm_DCM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Dcm_DCM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_Det_DET_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_Det_DET_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Start
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Return
 *  SchM_EnterHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Start
 *  SchM_EnterHook_Mcu_AtomAgcReg_Return
 *  SchM_EnterHook_Mcu_AtomAgcReg_Start
 *  SchM_EnterHook_Mcu_TomTgcReg_Return
 *  SchM_EnterHook_Mcu_TomTgcReg_Start
 *  SchM_EnterHook_PduR_PDUR_EXCLUSIVE_AREA_0_Return
 *  SchM_EnterHook_PduR_PDUR_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_BswM_BSWM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_BswM_BSWM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Return
 *  SchM_ExitHook_CanIf_CANIF_EXCLUSIVE_AREA_7_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_CanSM_CANSM_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_CanTp_CANTP_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_CanTp_CANTP_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_3_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_3_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_4_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_4_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_5_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_5_Start
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_6_Return
 *  SchM_ExitHook_Can_CAN_EXCLUSIVE_AREA_6_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_ComM_COMM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_BOTH_Return
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_BOTH_Start
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_RX_Return
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_RX_Start
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_TX_Return
 *  SchM_ExitHook_Com_COM_EXCLUSIVE_AREA_TX_Start
 *  SchM_ExitHook_Dcm_DCM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Dcm_DCM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_Det_DET_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_Det_DET_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_0_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_1_Start
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Return
 *  SchM_ExitHook_EcuM_ECUM_EXCLUSIVE_AREA_2_Start
 *  SchM_ExitHook_Mcu_AtomAgcReg_Return
 *  SchM_ExitHook_Mcu_AtomAgcReg_Start
 *  SchM_ExitHook_Mcu_TomTgcReg_Return
 *  SchM_ExitHook_Mcu_TomTgcReg_Start
 *  SchM_ExitHook_PduR_PDUR_EXCLUSIVE_AREA_0_Return
 *  SchM_ExitHook_PduR_PDUR_EXCLUSIVE_AREA_0_Start
 *  SchM_Schedulable_CanSM_CanSM_MainFunction_Return
 *  SchM_Schedulable_CanSM_CanSM_MainFunction_Start
 *  SchM_Schedulable_CanTp_CanTp_MainFunction_Return
 *  SchM_Schedulable_CanTp_CanTp_MainFunction_Start
 *  SchM_Schedulable_Can_Can_MainFunction_BusOff_Return
 *  SchM_Schedulable_Can_Can_MainFunction_BusOff_Start
 *  SchM_Schedulable_Can_Can_MainFunction_Mode_Return
 *  SchM_Schedulable_Can_Can_MainFunction_Mode_Start
 *  SchM_Schedulable_Can_Can_MainFunction_Read_Return
 *  SchM_Schedulable_Can_Can_MainFunction_Read_Start
 *  SchM_Schedulable_Can_Can_MainFunction_Wakeup_Return
 *  SchM_Schedulable_Can_Can_MainFunction_Wakeup_Start
 *  SchM_Schedulable_Can_Can_MainFunction_Write_Return
 *  SchM_Schedulable_Can_Can_MainFunction_Write_Start
 *  SchM_Schedulable_ComM_ComM_MainFunction_0_Return
 *  SchM_Schedulable_ComM_ComM_MainFunction_0_Start
 *  SchM_Schedulable_Com_Com_MainFunctionRx_Return
 *  SchM_Schedulable_Com_Com_MainFunctionRx_Start
 *  SchM_Schedulable_Com_Com_MainFunctionTx_Return
 *  SchM_Schedulable_Com_Com_MainFunctionTx_Start
 *  SchM_Schedulable_Dcm_Dcm_MainFunction_Return
 *  SchM_Schedulable_Dcm_Dcm_MainFunction_Start
 *  SchM_Schedulable_EcuM_EcuM_MainFunction_Return
 *  SchM_Schedulable_EcuM_EcuM_MainFunction_Start
 *
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_HOOK_H
# define _RTE_HOOK_H

# include "Os.h" /* PRQA S 0828, 0883 */ /* MD_MSR_1.1_828, MD_Rte_Os */

# include "Rte_Type.h"
# include "Rte_Cfg.h"

# ifndef RTE_VFB_TRACE
#  define RTE_VFB_TRACE (0)
# endif

#endif /* _RTE_HOOK_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_Os:
     Reason:     This justification is used as summary justification for all deviations caused by the MICROSAR OS
                 which is for testing of the RTE. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
