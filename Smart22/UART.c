/*
 * UART.c
 *
 *  Created on: Dec 4, 2020
 *      Author: Lenovo
 */

#include "UART.h"


void UART_INIT(void)
{
	Set_Bit(ucsrb,4);
	Set_Bit(ucsrb,3);
	Set_Bit(ucsrb,1);
	Set_Bit(ucsrb,2);
	ubrrl=103;
}
void UART_SendByte(u8 Byte)
{
  while(Get_Bit(ucsra,5)==0);

   udr=Byte;

}
u8 UART_ReceveByte(void)
{
	while(Get_Bit(ucsra,7)==0);

 return udr;

}
