#ifndef LED_H
#define LED_H
#include <stdint.h>

#define LED_PIN     1
void LED_INit(uint8_t pin);
void LED_Toggle(uint8_t pin);

#endif