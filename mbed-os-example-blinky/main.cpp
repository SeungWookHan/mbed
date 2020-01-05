/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"
#include "Servo.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                                   1000

Servo myservo(D3);

int main()
{
    // Initialise the digital pin LED1 as an output
   DigitalOut led(LED1);

    while (true) {
        led = !led;
        thread_sleep_for(BLINKING_RATE_MS);

        for(float p=0; p<1.0; p += 0.1) {
            myservo = p;
            wait(0.2);
        }
    } 
}
