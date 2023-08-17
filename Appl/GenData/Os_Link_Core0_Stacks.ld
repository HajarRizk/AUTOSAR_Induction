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
 *            Module: Os
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: Os_Link_Core0_Stacks.ld
 *   Generation Time: 2023-08-16 21:07:27
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

/**********************************************************************************************************************
 *  STACK SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_KERNEL_STACKS )
_OS_CORE0_STACKS_START = ABSOLUTE(.);

/* Stack: OsCore0_Error (1024 Byte) */
. = ALIGN(8);
_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_STACK_OSCORE0_ERROR_VAR_NOINIT)
. = ALIGN(8);
_OS_STACK_OSCORE0_ERROR_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;

/* Stack: OsCore0_Init (1024 Byte) */
. = ALIGN(8);
_OS_STACK_OSCORE0_INIT_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_STACK_OSCORE0_INIT_VAR_NOINIT)
. = ALIGN(8);
_OS_STACK_OSCORE0_INIT_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;

/* Stack: OsCore0_Kernel (1024 Byte) */
. = ALIGN(8);
_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_STACK_OSCORE0_KERNEL_VAR_NOINIT)
. = ALIGN(8);
_OS_STACK_OSCORE0_KERNEL_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;

/* Stack: OsCore0_Task_Prio0 (1024 Byte) */
. = ALIGN(8);
_OS_STACK_OSCORE0_TASK_PRIO0_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_STACK_OSCORE0_TASK_PRIO0_VAR_NOINIT)
. = ALIGN(8);
_OS_STACK_OSCORE0_TASK_PRIO0_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;

/* Stack: OsCore0_Task_Prio4294967295 (1024 Byte) */
. = ALIGN(8);
_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT)
. = ALIGN(8);
_OS_STACK_OSCORE0_TASK_PRIO4294967295_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;



_OS_CORE0_STACKS_END = ABSOLUTE(.);
_OS_CORE0_STACKS_END_ALIAS = (_OS_CORE0_STACKS_END & ~ 0xF0000000) | 0xD0000000;

#endif

#ifdef OS_LINK_KERNEL_STACKS
# undef OS_LINK_KERNEL_STACKS
#endif


