/*
 * UART.h
 *
 *  Created on: Dec 4, 2020
 *      Author: Lenovo
 */

#ifndef UART_H_
#define UART_H_

#include "Std.h"
#include "utilites.h"

 #define ucsra  *((volatile u8 *)(0x2B) )
 #define ucsrb  *((volatile u8 *)(0x2A) )
 #define ucsrc  *((volatile u8 *)(0x40) )
 #define ubrrl  *((volatile u8 *)(0x29) )
 #define udr    *((volatile u8 *)(0x2c) )


void UART_INIT(void);
void UART_SendByte(u8 Byte);
u8 UART_ReceveByte(void);



#endif /* UART_H_ */
