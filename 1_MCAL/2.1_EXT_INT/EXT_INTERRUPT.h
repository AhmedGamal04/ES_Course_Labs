#ifndef EXT_INTERRUPT_H
#define EXT_INTERRUPT_H

#include "2.2_Registers/MCAL_REGISTERS.h"
#include "2.2_Registers/MCAL_INTERRUPT.h"

#include <stdint.h>

void INT0(void);
void INT_Enable(void);
void INT_Disable(void);
void INT_SetEdge(uint8_t edge_type);
void INT_SetCallback(void (*ptr)(void));    /*Did not understand why I should implement this function. By searching, I found I have to use it.*/

#endif