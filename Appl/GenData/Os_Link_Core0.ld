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
 *              File: Os_Link_Core0.ld
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
 *  CODE SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_INTVEC_CODE )
. = ALIGN(32);
_OS_INTVEC_CORE0_CODE_START = ABSOLUTE(.);
KEEP(*(*.OS_INTVEC_CORE0_CODE))
. = ALIGN(32);
_OS_INTVEC_CORE0_CODE_END = ABSOLUTE(.);
#endif

#if defined ( OS_LINK_EXCVEC_CODE )
. = ALIGN(32);
_OS_EXCVEC_CORE0_CODE_START = ABSOLUTE(.);
KEEP(*(*.OS_EXCVEC_CORE0_CODE))
. = ALIGN(32);
_OS_EXCVEC_CORE0_CODE_END = ABSOLUTE(.);
#endif

#if defined ( OS_LINK_CALLOUT_CODE )
. = ALIGN(8);
_OS_PeriodicTask_CODE_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_CODE)
. = ALIGN(8);
_OS_PeriodicTask_CODE_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_INTVEC_CODE
# undef OS_LINK_INTVEC_CODE
#endif

#ifdef OS_LINK_EXCVEC_CODE
# undef OS_LINK_EXCVEC_CODE
#endif

#ifdef OS_LINK_CALLOUT_CODE
# undef OS_LINK_CALLOUT_CODE
#endif


/**********************************************************************************************************************
 *  CONST SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_FAR )
. = ALIGN(8);
_OS_CORE0_CONST_START = ABSOLUTE(.);
*(*.OS_CORE0_CONST)
. = ALIGN(8);
_OS_CORE0_CONST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_KERNEL ) || defined ( OS_LINK_CONST_KERNEL_NEAR )
. = ALIGN(8);
_OS_CORE0_CONST_FAST_START = ABSOLUTE(.);
*(*.OS_CORE0_CONST_FAST)
. = ALIGN(8);
_OS_CORE0_CONST_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_INTVEC_CONST )
. = ALIGN(8);
_OS_INTVEC_CORE0_CONST_START = ABSOLUTE(.);
*(*.OS_INTVEC_CORE0_CONST)
. = ALIGN(8);
_OS_INTVEC_CORE0_CONST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_EXCVEC_CONST )
. = ALIGN(8);
_OS_EXCVEC_CORE0_CONST_START = ABSOLUTE(.);
*(*.OS_EXCVEC_CORE0_CONST)
. = ALIGN(8);
_OS_EXCVEC_CORE0_CONST_END = ABSOLUTE(.);
. += 16;
#endif


#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_FAR )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_CONST_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_CONST)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_CONST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_NEAR )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_CONST_FAST_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_CONST_FAST)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_CONST_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_APP ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_INIT )
















#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_FAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_FAR
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
#endif

#ifdef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_INIT
# undef OS_LINK_CONST_APP_SYSTEMAPPLICATION_OSCORE0_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_INITTASK ) || defined ( OS_LINK_CONST_TASK_INITTASK_FAR )
. = ALIGN(8);
_OS_InitTask_CONST_START = ABSOLUTE(.);
*(*.OS_InitTask_CONST)
. = ALIGN(8);
_OS_InitTask_CONST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_INITTASK ) || defined ( OS_LINK_CONST_TASK_INITTASK_NEAR )
. = ALIGN(8);
_OS_InitTask_CONST_FAST_START = ABSOLUTE(.);
*(*.OS_InitTask_CONST_FAST)
. = ALIGN(8);
_OS_InitTask_CONST_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_INITTASK ) || defined ( OS_LINK_CONST_TASK_INITTASK_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_INITTASK
# undef OS_LINK_CONST_TASK_INITTASK
#endif

#ifdef OS_LINK_CONST_TASK_INITTASK_FAR
# undef OS_LINK_CONST_TASK_INITTASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_INITTASK_NEAR
# undef OS_LINK_CONST_TASK_INITTASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_INITTASK_INIT
# undef OS_LINK_CONST_TASK_INITTASK_INIT
#endif



#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_PERIODICTASK ) || defined ( OS_LINK_CONST_TASK_PERIODICTASK_FAR )
. = ALIGN(8);
_OS_PeriodicTask_CONST_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_CONST)
. = ALIGN(8);
_OS_PeriodicTask_CONST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_PERIODICTASK ) || defined ( OS_LINK_CONST_TASK_PERIODICTASK_NEAR )
. = ALIGN(8);
_OS_PeriodicTask_CONST_FAST_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_CONST_FAST)
. = ALIGN(8);
_OS_PeriodicTask_CONST_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_TASK ) || defined ( OS_LINK_CONST_TASK_PERIODICTASK ) || defined ( OS_LINK_CONST_TASK_PERIODICTASK_INIT )













#endif

#ifdef OS_LINK_CONST_TASK_PERIODICTASK
# undef OS_LINK_CONST_TASK_PERIODICTASK
#endif

#ifdef OS_LINK_CONST_TASK_PERIODICTASK_FAR
# undef OS_LINK_CONST_TASK_PERIODICTASK_FAR
#endif

#ifdef OS_LINK_CONST_TASK_PERIODICTASK_NEAR
# undef OS_LINK_CONST_TASK_PERIODICTASK_NEAR
#endif

#ifdef OS_LINK_CONST_TASK_PERIODICTASK_INIT
# undef OS_LINK_CONST_TASK_PERIODICTASK_INIT
#endif



#ifdef OS_LINK_CONST
# undef OS_LINK_CONST
#endif

#ifdef OS_LINK_CONST_APP
# undef OS_LINK_CONST_APP
#endif

#ifdef OS_LINK_CONST_TASK
# undef OS_LINK_CONST_TASK
#endif

#ifdef OS_LINK_CONST_ISR
# undef OS_LINK_CONST_ISR
#endif

#ifdef OS_LINK_CONST_KERNEL
# undef OS_LINK_CONST_KERNEL
#endif

#ifdef OS_LINK_CONST_KERNEL_FAR
# undef OS_LINK_CONST_KERNEL_FAR
#endif

#ifdef OS_LINK_CONST_KERNEL_NEAR
# undef OS_LINK_CONST_KERNEL_NEAR
#endif

#ifdef OS_LINK_INTVEC_CONST
# undef OS_LINK_INTVEC_CONST
#endif

#ifdef OS_LINK_EXCVEC_CONST
# undef OS_LINK_EXCVEC_CONST
#endif


/**********************************************************************************************************************
 *  VAR SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_INIT )
. = ALIGN(8);
_OS_CORE0_VAR_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR)
. = ALIGN(8);
_OS_CORE0_VAR_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_CORE0_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR_NOINIT)
. = ALIGN(8);
_OS_CORE0_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT )
. = ALIGN(8);
_OS_CORE0_VAR_FAST_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR_FAST)
. = ALIGN(8);
_OS_CORE0_VAR_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_CORE0_VAR_FAST_NOINIT_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR_FAST_NOINIT)
. = ALIGN(8);
_OS_CORE0_VAR_FAST_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_CORE0_VAR_NOCACHE_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR_NOCACHE)
. = ALIGN(8);
_OS_CORE0_VAR_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_CORE0_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_CORE0_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_CORE0_VAR_FAST_NOCACHE_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR_FAST_NOCACHE)
. = ALIGN(8);
_OS_CORE0_VAR_FAST_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_CORE0_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_FAR )
. = ALIGN(8);
_OS_PUBLIC_CORE0_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_PUBLIC_CORE0_VAR_NOINIT)
. = ALIGN(8);
_OS_PUBLIC_CORE0_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_KERNEL_TRACE ) || defined ( OS_LINK_KERNEL_TRACE_NEAR )
. = ALIGN(8);
_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_START = ABSOLUTE(.);
*(*.OS_PUBLIC_CORE0_VAR_FAST_NOINIT)
. = ALIGN(8);
_OS_PUBLIC_CORE0_VAR_FAST_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_FAR )
. = ALIGN(8);
_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_BARRIER_CORE0_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_KERNEL_BARRIERS ) || defined ( OS_LINK_KERNEL_BARRIERS_NEAR )
. = ALIGN(8);
_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_BARRIER_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_FAR )
. = ALIGN(8);
_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_CORESTATUS_CORE0_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_KERNEL_CORESTATUS ) || defined ( OS_LINK_KERNEL_CORESTATUS_NEAR )
. = ALIGN(8);
_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_CORESTATUS_CORE0_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif


#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_ALL_START = ABSOLUTE(.);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_NOINIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_ZERO_INIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_FAST)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_FAST_NOINIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOCACHE_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_NOCACHE)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_APP ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0 ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_FAST_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
. = ALIGN(8);
_OS_SystemApplication_OsCore0_VAR_ALL_END = ABSOLUTE(.);
. += 16;
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_APP_SYSTEMAPPLICATION_OSCORE0_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_INITTASK
. = ALIGN(8);
_OS_InitTask_VAR_ALL_START = ABSOLUTE(.);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR)
. = ALIGN(8);
_OS_InitTask_VAR_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_InitTask_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_NOINIT)
. = ALIGN(8);
_OS_InitTask_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_ZERO_INIT)
. = ALIGN(8);
_OS_InitTask_VAR_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_FAST_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_FAST)
. = ALIGN(8);
_OS_InitTask_VAR_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOINIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_FAST_NOINIT)
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_FAST_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_FAST_ZERO_INIT)
. = ALIGN(8);
_OS_InitTask_VAR_FAST_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_NOCACHE_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_NOCACHE)
. = ALIGN(8);
_OS_InitTask_VAR_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_InitTask_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_InitTask_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_InitTask_VAR_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOCACHE_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_FAST_NOCACHE)
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_INITTASK ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_InitTask_VAR_FAST_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK
. = ALIGN(8);
_OS_InitTask_VAR_ALL_END = ABSOLUTE(.);
. += 16;
# undef OS_LINK_VAR_TASK_INITTASK
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR
# undef OS_LINK_VAR_TASK_INITTASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR
# undef OS_LINK_VAR_TASK_INITTASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_INITTASK_NEAR_NOCACHE_ZERO_INIT
#endif



#ifdef OS_LINK_VAR_TASK_PERIODICTASK
. = ALIGN(8);
_OS_PeriodicTask_VAR_ALL_START = ABSOLUTE(.);
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR)
. = ALIGN(8);
_OS_PeriodicTask_VAR_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_NOINIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_ZERO_INIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_FAST)
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOINIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_FAST_NOINIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_FAST_ZERO_INIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOCACHE_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_NOCACHE)
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOCACHE_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_FAST_NOCACHE)
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_TASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_PeriodicTask_VAR_FAST_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_PeriodicTask_VAR_FAST_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK
. = ALIGN(8);
_OS_PeriodicTask_VAR_ALL_END = ABSOLUTE(.);
. += 16;
# undef OS_LINK_VAR_TASK_PERIODICTASK
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_FAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_TASK_PERIODICTASK_NEAR_NOCACHE_ZERO_INIT
#endif


#ifdef OS_LINK_VAR
# undef OS_LINK_VAR
#endif

#ifdef OS_LINK_VAR_APP
# undef OS_LINK_VAR_APP
#endif

#ifdef OS_LINK_VAR_TASK
# undef OS_LINK_VAR_TASK
#endif

#ifdef OS_LINK_VAR_ISR
# undef OS_LINK_VAR_ISR
#endif

#ifdef OS_LINK_KERNEL_TRACE
# undef OS_LINK_KERNEL_TRACE
#endif

#ifdef OS_LINK_KERNEL_TRACE_FAR
# undef OS_LINK_KERNEL_TRACE_FAR
#endif

#ifdef OS_LINK_KERNEL_TRACE_NEAR
# undef OS_LINK_KERNEL_TRACE_NEAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS
# undef OS_LINK_KERNEL_BARRIERS
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_FAR
# undef OS_LINK_KERNEL_BARRIERS_FAR
#endif

#ifdef OS_LINK_KERNEL_BARRIERS_NEAR
# undef OS_LINK_KERNEL_BARRIERS_NEAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS
# undef OS_LINK_KERNEL_CORESTATUS
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_FAR
# undef OS_LINK_KERNEL_CORESTATUS_FAR
#endif

#ifdef OS_LINK_KERNEL_CORESTATUS_NEAR
# undef OS_LINK_KERNEL_CORESTATUS_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL
# undef OS_LINK_VAR_KERNEL
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR
# undef OS_LINK_VAR_KERNEL_FAR
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE
# undef OS_LINK_VAR_KERNEL_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR
# undef OS_LINK_VAR_KERNEL_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_CACHE_INIT
#endif


