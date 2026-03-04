#include "EXT_INTERRUPT.h"


static void (*INT0_callback)(void) = 0;

void ISR_INT0(void)
{
    if (INT0_InterruptFlagRead())
    {
        INT0_InterruptFlagClear();
        if (INT0_callback != 0)
        {
            INT0_callback();
        }
    }
}

void INT0(void)
{
    TRISB |= (1 << 0);
    INT0_InterruptFlagClear();
    INT_Disable();
}

void INT_Enable(void){
    INT0_InterruptEnable();
    INTERRUPT_GlobalInterruptEnable();
}

void INT_Disable(void){
    INT0_InterruptDisable();
    INTERRUPT_GlobalInterruptDisable();     /*since we are working on one type of interrupts*/
}

void INT_SetEdge(uint8_t edge_type){
    if (edge_type == INT0_HIGH_EDGE)
    {
        OPTION_REG |= (1 << OPTION_REG_INTEDG);
    }
    else if (edge_type == INT0_LOW_EDGE)
    {
        OPTION_REG &= ~(1 << OPTION_REG_INTEDG);
    }
}

void INT_SetCallback(void (*ptr)(void))
{
    INT0_callback = ptr;
}

