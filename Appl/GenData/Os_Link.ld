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
 *              File: Os_Link.ld
 *   Generation Time: 2023-08-16 18:19:40
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
 *  CODE SECTIONS  (HighTec)
 *********************************************************************************************************************/

#if defined ( OS_LINK_CODE )
. = ALIGN(8);
_OS_CODE_START = ABSOLUTE(.);
*(*.OS_CODE)
. = ALIGN(8);
_OS_CODE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_INTVEC_CODE )
. = ALIGN(32);
_OS_INTVEC_CODE_START = ABSOLUTE(.);
KEEP(*(*.OS_INTVEC_CODE))
. = ALIGN(32);
_OS_INTVEC_CODE_END = ABSOLUTE(.);
#endif

#if defined ( OS_LINK_CALLOUT_CODE )
. = ALIGN(8);
_OS_ERRORHOOK_CODE_START = ABSOLUTE(.);
*(*.OS_ERRORHOOK_CODE)
. = ALIGN(8);
_OS_ERRORHOOK_CODE_END = ABSOLUTE(.);
. += 16;
. = ALIGN(8);
_OS_OS_COREINITHOOK_CODE_START = ABSOLUTE(.);
*(*.OS_OS_COREINITHOOK_CODE)
. = ALIGN(8);
_OS_OS_COREINITHOOK_CODE_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_CODE
# undef OS_LINK_CODE
#endif

#ifdef OS_LINK_INTVEC_CODE
# undef OS_LINK_INTVEC_CODE
#endif

#ifdef OS_LINK_CALLOUT_CODE
# undef OS_LINK_CALLOUT_CODE
#endif


/**********************************************************************************************************************
 *  CONST SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_GLOBALSHARED ) || defined ( OS_LINK_CONST_GLOBALSHARED_FAR )
. = ALIGN(8);
_OS_CONST_START = ABSOLUTE(.);
*(*.OS_CONST)
. = ALIGN(8);
_OS_CONST_END = ABSOLUTE(.);
. += 16;
. = ALIGN(8);
_OS_GLOBALSHARED_CONST_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_CONST)
. = ALIGN(8);
_OS_GLOBALSHARED_CONST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_GLOBALSHARED ) || defined ( OS_LINK_CONST_GLOBALSHARED_NEAR )
. = ALIGN(8);
_OS_CONST_FAST_START = ABSOLUTE(.);
*(*.OS_CONST_FAST)
. = ALIGN(8);
_OS_CONST_FAST_END = ABSOLUTE(.);
. += 16;
. = ALIGN(8);
_OS_GLOBALSHARED_CONST_FAST_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_CONST_FAST)
. = ALIGN(8);
_OS_GLOBALSHARED_CONST_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_GLOBALSHARED ) || defined ( OS_LINK_CONST_GLOBALSHARED_NEAR ) || defined ( OS_LINK_CONST_GLOBALSHARED_NEAR_INIT )


#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_GLOBALSHARED ) || defined ( OS_LINK_CONST_GLOBALSHARED_NEAR ) || defined ( OS_LINK_CONST_GLOBALSHARED_NEAR_ZERO_INIT )


#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_GLOBALSHARED ) || defined ( OS_LINK_CONST_GLOBALSHARED_FAR ) || defined ( OS_LINK_CONST_GLOBALSHARED_FAR_INIT )


#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_GLOBALSHARED ) || defined ( OS_LINK_CONST_GLOBALSHARED_FAR ) || defined ( OS_LINK_CONST_GLOBALSHARED_FAR_ZERO_INIT )


#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_NEAR ) || defined ( OS_LINK_CONST_NEAR_INIT )

#endif

#if defined ( OS_LINK_CONST ) || defined ( OS_LINK_CONST_FAR ) || defined ( OS_LINK_CONST_FAR_INIT )

#endif

#if defined ( OS_LINK_INTVEC_CONST )
. = ALIGN(8);
_OS_INTVEC_CONST_START = ABSOLUTE(.);
*(*.OS_INTVEC_CONST)
. = ALIGN(8);
_OS_INTVEC_CONST_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_CONST
# undef OS_LINK_CONST
#endif

#ifdef OS_LINK_CONST_GLOBALSHARED
# undef OS_LINK_CONST_GLOBALSHARED
#endif

#ifdef OS_LINK_CONST_GLOBALSHARED_NEAR
# undef OS_LINK_CONST_GLOBALSHARED_NEAR
#endif

#ifdef OS_LINK_CONST_GLOBALSHARED_FAR
# undef OS_LINK_CONST_GLOBALSHARED_FAR
#endif

#ifdef OS_LINK_CONST_GLOBALSHARED_NEAR_INIT
# undef OS_LINK_CONST_GLOBALSHARED_NEAR_INIT
#endif

#ifdef OS_LINK_CONST_GLOBALSHARED_FAR_INIT
# undef OS_LINK_CONST_GLOBALSHARED_FAR_INIT
#endif

#ifdef OS_LINK_CONST_GLOBALSHARED_NEAR_ZERO_INIT
# undef OS_LINK_CONST_GLOBALSHARED_NEAR_ZERO_INIT
#endif

#ifdef OS_LINK_CONST_GLOBALSHARED_FAR_ZERO_INIT
# undef OS_LINK_CONST_GLOBALSHARED_FAR_ZERO_INIT
#endif

#ifdef OS_LINK_CONST_NEAR_INIT
# undef OS_LINK_CONST_NEAR_INIT
#endif

#ifdef OS_LINK_CONST_FAR_INIT
# undef OS_LINK_CONST_FAR_INIT
#endif

#ifdef OS_LINK_INTVEC_CONST
# undef OS_LINK_INTVEC_CONST
#endif


/**********************************************************************************************************************
 *  KERNEL VAR SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_INIT )
. = ALIGN(8);
_OS_VAR_NOCACHE_START = ABSOLUTE(.);
*(*.OS_VAR_NOCACHE)
. = ALIGN(8);
_OS_VAR_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_FAR ) || defined ( OS_LINK_VAR_KERNEL_FAR_NOINIT )
. = ALIGN(8);
_OS_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_INIT )
. = ALIGN(8);
_OS_VAR_FAST_NOCACHE_START = ABSOLUTE(.);
*(*.OS_VAR_FAST_NOCACHE)
. = ALIGN(8);
_OS_VAR_FAST_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_KERNEL ) || defined ( OS_LINK_VAR_KERNEL_NEAR ) || defined ( OS_LINK_VAR_KERNEL_NEAR_NOINIT )
. = ALIGN(8);
_OS_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_VAR_KERNEL
# undef OS_LINK_VAR_KERNEL
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR
# undef OS_LINK_VAR_KERNEL_FAR
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_INIT
# undef OS_LINK_VAR_KERNEL_FAR_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_FAR_NOINIT
# undef OS_LINK_VAR_KERNEL_FAR_NOINIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR
# undef OS_LINK_VAR_KERNEL_NEAR
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_INIT
# undef OS_LINK_VAR_KERNEL_NEAR_INIT
#endif

#ifdef OS_LINK_VAR_KERNEL_NEAR_NOINIT
# undef OS_LINK_VAR_KERNEL_NEAR_NOINIT
#endif


/**********************************************************************************************************************
 *  GLOBALSHARED VAR SECTIONS
 *********************************************************************************************************************/

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_CACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOCACHE_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_NOCACHE)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_CACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOINIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_NOINIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_CACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_ZERO_INIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_FAST)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOCACHE_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_FAST_NOCACHE)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOCACHE_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_NOINIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOINIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_FAST_NOINIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_NOINIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOCACHE_NOINIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_FAST_NOCACHE_NOINIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOCACHE_NOINIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_ZERO_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_FAST_ZERO_INIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#if defined ( OS_LINK_VAR ) || defined ( OS_LINK_VAR_GLOBALSHARED ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE ) || defined ( OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_ZERO_INIT )
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOCACHE_ZERO_INIT_START = ABSOLUTE(.);
*(*.OS_GLOBALSHARED_VAR_FAST_NOCACHE_ZERO_INIT)
. = ALIGN(8);
_OS_GLOBALSHARED_VAR_FAST_NOCACHE_ZERO_INIT_END = ABSOLUTE(.);
. += 16;
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED
# undef OS_LINK_VAR_GLOBALSHARED
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR
# undef OS_LINK_VAR_GLOBALSHARED_NEAR
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_INIT
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_NOINIT
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_INIT
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_GLOBALSHARED_NEAR_NOCACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR
# undef OS_LINK_VAR_GLOBALSHARED_FAR
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE
# undef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_INIT
# undef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_INIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_NOINIT
# undef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_ZERO_INIT
# undef OS_LINK_VAR_GLOBALSHARED_FAR_CACHE_ZERO_INIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE
# undef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_INIT
# undef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_INIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_NOINIT
# undef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_NOINIT
#endif

#ifdef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_ZERO_INIT
# undef OS_LINK_VAR_GLOBALSHARED_FAR_NOCACHE_ZERO_INIT
#endif


/**********************************************************************************************************************
 *  CORESHARED VAR SECTIONS
 *********************************************************************************************************************/

#ifdef OS_LINK_VAR_CORESHARED
# undef OS_LINK_VAR_CORESHARED
#endif


/**********************************************************************************************************************
 *  APPSHARED VAR SECTIONS
 *********************************************************************************************************************/

#ifdef OS_LINK_VAR_APPSHARED
# undef OS_LINK_VAR_APPSHARED
#endif

#ifdef OS_LINK_VAR
# undef OS_LINK_VAR
#endif


