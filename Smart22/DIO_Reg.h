/*
 * DIO_Reg.h
 *
 *  Created on: Nov 5, 2020
 *      Author: Lenovo
 */

#ifndef DIO_REG_H_
#define DIO_REG_H_

#include "Std.h"
#include "utilites.h"

 #define PORTA *((volatile u8 *)(0x3B) )
 #define DDRA  *((volatile u8 *)(0x3A) )
 #define PINA  *((volatile u8 *)(0x39) )

 #define PORTB *((volatile u8 *)(0x38) )
 #define DDRB  *((volatile u8 *)(0x37) )
 #define PINB  *((volatile u8 *)(0x36) )

 #define PORTC *((volatile u8 *)(0x35) )
 #define DDRC  *((volatile u8 *)(0x34) )
 #define PINC  *((volatile u8 *)(0x33) )

 #define PORTD *((volatile u8 *)(0x32) )
 #define DDRD  *((volatile u8 *)(0x31) )
 #define PIND  *((volatile u8 *)(0x30) )

void Dio_SetPinDirection(u8 GroupNo, u8 PinNo, u8 Direction);
void Dio_SetPinValue(u8 GroupNo, u8 PinNo, u8 Value);
u8   Dio_GetPinValue(u8 GroupNo, u8 PinNo);

#define GroupA 0
#define GroupB 1
#define GroupC 2
#define GroupD 3

#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

#define INPUT  0
#define OUTPUT 1

#define LOW   0
#define HIGH  1

#endif /* DIO_REG_H_ */
