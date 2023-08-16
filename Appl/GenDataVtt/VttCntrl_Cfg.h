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
 *            Module: VTTCntrl
 *           Program: MSR BAC 4.x (MSR_Bmw_SLP4)
 *          Customer: Delphi Deutschland GmbH
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: TC-397 B-Step
 *    License Scope : The usage is restricted to CBD1800285_D02
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: VttCntrl_Cfg.h
 *   Generation Time: 2023-08-16 18:17:03
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


#if !defined(VTTCNTRL_CFG_H)
# define VTTCNTRL_CFG_H  

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
  
 /**********************************************************************************************************************
*  GLOBAL CONSTANT MACROS
*********************************************************************************************************************/

#define VTTCNTRL_MODULE_VTTADC_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTCAN_EXISTS    STD_ON 
#define VTTCNTRL_MODULE_VTTCRYPTO_EXISTS STD_OFF 
#define VTTCNTRL_MODULE_VTTFR_EXISTS     STD_OFF 
#define VTTCNTRL_MODULE_VTTLIN_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTETH_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTMCU_EXISTS    STD_ON 
#define VTTCNTRL_MODULE_VTTDIO_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTWDG_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTFLS_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTGPT_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTPWM_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTEEP_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTICU_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTSPI_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_CANTRCV_EXISTS   STD_OFF 
#define VTTCNTRL_MODULE_LINTRCV_EXISTS   STD_OFF 
#define VTTCNTRL_MODULE_FRTRCV_EXISTS    STD_OFF 
#define VTTCNTRL_MODULE_VTTOS_EXISTS     STD_ON 
#define VTTCNTRL_MODULE_VTTPORT_EXISTS   STD_OFF 


#define VTTCNTRL_USERCALLOUT_ONSTATECHANGE STD_OFF

#define IRQ_UNHANDLED (-1) 
#define IRQ_COUNT     (474)

#define IRQ_SystemTimer (0)
#define IRQ_RESERVED_0 (1)
#define IRQ_RESERVED_1 (2)
#define IRQ_RESERVED_2 (3)
#define IRQ_RESERVED_3 (4)
#define IRQ_CanIsrTx_0 (5)
#define IRQ_CanIsrRx_0 (6)
#define IRQ_CanIsrErr_0 (7)
#define IRQ_CanIsrWakeup_0 (8)
#define IRQ_CanIsrTx_1 (9)
#define IRQ_CanIsrRx_1 (10)
#define IRQ_CanIsrErr_1 (11)
#define IRQ_CanIsrWakeup_1 (12)
#define IRQ_CanIsrTx_2 (13)
#define IRQ_CanIsrRx_2 (14)
#define IRQ_CanIsrErr_2 (15)
#define IRQ_CanIsrWakeup_2 (16)
#define IRQ_CanIsrTx_3 (17)
#define IRQ_CanIsrRx_3 (18)
#define IRQ_CanIsrErr_3 (19)
#define IRQ_CanIsrWakeup_3 (20)
#define IRQ_CanIsrTx_4 (21)
#define IRQ_CanIsrRx_4 (22)
#define IRQ_CanIsrErr_4 (23)
#define IRQ_CanIsrWakeup_4 (24)
#define IRQ_CanIsrTx_5 (25)
#define IRQ_CanIsrRx_5 (26)
#define IRQ_CanIsrErr_5 (27)
#define IRQ_CanIsrWakeup_5 (28)
#define IRQ_CanIsrTx_6 (29)
#define IRQ_CanIsrRx_6 (30)
#define IRQ_CanIsrErr_6 (31)
#define IRQ_CanIsrWakeup_6 (32)
#define IRQ_CanIsrTx_7 (33)
#define IRQ_CanIsrRx_7 (34)
#define IRQ_CanIsrErr_7 (35)
#define IRQ_CanIsrWakeup_7 (36)
#define IRQ_CanIsrTx_8 (37)
#define IRQ_CanIsrRx_8 (38)
#define IRQ_CanIsrErr_8 (39)
#define IRQ_CanIsrWakeup_8 (40)
#define IRQ_CanIsrTx_9 (41)
#define IRQ_CanIsrRx_9 (42)
#define IRQ_CanIsrErr_9 (43)
#define IRQ_CanIsrWakeup_9 (44)
#define IRQ_CanIsrTx_10 (45)
#define IRQ_CanIsrRx_10 (46)
#define IRQ_CanIsrErr_10 (47)
#define IRQ_CanIsrWakeup_10 (48)
#define IRQ_CanIsrTx_11 (49)
#define IRQ_CanIsrRx_11 (50)
#define IRQ_CanIsrErr_11 (51)
#define IRQ_CanIsrWakeup_11 (52)
#define IRQ_CanIsrTx_12 (53)
#define IRQ_CanIsrRx_12 (54)
#define IRQ_CanIsrErr_12 (55)
#define IRQ_CanIsrWakeup_12 (56)
#define IRQ_CanIsrTx_13 (57)
#define IRQ_CanIsrRx_13 (58)
#define IRQ_CanIsrErr_13 (59)
#define IRQ_CanIsrWakeup_13 (60)
#define IRQ_CanIsrTx_14 (61)
#define IRQ_CanIsrRx_14 (62)
#define IRQ_CanIsrErr_14 (63)
#define IRQ_CanIsrWakeup_14 (64)
#define IRQ_CanIsrTx_15 (65)
#define IRQ_CanIsrRx_15 (66)
#define IRQ_CanIsrErr_15 (67)
#define IRQ_CanIsrWakeup_15 (68)
#define IRQ_LinIsr_0 (69)
#define IRQ_LinIsr_1 (70)
#define IRQ_LinIsr_2 (71)
#define IRQ_LinIsr_3 (72)
#define IRQ_LinIsr_4 (73)
#define IRQ_LinIsr_5 (74)
#define IRQ_LinIsr_6 (75)
#define IRQ_LinIsr_7 (76)
#define IRQ_LinIsr_8 (77)
#define IRQ_LinIsr_9 (78)
#define IRQ_LinIsr_10 (79)
#define IRQ_LinIsr_11 (80)
#define IRQ_LinIsr_12 (81)
#define IRQ_LinIsr_13 (82)
#define IRQ_LinIsr_14 (83)
#define IRQ_LinIsr_15 (84)
#define IRQ_LinIsr_16 (85)
#define IRQ_LinIsr_17 (86)
#define IRQ_LinIsr_18 (87)
#define IRQ_LinIsr_19 (88)
#define IRQ_LinIsr_20 (89)
#define IRQ_LinIsr_21 (90)
#define IRQ_LinIsr_22 (91)
#define IRQ_LinIsr_23 (92)
#define IRQ_LinIsr_24 (93)
#define IRQ_LinIsr_25 (94)
#define IRQ_LinIsr_26 (95)
#define IRQ_LinIsr_27 (96)
#define IRQ_LinIsr_28 (97)
#define IRQ_LinIsr_29 (98)
#define IRQ_LinIsr_30 (99)
#define IRQ_LinIsr_31 (100)
#define IRQ_EthIsrRx_0 (101)
#define IRQ_EthIsrTx_0 (102)
#define IRQ_EthIsrRx_1 (103)
#define IRQ_EthIsrTx_1 (104)
#define IRQ_EthIsrRx_2 (105)
#define IRQ_EthIsrTx_2 (106)
#define IRQ_EthIsrRx_3 (107)
#define IRQ_EthIsrTx_3 (108)
#define IRQ_EthIsrRx_4 (109)
#define IRQ_EthIsrTx_4 (110)
#define IRQ_EthIsrRx_5 (111)
#define IRQ_EthIsrTx_5 (112)
#define IRQ_EthIsrRx_6 (113)
#define IRQ_EthIsrTx_6 (114)
#define IRQ_EthIsrRx_7 (115)
#define IRQ_EthIsrTx_7 (116)
#define IRQ_Fr_IrqLine0 (117)
#define IRQ_Fr_IrqTimer0 (118)
#define IRQ_Fr_IrqLine1 (119)
#define IRQ_Fr_IrqLine0_1 (120)
#define IRQ_Fr_IrqTimer0_1 (121)
#define IRQ_Fr_IrqLine1_1 (122)
#define IRQ_VttSysVarIsr_0 (123)
#define IRQ_GptIsr_0 (124)
#define IRQ_GptIsr_1 (125)
#define IRQ_GptIsr_2 (126)
#define IRQ_GptIsr_3 (127)
#define IRQ_GptIsr_4 (128)
#define IRQ_GptIsr_5 (129)
#define IRQ_GptIsr_6 (130)
#define IRQ_GptIsr_7 (131)
#define IRQ_GptIsr_8 (132)
#define IRQ_GptIsr_9 (133)
#define IRQ_GptIsr_10 (134)
#define IRQ_GptIsr_11 (135)
#define IRQ_GptIsr_12 (136)
#define IRQ_GptIsr_13 (137)
#define IRQ_GptIsr_14 (138)
#define IRQ_GptIsr_15 (139)
#define IRQ_GptIsr_16 (140)
#define IRQ_GptIsr_17 (141)
#define IRQ_GptIsr_18 (142)
#define IRQ_GptIsr_19 (143)
#define IRQ_GptIsr_20 (144)
#define IRQ_GptIsr_21 (145)
#define IRQ_GptIsr_22 (146)
#define IRQ_GptIsr_23 (147)
#define IRQ_GptIsr_24 (148)
#define IRQ_GptIsr_25 (149)
#define IRQ_GptIsr_26 (150)
#define IRQ_GptIsr_27 (151)
#define IRQ_GptIsr_28 (152)
#define IRQ_GptIsr_29 (153)
#define IRQ_GptIsr_30 (154)
#define IRQ_GptIsr_31 (155)
#define IRQ_GptIsr_32 (156)
#define IRQ_GptIsr_33 (157)
#define IRQ_GptIsr_34 (158)
#define IRQ_GptIsr_35 (159)
#define IRQ_GptIsr_36 (160)
#define IRQ_GptIsr_37 (161)
#define IRQ_GptIsr_38 (162)
#define IRQ_GptIsr_39 (163)
#define IRQ_GptIsr_40 (164)
#define IRQ_GptIsr_41 (165)
#define IRQ_GptIsr_42 (166)
#define IRQ_GptIsr_43 (167)
#define IRQ_GptIsr_44 (168)
#define IRQ_GptIsr_45 (169)
#define IRQ_GptIsr_46 (170)
#define IRQ_GptIsr_47 (171)
#define IRQ_GptIsr_48 (172)
#define IRQ_GptIsr_49 (173)
#define IRQ_AdcIsr_0 (174)
#define IRQ_AdcIsr_1 (175)
#define IRQ_AdcIsr_2 (176)
#define IRQ_AdcIsr_3 (177)
#define IRQ_AdcIsr_4 (178)
#define IRQ_AdcIsr_5 (179)
#define IRQ_AdcIsr_6 (180)
#define IRQ_AdcIsr_7 (181)
#define IRQ_AdcIsr_8 (182)
#define IRQ_AdcIsr_9 (183)
#define IRQ_AdcIsr_10 (184)
#define IRQ_AdcIsr_11 (185)
#define IRQ_AdcIsr_12 (186)
#define IRQ_AdcIsr_13 (187)
#define IRQ_AdcIsr_14 (188)
#define IRQ_AdcIsr_15 (189)
#define IRQ_AdcIsr_16 (190)
#define IRQ_AdcIsr_17 (191)
#define IRQ_AdcIsr_18 (192)
#define IRQ_AdcIsr_19 (193)
#define IRQ_AdcIsr_20 (194)
#define IRQ_AdcIsr_21 (195)
#define IRQ_AdcIsr_22 (196)
#define IRQ_AdcIsr_23 (197)
#define IRQ_AdcIsr_24 (198)
#define IRQ_AdcIsr_25 (199)
#define IRQ_AdcIsr_26 (200)
#define IRQ_AdcIsr_27 (201)
#define IRQ_AdcIsr_28 (202)
#define IRQ_AdcIsr_29 (203)
#define IRQ_AdcIsr_30 (204)
#define IRQ_AdcIsr_31 (205)
#define IRQ_AdcIsr_32 (206)
#define IRQ_AdcIsr_33 (207)
#define IRQ_AdcIsr_34 (208)
#define IRQ_AdcIsr_35 (209)
#define IRQ_AdcIsr_36 (210)
#define IRQ_AdcIsr_37 (211)
#define IRQ_AdcIsr_38 (212)
#define IRQ_AdcIsr_39 (213)
#define IRQ_AdcIsr_40 (214)
#define IRQ_AdcIsr_41 (215)
#define IRQ_AdcIsr_42 (216)
#define IRQ_AdcIsr_43 (217)
#define IRQ_AdcIsr_44 (218)
#define IRQ_AdcIsr_45 (219)
#define IRQ_AdcIsr_46 (220)
#define IRQ_AdcIsr_47 (221)
#define IRQ_AdcIsr_48 (222)
#define IRQ_AdcIsr_49 (223)
#define IRQ_IcuIsr_0 (224)
#define IRQ_IcuIsr_1 (225)
#define IRQ_IcuIsr_2 (226)
#define IRQ_IcuIsr_3 (227)
#define IRQ_IcuIsr_4 (228)
#define IRQ_IcuIsr_5 (229)
#define IRQ_IcuIsr_6 (230)
#define IRQ_IcuIsr_7 (231)
#define IRQ_IcuIsr_8 (232)
#define IRQ_IcuIsr_9 (233)
#define IRQ_IcuIsr_10 (234)
#define IRQ_IcuIsr_11 (235)
#define IRQ_IcuIsr_12 (236)
#define IRQ_IcuIsr_13 (237)
#define IRQ_IcuIsr_14 (238)
#define IRQ_IcuIsr_15 (239)
#define IRQ_IcuIsr_16 (240)
#define IRQ_IcuIsr_17 (241)
#define IRQ_IcuIsr_18 (242)
#define IRQ_IcuIsr_19 (243)
#define IRQ_IcuIsr_20 (244)
#define IRQ_IcuIsr_21 (245)
#define IRQ_IcuIsr_22 (246)
#define IRQ_IcuIsr_23 (247)
#define IRQ_IcuIsr_24 (248)
#define IRQ_IcuIsr_25 (249)
#define IRQ_IcuIsr_26 (250)
#define IRQ_IcuIsr_27 (251)
#define IRQ_IcuIsr_28 (252)
#define IRQ_IcuIsr_29 (253)
#define IRQ_IcuIsr_30 (254)
#define IRQ_IcuIsr_31 (255)
#define IRQ_IcuIsr_32 (256)
#define IRQ_IcuIsr_33 (257)
#define IRQ_IcuIsr_34 (258)
#define IRQ_IcuIsr_35 (259)
#define IRQ_IcuIsr_36 (260)
#define IRQ_IcuIsr_37 (261)
#define IRQ_IcuIsr_38 (262)
#define IRQ_IcuIsr_39 (263)
#define IRQ_IcuIsr_40 (264)
#define IRQ_IcuIsr_41 (265)
#define IRQ_IcuIsr_42 (266)
#define IRQ_IcuIsr_43 (267)
#define IRQ_IcuIsr_44 (268)
#define IRQ_IcuIsr_45 (269)
#define IRQ_IcuIsr_46 (270)
#define IRQ_IcuIsr_47 (271)
#define IRQ_IcuIsr_48 (272)
#define IRQ_IcuIsr_49 (273)
#define IRQ_PwmIsr_0 (274)
#define IRQ_PwmIsr_1 (275)
#define IRQ_PwmIsr_2 (276)
#define IRQ_PwmIsr_3 (277)
#define IRQ_PwmIsr_4 (278)
#define IRQ_PwmIsr_5 (279)
#define IRQ_PwmIsr_6 (280)
#define IRQ_PwmIsr_7 (281)
#define IRQ_PwmIsr_8 (282)
#define IRQ_PwmIsr_9 (283)
#define IRQ_PwmIsr_10 (284)
#define IRQ_PwmIsr_11 (285)
#define IRQ_PwmIsr_12 (286)
#define IRQ_PwmIsr_13 (287)
#define IRQ_PwmIsr_14 (288)
#define IRQ_PwmIsr_15 (289)
#define IRQ_PwmIsr_16 (290)
#define IRQ_PwmIsr_17 (291)
#define IRQ_PwmIsr_18 (292)
#define IRQ_PwmIsr_19 (293)
#define IRQ_PwmIsr_20 (294)
#define IRQ_PwmIsr_21 (295)
#define IRQ_PwmIsr_22 (296)
#define IRQ_PwmIsr_23 (297)
#define IRQ_PwmIsr_24 (298)
#define IRQ_PwmIsr_25 (299)
#define IRQ_PwmIsr_26 (300)
#define IRQ_PwmIsr_27 (301)
#define IRQ_PwmIsr_28 (302)
#define IRQ_PwmIsr_29 (303)
#define IRQ_PwmIsr_30 (304)
#define IRQ_PwmIsr_31 (305)
#define IRQ_PwmIsr_32 (306)
#define IRQ_PwmIsr_33 (307)
#define IRQ_PwmIsr_34 (308)
#define IRQ_PwmIsr_35 (309)
#define IRQ_PwmIsr_36 (310)
#define IRQ_PwmIsr_37 (311)
#define IRQ_PwmIsr_38 (312)
#define IRQ_PwmIsr_39 (313)
#define IRQ_PwmIsr_40 (314)
#define IRQ_PwmIsr_41 (315)
#define IRQ_PwmIsr_42 (316)
#define IRQ_PwmIsr_43 (317)
#define IRQ_PwmIsr_44 (318)
#define IRQ_PwmIsr_45 (319)
#define IRQ_PwmIsr_46 (320)
#define IRQ_PwmIsr_47 (321)
#define IRQ_PwmIsr_48 (322)
#define IRQ_PwmIsr_49 (323)
#define IRQ_SpiIsrTx_0 (324)
#define IRQ_SpiIsrRx_0 (325)
#define IRQ_SpiIsrTx_1 (326)
#define IRQ_SpiIsrRx_1 (327)
#define IRQ_SpiIsrTx_2 (328)
#define IRQ_SpiIsrRx_2 (329)
#define IRQ_SpiIsrTx_3 (330)
#define IRQ_SpiIsrRx_3 (331)
#define IRQ_SpiIsrTx_4 (332)
#define IRQ_SpiIsrRx_4 (333)
#define IRQ_SpiIsrTx_5 (334)
#define IRQ_SpiIsrRx_5 (335)
#define IRQ_SpiIsrTx_6 (336)
#define IRQ_SpiIsrRx_6 (337)
#define IRQ_SpiIsrTx_7 (338)
#define IRQ_SpiIsrRx_7 (339)
#define IRQ_SpiIsrTx_8 (340)
#define IRQ_SpiIsrRx_8 (341)
#define IRQ_SpiIsrTx_9 (342)
#define IRQ_SpiIsrRx_9 (343)
#define IRQ_SpiIsrTx_10 (344)
#define IRQ_SpiIsrRx_10 (345)
#define IRQ_SpiIsrTx_11 (346)
#define IRQ_SpiIsrRx_11 (347)
#define IRQ_SpiIsrTx_12 (348)
#define IRQ_SpiIsrRx_12 (349)
#define IRQ_SpiIsrTx_13 (350)
#define IRQ_SpiIsrRx_13 (351)
#define IRQ_SpiIsrTx_14 (352)
#define IRQ_SpiIsrRx_14 (353)
#define IRQ_SpiIsrTx_15 (354)
#define IRQ_SpiIsrRx_15 (355)
#define IRQ_SpiIsrTx_16 (356)
#define IRQ_SpiIsrRx_16 (357)
#define IRQ_SpiIsrTx_17 (358)
#define IRQ_SpiIsrRx_17 (359)
#define IRQ_SpiIsrTx_18 (360)
#define IRQ_SpiIsrRx_18 (361)
#define IRQ_SpiIsrTx_19 (362)
#define IRQ_SpiIsrRx_19 (363)
#define IRQ_SpiIsrTx_20 (364)
#define IRQ_SpiIsrRx_20 (365)
#define IRQ_SpiIsrTx_21 (366)
#define IRQ_SpiIsrRx_21 (367)
#define IRQ_SpiIsrTx_22 (368)
#define IRQ_SpiIsrRx_22 (369)
#define IRQ_SpiIsrTx_23 (370)
#define IRQ_SpiIsrRx_23 (371)
#define IRQ_SpiIsrTx_24 (372)
#define IRQ_SpiIsrRx_24 (373)
#define IRQ_SpiIsrTx_25 (374)
#define IRQ_SpiIsrRx_25 (375)
#define IRQ_SpiIsrTx_26 (376)
#define IRQ_SpiIsrRx_26 (377)
#define IRQ_SpiIsrTx_27 (378)
#define IRQ_SpiIsrRx_27 (379)
#define IRQ_SpiIsrTx_28 (380)
#define IRQ_SpiIsrRx_28 (381)
#define IRQ_SpiIsrTx_29 (382)
#define IRQ_SpiIsrRx_29 (383)
#define IRQ_SpiIsrTx_30 (384)
#define IRQ_SpiIsrRx_30 (385)
#define IRQ_SpiIsrTx_31 (386)
#define IRQ_SpiIsrRx_31 (387)
#define IRQ_SpiIsrTx_32 (388)
#define IRQ_SpiIsrRx_32 (389)
#define IRQ_SpiIsrTx_33 (390)
#define IRQ_SpiIsrRx_33 (391)
#define IRQ_SpiIsrTx_34 (392)
#define IRQ_SpiIsrRx_34 (393)
#define IRQ_SpiIsrTx_35 (394)
#define IRQ_SpiIsrRx_35 (395)
#define IRQ_SpiIsrTx_36 (396)
#define IRQ_SpiIsrRx_36 (397)
#define IRQ_SpiIsrTx_37 (398)
#define IRQ_SpiIsrRx_37 (399)
#define IRQ_SpiIsrTx_38 (400)
#define IRQ_SpiIsrRx_38 (401)
#define IRQ_SpiIsrTx_39 (402)
#define IRQ_SpiIsrRx_39 (403)
#define IRQ_SpiIsrTx_40 (404)
#define IRQ_SpiIsrRx_40 (405)
#define IRQ_SpiIsrTx_41 (406)
#define IRQ_SpiIsrRx_41 (407)
#define IRQ_SpiIsrTx_42 (408)
#define IRQ_SpiIsrRx_42 (409)
#define IRQ_SpiIsrTx_43 (410)
#define IRQ_SpiIsrRx_43 (411)
#define IRQ_SpiIsrTx_44 (412)
#define IRQ_SpiIsrRx_44 (413)
#define IRQ_SpiIsrTx_45 (414)
#define IRQ_SpiIsrRx_45 (415)
#define IRQ_SpiIsrTx_46 (416)
#define IRQ_SpiIsrRx_46 (417)
#define IRQ_SpiIsrTx_47 (418)
#define IRQ_SpiIsrRx_47 (419)
#define IRQ_SpiIsrTx_48 (420)
#define IRQ_SpiIsrRx_48 (421)
#define IRQ_SpiIsrTx_49 (422)
#define IRQ_SpiIsrRx_49 (423)
#define IRQ_CddIsr_0 (424)
#define IRQ_CddIsr_1 (425)
#define IRQ_CddIsr_2 (426)
#define IRQ_CddIsr_3 (427)
#define IRQ_CddIsr_4 (428)
#define IRQ_CddIsr_5 (429)
#define IRQ_CddIsr_6 (430)
#define IRQ_CddIsr_7 (431)
#define IRQ_CddIsr_8 (432)
#define IRQ_CddIsr_9 (433)
#define IRQ_CddIsr_10 (434)
#define IRQ_CddIsr_11 (435)
#define IRQ_CddIsr_12 (436)
#define IRQ_CddIsr_13 (437)
#define IRQ_CddIsr_14 (438)
#define IRQ_CddIsr_15 (439)
#define IRQ_CddIsr_16 (440)
#define IRQ_CddIsr_17 (441)
#define IRQ_CddIsr_18 (442)
#define IRQ_CddIsr_19 (443)
#define IRQ_CddIsr_20 (444)
#define IRQ_CddIsr_21 (445)
#define IRQ_CddIsr_22 (446)
#define IRQ_CddIsr_23 (447)
#define IRQ_CddIsr_24 (448)
#define IRQ_CddIsr_25 (449)
#define IRQ_CddIsr_26 (450)
#define IRQ_CddIsr_27 (451)
#define IRQ_CddIsr_28 (452)
#define IRQ_CddIsr_29 (453)
#define IRQ_CddIsr_30 (454)
#define IRQ_CddIsr_31 (455)
#define IRQ_CddIsr_32 (456)
#define IRQ_CddIsr_33 (457)
#define IRQ_CddIsr_34 (458)
#define IRQ_CddIsr_35 (459)
#define IRQ_CddIsr_36 (460)
#define IRQ_CddIsr_37 (461)
#define IRQ_CddIsr_38 (462)
#define IRQ_CddIsr_39 (463)
#define IRQ_CddIsr_40 (464)
#define IRQ_CddIsr_41 (465)
#define IRQ_CddIsr_42 (466)
#define IRQ_CddIsr_43 (467)
#define IRQ_CddIsr_44 (468)
#define IRQ_CddIsr_45 (469)
#define IRQ_CddIsr_46 (470)
#define IRQ_CddIsr_47 (471)
#define IRQ_CddIsr_48 (472)
#define IRQ_CddIsr_49 (473)
extern int irqMap[IRQ_COUNT];

#define VTTCNTRL_DLL_NAME_Default "eJAD_AC_ECU"

/**********************************************************************************************************************
*  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/

#endif  