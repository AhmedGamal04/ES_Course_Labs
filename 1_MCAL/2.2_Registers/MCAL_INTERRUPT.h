#ifndef MCAL_INTERRUPT_H
#define MCAL_INTERRUPT_H

/*GIE*/

#define INTERRUPT_GIE_Enable()  (INTCON |= (1<<INTCON_GIE))
#define INTERRUPT_GIE_Disable() (INTCON &= ~(1<<INTCON_GIE))

/*INTE*/
#define INT0_InterruptEnable()   (INTCON |= (1 << INTCON_INTE))
#define INT0_InterruptDisable()  (INTCON &= ~(1 << INTCON_INTE))

/*INTF*/
#define INT0_InterruptFlagClear() (INTCON &= ~(1 << INTCON_INTF))   /*To prevent multiple interrupts*/
#define INT0_InterruptFlagRead()  ((INTCON >> INTCON_INTF) & 0x01)  /*To read current state*/

#endif