#ifndef MCAL_REGISTERS_H
#define MCAL_REGISTERS_H

#include <stdint.h>

/*Bit numbers and address are provided from datasheet*/

#define INTCON  (*(volatile uint8_t *)0X0B) /*address of INTCON register*/
#define INTCON_GIE  7
#define INTCON_INTE 4
#define INTCON_INTF 1

/*Bit numbers and address are provided from datasheet*/

#define OPTION_REG  (*(volatile uint8_t *)0X081)
#define OPTION_REG_INTEDG   6

#define TRISB   (*(volatile uint8_t *)0X086)
#define PORTB   (*(volatile uint8_t *)0X06)

#define INT0_HIGH_EDGE 1
#define INT0_LOW_EDGE 0
#define INT0_FALLING_EDGE 0
#define INT0_RISING_EDGE  1

#endif