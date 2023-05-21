/*******************************************************************************
* File Name: US_trig.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_US_trig_H) /* Pins US_trig_H */
#define CY_PINS_US_trig_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "US_trig_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 US_trig__PORT == 15 && ((US_trig__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    US_trig_Write(uint8 value);
void    US_trig_SetDriveMode(uint8 mode);
uint8   US_trig_ReadDataReg(void);
uint8   US_trig_Read(void);
void    US_trig_SetInterruptMode(uint16 position, uint16 mode);
uint8   US_trig_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the US_trig_SetDriveMode() function.
     *  @{
     */
        #define US_trig_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define US_trig_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define US_trig_DM_RES_UP          PIN_DM_RES_UP
        #define US_trig_DM_RES_DWN         PIN_DM_RES_DWN
        #define US_trig_DM_OD_LO           PIN_DM_OD_LO
        #define US_trig_DM_OD_HI           PIN_DM_OD_HI
        #define US_trig_DM_STRONG          PIN_DM_STRONG
        #define US_trig_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define US_trig_MASK               US_trig__MASK
#define US_trig_SHIFT              US_trig__SHIFT
#define US_trig_WIDTH              1u

/* Interrupt constants */
#if defined(US_trig__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in US_trig_SetInterruptMode() function.
     *  @{
     */
        #define US_trig_INTR_NONE      (uint16)(0x0000u)
        #define US_trig_INTR_RISING    (uint16)(0x0001u)
        #define US_trig_INTR_FALLING   (uint16)(0x0002u)
        #define US_trig_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define US_trig_INTR_MASK      (0x01u) 
#endif /* (US_trig__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define US_trig_PS                     (* (reg8 *) US_trig__PS)
/* Data Register */
#define US_trig_DR                     (* (reg8 *) US_trig__DR)
/* Port Number */
#define US_trig_PRT_NUM                (* (reg8 *) US_trig__PRT) 
/* Connect to Analog Globals */                                                  
#define US_trig_AG                     (* (reg8 *) US_trig__AG)                       
/* Analog MUX bux enable */
#define US_trig_AMUX                   (* (reg8 *) US_trig__AMUX) 
/* Bidirectional Enable */                                                        
#define US_trig_BIE                    (* (reg8 *) US_trig__BIE)
/* Bit-mask for Aliased Register Access */
#define US_trig_BIT_MASK               (* (reg8 *) US_trig__BIT_MASK)
/* Bypass Enable */
#define US_trig_BYP                    (* (reg8 *) US_trig__BYP)
/* Port wide control signals */                                                   
#define US_trig_CTL                    (* (reg8 *) US_trig__CTL)
/* Drive Modes */
#define US_trig_DM0                    (* (reg8 *) US_trig__DM0) 
#define US_trig_DM1                    (* (reg8 *) US_trig__DM1)
#define US_trig_DM2                    (* (reg8 *) US_trig__DM2) 
/* Input Buffer Disable Override */
#define US_trig_INP_DIS                (* (reg8 *) US_trig__INP_DIS)
/* LCD Common or Segment Drive */
#define US_trig_LCD_COM_SEG            (* (reg8 *) US_trig__LCD_COM_SEG)
/* Enable Segment LCD */
#define US_trig_LCD_EN                 (* (reg8 *) US_trig__LCD_EN)
/* Slew Rate Control */
#define US_trig_SLW                    (* (reg8 *) US_trig__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define US_trig_PRTDSI__CAPS_SEL       (* (reg8 *) US_trig__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define US_trig_PRTDSI__DBL_SYNC_IN    (* (reg8 *) US_trig__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define US_trig_PRTDSI__OE_SEL0        (* (reg8 *) US_trig__PRTDSI__OE_SEL0) 
#define US_trig_PRTDSI__OE_SEL1        (* (reg8 *) US_trig__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define US_trig_PRTDSI__OUT_SEL0       (* (reg8 *) US_trig__PRTDSI__OUT_SEL0) 
#define US_trig_PRTDSI__OUT_SEL1       (* (reg8 *) US_trig__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define US_trig_PRTDSI__SYNC_OUT       (* (reg8 *) US_trig__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(US_trig__SIO_CFG)
    #define US_trig_SIO_HYST_EN        (* (reg8 *) US_trig__SIO_HYST_EN)
    #define US_trig_SIO_REG_HIFREQ     (* (reg8 *) US_trig__SIO_REG_HIFREQ)
    #define US_trig_SIO_CFG            (* (reg8 *) US_trig__SIO_CFG)
    #define US_trig_SIO_DIFF           (* (reg8 *) US_trig__SIO_DIFF)
#endif /* (US_trig__SIO_CFG) */

/* Interrupt Registers */
#if defined(US_trig__INTSTAT)
    #define US_trig_INTSTAT            (* (reg8 *) US_trig__INTSTAT)
    #define US_trig_SNAP               (* (reg8 *) US_trig__SNAP)
    
	#define US_trig_0_INTTYPE_REG 		(* (reg8 *) US_trig__0__INTTYPE)
#endif /* (US_trig__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_US_trig_H */


/* [] END OF FILE */
