#include "LED.h"
#include "1_MCAL/2.2_Registers/MCAL_REGISTERS.h"

void LED_INit(uint8_t pin){
    TRISB &= ~(1<<pin); /*configured as output*/
    PORTB &= ~(1<<pin); /*LED is initialized to be off*/
}

void LED_Toggle(uint8_t pin){
    PORTB ^= (1<<pin); /*XOR to let the LED toggles*/
}