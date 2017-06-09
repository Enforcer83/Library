//**********************************************************************************************************
//
// Title:				  Header File for Universal Functions and Defines
// Author:			      Jacob Putz
// Filename:			  univfunc.c
//
// Description:		      
//
// Current Revision:	0.1
//
// MIT License
// Copyright (c)	2017	Integrated Microsystem Electronics, LLC
//
// Permission is hereby granted, free of charge, to any person obtaining a copy of this software and 
// associated documentation files (the "Software"), to deal in the Software without restriction, including 
// without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell 
// copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the 
// following conditions:
//
// The above copyright notice and this permission notice shall be included in all copies or substantial 
// portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT 
// LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO 
// EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER 
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR 
// THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//
// Revision History:
//
// 0.1      -       Initial Commit
//
//**********************************************************************************************************

#include "univfunc.h"

void pinMode(uint8_t pin, uint8_t mode)
{
    uint8_t bit = digitalPinToBitMask(pin);
    uint8_t port = digitalPinToPort(pin);
    uint32_t portBase = (uint32_t) portBASERegister(port);
    volatile uint32_t *lock = portLOCKRegister(port);
    volatile uint32_t *cr = portCRRegister(port);
    
    if (port == NOT_A_PORT) return;
    
    if (mode == INPUT) {
        ROM_GPIOPinTypeGPIOInput(portBase, bit);
    }
	else if (mode == INPUT_PULLUP) {
        *lock = GPIO_LOCK_KEY_DD;
        *cr |= bit;
        *lock = 0;
        ROM_GPIODirModeSet(portBase, bit, GPIO_DIR_MODE_IN);
        ROM_GPIOPadConfigSet(portBase, bit,
                     GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPU);
        *cr &= ~bit;
    }
	else if (mode == INPUT_PULLDOWN) {
        *lock = GPIO_LOCK_KEY_DD;
        *cr |= bit;
        *lock = 0;
        ROM_GPIODirModeSet(portBase, bit, GPIO_DIR_MODE_IN);
        ROM_GPIOPadConfigSet(portBase, bit,
                     GPIO_STRENGTH_2MA, GPIO_PIN_TYPE_STD_WPD);
        *cr &= ~bit;
    }
	else {//mode == OUTPUT
        ROM_GPIOPinTypeGPIOOutput(portBase, bit);
    }

}

int digitalRead(uint8_t pin)
{
    uint8_t bit = digitalPinToBitMask(pin);
    uint8_t port = digitalPinToPort(pin);
    uint32_t portBase = (uint32_t) portBASERegister(port);
    if (port == NOT_A_PORT) return LOW;
    if(ROM_GPIOPinRead(portBase, bit)){
    	return HIGH;
    }
    return LOW;
}

void digitalWrite(uint8_t pin, uint8_t val)
{
    uint8_t bit = digitalPinToBitMask(pin);
    uint8_t mask = val ? bit : 0;
    uint8_t port = digitalPinToPort(pin);
    uint32_t portBase = (uint32_t) portBASERegister(port);
    
    if (port == NOT_A_PORT) return;

    ROM_GPIOPinWrite(portBase, bit, mask);
}