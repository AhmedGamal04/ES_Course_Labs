#include "SWITCH.H"
#include "1_MCAL/2.2_Registers/MCAL_REGISTERS.h"

void SWITCH_Init(uint8_t pin){
    TRISB |= (1<<pin);
}
/*As bit number 0 in port B  is specified as input*/