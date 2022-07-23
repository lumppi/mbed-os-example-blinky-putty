/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"


//Blinking rate in milliseconds
//#define BLINKING_RATE     500ms
//PUTTY COM3 9600 8Bit+ 1Stopbit kein Paritybit

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    printf("Starte Terminal-Test in 2s\n");
    HAL_Delay(2000);

    while (true) {
        led = !led;
        if(led) printf("ON\n");
        else printf("OFF\n");
        HAL_Delay(500);
        //wait_us(500000);
        //ThisThread::sleep_for(BLINKING_RATE);
    }
}
