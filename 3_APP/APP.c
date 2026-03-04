#include"APP.h"
#include"2.1_EXT_INT/EXT_INTERRUPT.h"
#include"2_HAL/1_SWITCH/SWITCH.H"
#include"2_HAL/2_LED/LED.h"

void APP_INit(void){
    
    LED_INit(LED_PIN);  /*Initializes LED bin as RB1*/

    SWITCH_Init(switch_pin);    /*Initializes switch bin as RB0*/

    INT0(); /* Initialize External Interrupt INT0 */

    INT_SetEdge(INT0_RISING_EDGE);

    INT_SetCallback(APP_INT0_Callback); /*Initialize Register callback*/

    INT_Enable();
}


void APP_INT0_Callback(void){
    LED_Toggle(LED_PIN);
}