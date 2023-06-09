;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.3
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2019 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* IR_L */
IR_L__0__INTTYPE EQU CYREG_PICU5_INTTYPE6
IR_L__0__MASK EQU 0x40
IR_L__0__PC EQU CYREG_PRT5_PC6
IR_L__0__PORT EQU 5
IR_L__0__SHIFT EQU 6
IR_L__AG EQU CYREG_PRT5_AG
IR_L__AMUX EQU CYREG_PRT5_AMUX
IR_L__BIE EQU CYREG_PRT5_BIE
IR_L__BIT_MASK EQU CYREG_PRT5_BIT_MASK
IR_L__BYP EQU CYREG_PRT5_BYP
IR_L__CTL EQU CYREG_PRT5_CTL
IR_L__DM0 EQU CYREG_PRT5_DM0
IR_L__DM1 EQU CYREG_PRT5_DM1
IR_L__DM2 EQU CYREG_PRT5_DM2
IR_L__DR EQU CYREG_PRT5_DR
IR_L__INP_DIS EQU CYREG_PRT5_INP_DIS
IR_L__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
IR_L__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
IR_L__LCD_EN EQU CYREG_PRT5_LCD_EN
IR_L__MASK EQU 0x40
IR_L__PORT EQU 5
IR_L__PRT EQU CYREG_PRT5_PRT
IR_L__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
IR_L__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
IR_L__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
IR_L__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
IR_L__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
IR_L__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
IR_L__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
IR_L__PS EQU CYREG_PRT5_PS
IR_L__SHIFT EQU 6
IR_L__SLW EQU CYREG_PRT5_SLW

/* IR_R */
IR_R__0__INTTYPE EQU CYREG_PICU5_INTTYPE7
IR_R__0__MASK EQU 0x80
IR_R__0__PC EQU CYREG_PRT5_PC7
IR_R__0__PORT EQU 5
IR_R__0__SHIFT EQU 7
IR_R__AG EQU CYREG_PRT5_AG
IR_R__AMUX EQU CYREG_PRT5_AMUX
IR_R__BIE EQU CYREG_PRT5_BIE
IR_R__BIT_MASK EQU CYREG_PRT5_BIT_MASK
IR_R__BYP EQU CYREG_PRT5_BYP
IR_R__CTL EQU CYREG_PRT5_CTL
IR_R__DM0 EQU CYREG_PRT5_DM0
IR_R__DM1 EQU CYREG_PRT5_DM1
IR_R__DM2 EQU CYREG_PRT5_DM2
IR_R__DR EQU CYREG_PRT5_DR
IR_R__INP_DIS EQU CYREG_PRT5_INP_DIS
IR_R__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU5_BASE
IR_R__LCD_COM_SEG EQU CYREG_PRT5_LCD_COM_SEG
IR_R__LCD_EN EQU CYREG_PRT5_LCD_EN
IR_R__MASK EQU 0x80
IR_R__PORT EQU 5
IR_R__PRT EQU CYREG_PRT5_PRT
IR_R__PRTDSI__CAPS_SEL EQU CYREG_PRT5_CAPS_SEL
IR_R__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT5_DBL_SYNC_IN
IR_R__PRTDSI__OE_SEL0 EQU CYREG_PRT5_OE_SEL0
IR_R__PRTDSI__OE_SEL1 EQU CYREG_PRT5_OE_SEL1
IR_R__PRTDSI__OUT_SEL0 EQU CYREG_PRT5_OUT_SEL0
IR_R__PRTDSI__OUT_SEL1 EQU CYREG_PRT5_OUT_SEL1
IR_R__PRTDSI__SYNC_OUT EQU CYREG_PRT5_SYNC_OUT
IR_R__PS EQU CYREG_PRT5_PS
IR_R__SHIFT EQU 7
IR_R__SLW EQU CYREG_PRT5_SLW

/* LED_1 */
LED_1__0__INTTYPE EQU CYREG_PICU6_INTTYPE3
LED_1__0__MASK EQU 0x08
LED_1__0__PC EQU CYREG_PRT6_PC3
LED_1__0__PORT EQU 6
LED_1__0__SHIFT EQU 3
LED_1__AG EQU CYREG_PRT6_AG
LED_1__AMUX EQU CYREG_PRT6_AMUX
LED_1__BIE EQU CYREG_PRT6_BIE
LED_1__BIT_MASK EQU CYREG_PRT6_BIT_MASK
LED_1__BYP EQU CYREG_PRT6_BYP
LED_1__CTL EQU CYREG_PRT6_CTL
LED_1__DM0 EQU CYREG_PRT6_DM0
LED_1__DM1 EQU CYREG_PRT6_DM1
LED_1__DM2 EQU CYREG_PRT6_DM2
LED_1__DR EQU CYREG_PRT6_DR
LED_1__INP_DIS EQU CYREG_PRT6_INP_DIS
LED_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU6_BASE
LED_1__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
LED_1__LCD_EN EQU CYREG_PRT6_LCD_EN
LED_1__MASK EQU 0x08
LED_1__PORT EQU 6
LED_1__PRT EQU CYREG_PRT6_PRT
LED_1__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
LED_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
LED_1__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
LED_1__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
LED_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
LED_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
LED_1__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
LED_1__PS EQU CYREG_PRT6_PS
LED_1__SHIFT EQU 3
LED_1__SLW EQU CYREG_PRT6_SLW

/* LED_2 */
LED_2__0__INTTYPE EQU CYREG_PICU6_INTTYPE2
LED_2__0__MASK EQU 0x04
LED_2__0__PC EQU CYREG_PRT6_PC2
LED_2__0__PORT EQU 6
LED_2__0__SHIFT EQU 2
LED_2__AG EQU CYREG_PRT6_AG
LED_2__AMUX EQU CYREG_PRT6_AMUX
LED_2__BIE EQU CYREG_PRT6_BIE
LED_2__BIT_MASK EQU CYREG_PRT6_BIT_MASK
LED_2__BYP EQU CYREG_PRT6_BYP
LED_2__CTL EQU CYREG_PRT6_CTL
LED_2__DM0 EQU CYREG_PRT6_DM0
LED_2__DM1 EQU CYREG_PRT6_DM1
LED_2__DM2 EQU CYREG_PRT6_DM2
LED_2__DR EQU CYREG_PRT6_DR
LED_2__INP_DIS EQU CYREG_PRT6_INP_DIS
LED_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU6_BASE
LED_2__LCD_COM_SEG EQU CYREG_PRT6_LCD_COM_SEG
LED_2__LCD_EN EQU CYREG_PRT6_LCD_EN
LED_2__MASK EQU 0x04
LED_2__PORT EQU 6
LED_2__PRT EQU CYREG_PRT6_PRT
LED_2__PRTDSI__CAPS_SEL EQU CYREG_PRT6_CAPS_SEL
LED_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT6_DBL_SYNC_IN
LED_2__PRTDSI__OE_SEL0 EQU CYREG_PRT6_OE_SEL0
LED_2__PRTDSI__OE_SEL1 EQU CYREG_PRT6_OE_SEL1
LED_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT6_OUT_SEL0
LED_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT6_OUT_SEL1
LED_2__PRTDSI__SYNC_OUT EQU CYREG_PRT6_SYNC_OUT
LED_2__PS EQU CYREG_PRT6_PS
LED_2__SHIFT EQU 2
LED_2__SLW EQU CYREG_PRT6_SLW

/* MOT_L */
MOT_L__0__INTTYPE EQU CYREG_PICU4_INTTYPE2
MOT_L__0__MASK EQU 0x04
MOT_L__0__PC EQU CYREG_PRT4_PC2
MOT_L__0__PORT EQU 4
MOT_L__0__SHIFT EQU 2
MOT_L__AG EQU CYREG_PRT4_AG
MOT_L__AMUX EQU CYREG_PRT4_AMUX
MOT_L__BIE EQU CYREG_PRT4_BIE
MOT_L__BIT_MASK EQU CYREG_PRT4_BIT_MASK
MOT_L__BYP EQU CYREG_PRT4_BYP
MOT_L__CTL EQU CYREG_PRT4_CTL
MOT_L__DM0 EQU CYREG_PRT4_DM0
MOT_L__DM1 EQU CYREG_PRT4_DM1
MOT_L__DM2 EQU CYREG_PRT4_DM2
MOT_L__DR EQU CYREG_PRT4_DR
MOT_L__INP_DIS EQU CYREG_PRT4_INP_DIS
MOT_L__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
MOT_L__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
MOT_L__LCD_EN EQU CYREG_PRT4_LCD_EN
MOT_L__MASK EQU 0x04
MOT_L__PORT EQU 4
MOT_L__PRT EQU CYREG_PRT4_PRT
MOT_L__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
MOT_L__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
MOT_L__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
MOT_L__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
MOT_L__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
MOT_L__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
MOT_L__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
MOT_L__PS EQU CYREG_PRT4_PS
MOT_L__SHIFT EQU 2
MOT_L__SLW EQU CYREG_PRT4_SLW

/* MOT_R */
MOT_R__0__INTTYPE EQU CYREG_PICU4_INTTYPE1
MOT_R__0__MASK EQU 0x02
MOT_R__0__PC EQU CYREG_PRT4_PC1
MOT_R__0__PORT EQU 4
MOT_R__0__SHIFT EQU 1
MOT_R__AG EQU CYREG_PRT4_AG
MOT_R__AMUX EQU CYREG_PRT4_AMUX
MOT_R__BIE EQU CYREG_PRT4_BIE
MOT_R__BIT_MASK EQU CYREG_PRT4_BIT_MASK
MOT_R__BYP EQU CYREG_PRT4_BYP
MOT_R__CTL EQU CYREG_PRT4_CTL
MOT_R__DM0 EQU CYREG_PRT4_DM0
MOT_R__DM1 EQU CYREG_PRT4_DM1
MOT_R__DM2 EQU CYREG_PRT4_DM2
MOT_R__DR EQU CYREG_PRT4_DR
MOT_R__INP_DIS EQU CYREG_PRT4_INP_DIS
MOT_R__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
MOT_R__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
MOT_R__LCD_EN EQU CYREG_PRT4_LCD_EN
MOT_R__MASK EQU 0x02
MOT_R__PORT EQU 4
MOT_R__PRT EQU CYREG_PRT4_PRT
MOT_R__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
MOT_R__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
MOT_R__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
MOT_R__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
MOT_R__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
MOT_R__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
MOT_R__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
MOT_R__PS EQU CYREG_PRT4_PS
MOT_R__SHIFT EQU 1
MOT_R__SLW EQU CYREG_PRT4_SLW

/* PWM_L */
PWM_L_PWMHW__CAP0 EQU CYREG_TMR0_CAP0
PWM_L_PWMHW__CAP1 EQU CYREG_TMR0_CAP1
PWM_L_PWMHW__CFG0 EQU CYREG_TMR0_CFG0
PWM_L_PWMHW__CFG1 EQU CYREG_TMR0_CFG1
PWM_L_PWMHW__CFG2 EQU CYREG_TMR0_CFG2
PWM_L_PWMHW__CNT_CMP0 EQU CYREG_TMR0_CNT_CMP0
PWM_L_PWMHW__CNT_CMP1 EQU CYREG_TMR0_CNT_CMP1
PWM_L_PWMHW__PER0 EQU CYREG_TMR0_PER0
PWM_L_PWMHW__PER1 EQU CYREG_TMR0_PER1
PWM_L_PWMHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
PWM_L_PWMHW__PM_ACT_MSK EQU 0x01
PWM_L_PWMHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
PWM_L_PWMHW__PM_STBY_MSK EQU 0x01
PWM_L_PWMHW__RT0 EQU CYREG_TMR0_RT0
PWM_L_PWMHW__RT1 EQU CYREG_TMR0_RT1
PWM_L_PWMHW__SR0 EQU CYREG_TMR0_SR0

/* PWM_R */
PWM_R_PWMHW__CAP0 EQU CYREG_TMR1_CAP0
PWM_R_PWMHW__CAP1 EQU CYREG_TMR1_CAP1
PWM_R_PWMHW__CFG0 EQU CYREG_TMR1_CFG0
PWM_R_PWMHW__CFG1 EQU CYREG_TMR1_CFG1
PWM_R_PWMHW__CFG2 EQU CYREG_TMR1_CFG2
PWM_R_PWMHW__CNT_CMP0 EQU CYREG_TMR1_CNT_CMP0
PWM_R_PWMHW__CNT_CMP1 EQU CYREG_TMR1_CNT_CMP1
PWM_R_PWMHW__PER0 EQU CYREG_TMR1_PER0
PWM_R_PWMHW__PER1 EQU CYREG_TMR1_PER1
PWM_R_PWMHW__PM_ACT_CFG EQU CYREG_PM_ACT_CFG3
PWM_R_PWMHW__PM_ACT_MSK EQU 0x02
PWM_R_PWMHW__PM_STBY_CFG EQU CYREG_PM_STBY_CFG3
PWM_R_PWMHW__PM_STBY_MSK EQU 0x02
PWM_R_PWMHW__RT0 EQU CYREG_TMR1_RT0
PWM_R_PWMHW__RT1 EQU CYREG_TMR1_RT1
PWM_R_PWMHW__SR0 EQU CYREG_TMR1_SR0

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU3_INTTYPE3
Pin_1__0__MASK EQU 0x08
Pin_1__0__PC EQU CYREG_PRT3_PC3
Pin_1__0__PORT EQU 3
Pin_1__0__SHIFT EQU 3
Pin_1__AG EQU CYREG_PRT3_AG
Pin_1__AMUX EQU CYREG_PRT3_AMUX
Pin_1__BIE EQU CYREG_PRT3_BIE
Pin_1__BIT_MASK EQU CYREG_PRT3_BIT_MASK
Pin_1__BYP EQU CYREG_PRT3_BYP
Pin_1__CTL EQU CYREG_PRT3_CTL
Pin_1__DM0 EQU CYREG_PRT3_DM0
Pin_1__DM1 EQU CYREG_PRT3_DM1
Pin_1__DM2 EQU CYREG_PRT3_DM2
Pin_1__DR EQU CYREG_PRT3_DR
Pin_1__INP_DIS EQU CYREG_PRT3_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU3_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT3_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT3_LCD_EN
Pin_1__MASK EQU 0x08
Pin_1__PORT EQU 3
Pin_1__PRT EQU CYREG_PRT3_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT3_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT3_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT3_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT3_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT3_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT3_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT3_SYNC_OUT
Pin_1__PS EQU CYREG_PRT3_PS
Pin_1__SHIFT EQU 3
Pin_1__SLW EQU CYREG_PRT3_SLW

/* Start */
Start__0__INTTYPE EQU CYREG_PICU15_INTTYPE5
Start__0__MASK EQU 0x20
Start__0__PC EQU CYREG_IO_PC_PRT15_PC5
Start__0__PORT EQU 15
Start__0__SHIFT EQU 5
Start__AG EQU CYREG_PRT15_AG
Start__AMUX EQU CYREG_PRT15_AMUX
Start__BIE EQU CYREG_PRT15_BIE
Start__BIT_MASK EQU CYREG_PRT15_BIT_MASK
Start__BYP EQU CYREG_PRT15_BYP
Start__CTL EQU CYREG_PRT15_CTL
Start__DM0 EQU CYREG_PRT15_DM0
Start__DM1 EQU CYREG_PRT15_DM1
Start__DM2 EQU CYREG_PRT15_DM2
Start__DR EQU CYREG_PRT15_DR
Start__INP_DIS EQU CYREG_PRT15_INP_DIS
Start__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
Start__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
Start__LCD_EN EQU CYREG_PRT15_LCD_EN
Start__MASK EQU 0x20
Start__PORT EQU 15
Start__PRT EQU CYREG_PRT15_PRT
Start__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
Start__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
Start__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
Start__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
Start__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
Start__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
Start__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
Start__PS EQU CYREG_PRT15_PS
Start__SHIFT EQU 5
Start__SLW EQU CYREG_PRT15_SLW

/* Clock_1 */
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x01
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x02
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x02

/* Clock_3 */
Clock_3__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_3__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_3__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_3__CFG2_SRC_SEL_MASK EQU 0x07
Clock_3__INDEX EQU 0x00
Clock_3__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_3__PM_ACT_MSK EQU 0x01
Clock_3__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_3__PM_STBY_MSK EQU 0x01

/* US_echo */
US_echo__0__INTTYPE EQU CYREG_PICU4_INTTYPE4
US_echo__0__MASK EQU 0x10
US_echo__0__PC EQU CYREG_PRT4_PC4
US_echo__0__PORT EQU 4
US_echo__0__SHIFT EQU 4
US_echo__AG EQU CYREG_PRT4_AG
US_echo__AMUX EQU CYREG_PRT4_AMUX
US_echo__BIE EQU CYREG_PRT4_BIE
US_echo__BIT_MASK EQU CYREG_PRT4_BIT_MASK
US_echo__BYP EQU CYREG_PRT4_BYP
US_echo__CTL EQU CYREG_PRT4_CTL
US_echo__DM0 EQU CYREG_PRT4_DM0
US_echo__DM1 EQU CYREG_PRT4_DM1
US_echo__DM2 EQU CYREG_PRT4_DM2
US_echo__DR EQU CYREG_PRT4_DR
US_echo__INP_DIS EQU CYREG_PRT4_INP_DIS
US_echo__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
US_echo__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
US_echo__LCD_EN EQU CYREG_PRT4_LCD_EN
US_echo__MASK EQU 0x10
US_echo__PORT EQU 4
US_echo__PRT EQU CYREG_PRT4_PRT
US_echo__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
US_echo__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
US_echo__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
US_echo__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
US_echo__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
US_echo__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
US_echo__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
US_echo__PS EQU CYREG_PRT4_PS
US_echo__SHIFT EQU 4
US_echo__SLW EQU CYREG_PRT4_SLW

/* US_trig */
US_trig__0__INTTYPE EQU CYREG_PICU4_INTTYPE5
US_trig__0__MASK EQU 0x20
US_trig__0__PC EQU CYREG_PRT4_PC5
US_trig__0__PORT EQU 4
US_trig__0__SHIFT EQU 5
US_trig__AG EQU CYREG_PRT4_AG
US_trig__AMUX EQU CYREG_PRT4_AMUX
US_trig__BIE EQU CYREG_PRT4_BIE
US_trig__BIT_MASK EQU CYREG_PRT4_BIT_MASK
US_trig__BYP EQU CYREG_PRT4_BYP
US_trig__CTL EQU CYREG_PRT4_CTL
US_trig__DM0 EQU CYREG_PRT4_DM0
US_trig__DM1 EQU CYREG_PRT4_DM1
US_trig__DM2 EQU CYREG_PRT4_DM2
US_trig__DR EQU CYREG_PRT4_DR
US_trig__INP_DIS EQU CYREG_PRT4_INP_DIS
US_trig__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
US_trig__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
US_trig__LCD_EN EQU CYREG_PRT4_LCD_EN
US_trig__MASK EQU 0x20
US_trig__PORT EQU 4
US_trig__PRT EQU CYREG_PRT4_PRT
US_trig__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
US_trig__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
US_trig__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
US_trig__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
US_trig__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
US_trig__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
US_trig__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
US_trig__PS EQU CYREG_PRT4_PS
US_trig__SHIFT EQU 5
US_trig__SLW EQU CYREG_PRT4_SLW

/* Counter_1 */
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_A0_REG EQU CYREG_B1_UDB04_05_A0
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_A1_REG EQU CYREG_B1_UDB04_05_A1
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_D0_REG EQU CYREG_B1_UDB04_05_D0
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_D1_REG EQU CYREG_B1_UDB04_05_D1
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_F0_REG EQU CYREG_B1_UDB04_05_F0
Counter_1_CounterUDB_sC16_counterdp_u0__16BIT_F1_REG EQU CYREG_B1_UDB04_05_F1
Counter_1_CounterUDB_sC16_counterdp_u0__A0_A1_REG EQU CYREG_B1_UDB04_A0_A1
Counter_1_CounterUDB_sC16_counterdp_u0__A0_REG EQU CYREG_B1_UDB04_A0
Counter_1_CounterUDB_sC16_counterdp_u0__A1_REG EQU CYREG_B1_UDB04_A1
Counter_1_CounterUDB_sC16_counterdp_u0__D0_D1_REG EQU CYREG_B1_UDB04_D0_D1
Counter_1_CounterUDB_sC16_counterdp_u0__D0_REG EQU CYREG_B1_UDB04_D0
Counter_1_CounterUDB_sC16_counterdp_u0__D1_REG EQU CYREG_B1_UDB04_D1
Counter_1_CounterUDB_sC16_counterdp_u0__DP_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
Counter_1_CounterUDB_sC16_counterdp_u0__F0_F1_REG EQU CYREG_B1_UDB04_F0_F1
Counter_1_CounterUDB_sC16_counterdp_u0__F0_REG EQU CYREG_B1_UDB04_F0
Counter_1_CounterUDB_sC16_counterdp_u0__F1_REG EQU CYREG_B1_UDB04_F1
Counter_1_CounterUDB_sC16_counterdp_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Counter_1_CounterUDB_sC16_counterdp_u0__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_A0_REG EQU CYREG_B1_UDB05_06_A0
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_A1_REG EQU CYREG_B1_UDB05_06_A1
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_D0_REG EQU CYREG_B1_UDB05_06_D0
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_D1_REG EQU CYREG_B1_UDB05_06_D1
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_F0_REG EQU CYREG_B1_UDB05_06_F0
Counter_1_CounterUDB_sC16_counterdp_u1__16BIT_F1_REG EQU CYREG_B1_UDB05_06_F1
Counter_1_CounterUDB_sC16_counterdp_u1__A0_A1_REG EQU CYREG_B1_UDB05_A0_A1
Counter_1_CounterUDB_sC16_counterdp_u1__A0_REG EQU CYREG_B1_UDB05_A0
Counter_1_CounterUDB_sC16_counterdp_u1__A1_REG EQU CYREG_B1_UDB05_A1
Counter_1_CounterUDB_sC16_counterdp_u1__D0_D1_REG EQU CYREG_B1_UDB05_D0_D1
Counter_1_CounterUDB_sC16_counterdp_u1__D0_REG EQU CYREG_B1_UDB05_D0
Counter_1_CounterUDB_sC16_counterdp_u1__D1_REG EQU CYREG_B1_UDB05_D1
Counter_1_CounterUDB_sC16_counterdp_u1__DP_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
Counter_1_CounterUDB_sC16_counterdp_u1__F0_F1_REG EQU CYREG_B1_UDB05_F0_F1
Counter_1_CounterUDB_sC16_counterdp_u1__F0_REG EQU CYREG_B1_UDB05_F0
Counter_1_CounterUDB_sC16_counterdp_u1__F1_REG EQU CYREG_B1_UDB05_F1
Counter_1_CounterUDB_sC16_counterdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Counter_1_CounterUDB_sC16_counterdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB05_06_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB05_06_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB05_06_MSK
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB05_06_MSK
Counter_1_CounterUDB_sCTRLReg_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB05_06_MSK
Counter_1_CounterUDB_sCTRLReg_ctrlreg__7__MASK EQU 0x80
Counter_1_CounterUDB_sCTRLReg_ctrlreg__7__POS EQU 7
Counter_1_CounterUDB_sCTRLReg_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__CONTROL_REG EQU CYREG_B1_UDB05_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__CONTROL_ST_REG EQU CYREG_B1_UDB05_ST_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__COUNT_REG EQU CYREG_B1_UDB05_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__COUNT_ST_REG EQU CYREG_B1_UDB05_ST_CTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__MASK EQU 0x80
Counter_1_CounterUDB_sCTRLReg_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Counter_1_CounterUDB_sCTRLReg_ctrlreg__PERIOD_REG EQU CYREG_B1_UDB05_MSK
Counter_1_CounterUDB_sSTSReg_stsreg__0__MASK EQU 0x01
Counter_1_CounterUDB_sSTSReg_stsreg__0__POS EQU 0
Counter_1_CounterUDB_sSTSReg_stsreg__1__MASK EQU 0x02
Counter_1_CounterUDB_sSTSReg_stsreg__1__POS EQU 1
Counter_1_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_06_ACTL
Counter_1_CounterUDB_sSTSReg_stsreg__16BIT_STATUS_REG EQU CYREG_B1_UDB05_06_ST
Counter_1_CounterUDB_sSTSReg_stsreg__2__MASK EQU 0x04
Counter_1_CounterUDB_sSTSReg_stsreg__2__POS EQU 2
Counter_1_CounterUDB_sSTSReg_stsreg__4__MASK EQU 0x10
Counter_1_CounterUDB_sSTSReg_stsreg__4__POS EQU 4
Counter_1_CounterUDB_sSTSReg_stsreg__5__MASK EQU 0x20
Counter_1_CounterUDB_sSTSReg_stsreg__5__POS EQU 5
Counter_1_CounterUDB_sSTSReg_stsreg__6__MASK EQU 0x40
Counter_1_CounterUDB_sSTSReg_stsreg__6__POS EQU 6
Counter_1_CounterUDB_sSTSReg_stsreg__MASK EQU 0x77
Counter_1_CounterUDB_sSTSReg_stsreg__MASK_REG EQU CYREG_B1_UDB05_MSK
Counter_1_CounterUDB_sSTSReg_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Counter_1_CounterUDB_sSTSReg_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B1_UDB05_MSK_ACTL
Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B1_UDB05_ACTL
Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_CNT_REG EQU CYREG_B1_UDB05_ST_CTL
Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_CONTROL_REG EQU CYREG_B1_UDB05_ST_CTL
Counter_1_CounterUDB_sSTSReg_stsreg__STATUS_REG EQU CYREG_B1_UDB05_ST

/* Left_mot_dir */
Left_mot_dir__0__INTTYPE EQU CYREG_PICU4_INTTYPE0
Left_mot_dir__0__MASK EQU 0x01
Left_mot_dir__0__PC EQU CYREG_PRT4_PC0
Left_mot_dir__0__PORT EQU 4
Left_mot_dir__0__SHIFT EQU 0
Left_mot_dir__AG EQU CYREG_PRT4_AG
Left_mot_dir__AMUX EQU CYREG_PRT4_AMUX
Left_mot_dir__BIE EQU CYREG_PRT4_BIE
Left_mot_dir__BIT_MASK EQU CYREG_PRT4_BIT_MASK
Left_mot_dir__BYP EQU CYREG_PRT4_BYP
Left_mot_dir__CTL EQU CYREG_PRT4_CTL
Left_mot_dir__DM0 EQU CYREG_PRT4_DM0
Left_mot_dir__DM1 EQU CYREG_PRT4_DM1
Left_mot_dir__DM2 EQU CYREG_PRT4_DM2
Left_mot_dir__DR EQU CYREG_PRT4_DR
Left_mot_dir__INP_DIS EQU CYREG_PRT4_INP_DIS
Left_mot_dir__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
Left_mot_dir__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
Left_mot_dir__LCD_EN EQU CYREG_PRT4_LCD_EN
Left_mot_dir__MASK EQU 0x01
Left_mot_dir__PORT EQU 4
Left_mot_dir__PRT EQU CYREG_PRT4_PRT
Left_mot_dir__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
Left_mot_dir__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
Left_mot_dir__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
Left_mot_dir__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
Left_mot_dir__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
Left_mot_dir__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
Left_mot_dir__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
Left_mot_dir__PS EQU CYREG_PRT4_PS
Left_mot_dir__SHIFT EQU 0
Left_mot_dir__SLW EQU CYREG_PRT4_SLW

/* Reg_PWM_Start */
Reg_PWM_Start_Sync_ctrl_reg__0__MASK EQU 0x01
Reg_PWM_Start_Sync_ctrl_reg__0__POS EQU 0
Reg_PWM_Start_Sync_ctrl_reg__1__MASK EQU 0x02
Reg_PWM_Start_Sync_ctrl_reg__1__POS EQU 1
Reg_PWM_Start_Sync_ctrl_reg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_05_ACTL
Reg_PWM_Start_Sync_ctrl_reg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
Reg_PWM_Start_Sync_ctrl_reg__16BIT_CONTROL_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
Reg_PWM_Start_Sync_ctrl_reg__16BIT_COUNT_CONTROL_REG EQU CYREG_B1_UDB04_05_CTL
Reg_PWM_Start_Sync_ctrl_reg__16BIT_COUNT_COUNT_REG EQU CYREG_B1_UDB04_05_CTL
Reg_PWM_Start_Sync_ctrl_reg__16BIT_MASK_MASK_REG EQU CYREG_B1_UDB04_05_MSK
Reg_PWM_Start_Sync_ctrl_reg__16BIT_MASK_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
Reg_PWM_Start_Sync_ctrl_reg__16BIT_PERIOD_MASK_REG EQU CYREG_B1_UDB04_05_MSK
Reg_PWM_Start_Sync_ctrl_reg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B1_UDB04_05_MSK
Reg_PWM_Start_Sync_ctrl_reg__CONTROL_AUX_CTL_REG EQU CYREG_B1_UDB04_ACTL
Reg_PWM_Start_Sync_ctrl_reg__CONTROL_REG EQU CYREG_B1_UDB04_CTL
Reg_PWM_Start_Sync_ctrl_reg__CONTROL_ST_REG EQU CYREG_B1_UDB04_ST_CTL
Reg_PWM_Start_Sync_ctrl_reg__COUNT_REG EQU CYREG_B1_UDB04_CTL
Reg_PWM_Start_Sync_ctrl_reg__COUNT_ST_REG EQU CYREG_B1_UDB04_ST_CTL
Reg_PWM_Start_Sync_ctrl_reg__MASK EQU 0x03
Reg_PWM_Start_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Reg_PWM_Start_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG EQU CYREG_B1_UDB04_MSK_ACTL
Reg_PWM_Start_Sync_ctrl_reg__PERIOD_REG EQU CYREG_B1_UDB04_MSK

/* Right_mot_dir */
Right_mot_dir__0__INTTYPE EQU CYREG_PICU4_INTTYPE3
Right_mot_dir__0__MASK EQU 0x08
Right_mot_dir__0__PC EQU CYREG_PRT4_PC3
Right_mot_dir__0__PORT EQU 4
Right_mot_dir__0__SHIFT EQU 3
Right_mot_dir__AG EQU CYREG_PRT4_AG
Right_mot_dir__AMUX EQU CYREG_PRT4_AMUX
Right_mot_dir__BIE EQU CYREG_PRT4_BIE
Right_mot_dir__BIT_MASK EQU CYREG_PRT4_BIT_MASK
Right_mot_dir__BYP EQU CYREG_PRT4_BYP
Right_mot_dir__CTL EQU CYREG_PRT4_CTL
Right_mot_dir__DM0 EQU CYREG_PRT4_DM0
Right_mot_dir__DM1 EQU CYREG_PRT4_DM1
Right_mot_dir__DM2 EQU CYREG_PRT4_DM2
Right_mot_dir__DR EQU CYREG_PRT4_DR
Right_mot_dir__INP_DIS EQU CYREG_PRT4_INP_DIS
Right_mot_dir__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU4_BASE
Right_mot_dir__LCD_COM_SEG EQU CYREG_PRT4_LCD_COM_SEG
Right_mot_dir__LCD_EN EQU CYREG_PRT4_LCD_EN
Right_mot_dir__MASK EQU 0x08
Right_mot_dir__PORT EQU 4
Right_mot_dir__PRT EQU CYREG_PRT4_PRT
Right_mot_dir__PRTDSI__CAPS_SEL EQU CYREG_PRT4_CAPS_SEL
Right_mot_dir__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT4_DBL_SYNC_IN
Right_mot_dir__PRTDSI__OE_SEL0 EQU CYREG_PRT4_OE_SEL0
Right_mot_dir__PRTDSI__OE_SEL1 EQU CYREG_PRT4_OE_SEL1
Right_mot_dir__PRTDSI__OUT_SEL0 EQU CYREG_PRT4_OUT_SEL0
Right_mot_dir__PRTDSI__OUT_SEL1 EQU CYREG_PRT4_OUT_SEL1
Right_mot_dir__PRTDSI__SYNC_OUT EQU CYREG_PRT4_SYNC_OUT
Right_mot_dir__PS EQU CYREG_PRT4_PS
Right_mot_dir__SHIFT EQU 3
Right_mot_dir__SLW EQU CYREG_PRT4_SLW

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 24
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E123069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 24
CYDEV_CHIP_MEMBER_4AA EQU 23
CYDEV_CHIP_MEMBER_4AB EQU 28
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4D EQU 18
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 25
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 22
CYDEV_CHIP_MEMBER_4I EQU 30
CYDEV_CHIP_MEMBER_4J EQU 19
CYDEV_CHIP_MEMBER_4K EQU 20
CYDEV_CHIP_MEMBER_4L EQU 29
CYDEV_CHIP_MEMBER_4M EQU 27
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 26
CYDEV_CHIP_MEMBER_4Q EQU 15
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 21
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 16
CYDEV_CHIP_MEMBER_4Z EQU 17
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 31
CYDEV_CHIP_MEMBER_FM3 EQU 35
CYDEV_CHIP_MEMBER_FM4 EQU 36
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 32
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 33
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 34
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */
