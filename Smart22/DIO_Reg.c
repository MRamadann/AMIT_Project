/*
 * DIO_Reg.c
 *
 *  Created on: Nov 5, 2020
 *      Author: Lenovo
 */

#include "DIO_Reg.h"

void Dio_SetPinDirection(u8 GroupNo, u8 PinNo, u8 Direction)
{
	if((GroupNo<=GroupD) & (PinNo<=PIN7))
	{
		if(Direction==OUTPUT)
		{
			switch(GroupNo)
			{
			case GroupA: Clr_Bit(DDRA, PinNo); break;
			case GroupB: Clr_Bit(DDRB, PinNo); break;
			case GroupC: Clr_Bit(DDRC, PinNo); break;
			case GroupD: Clr_Bit(DDRD, PinNo); break;
			}
		}
		else if(Direction==INPUT)
		{
			switch(GroupNo)
			{
			case GroupA: Set_Bit(DDRA, PinNo); break;
			case GroupB: Set_Bit(DDRB, PinNo); break;
			case GroupC: Set_Bit(DDRC, PinNo); break;
			case GroupD: Set_Bit(DDRD, PinNo); break;
		    }
	    }
		else
		{
			//wrong Direction do noting
		}
	}
}
void Dio_SetPinValue(u8 GroupNo, u8 PinNo, u8 Value)
{
	if((GroupNo<=GroupD) & (PinNo<=PIN7))
		{
			if(Value==LOW)
			{
				switch(GroupNo)
				{
				case GroupA: Clr_Bit(PORTA, PinNo); break;
				case GroupB: Clr_Bit(PORTB, PinNo); break;
				case GroupC: Clr_Bit(PORTC, PinNo); break;
				case GroupD: Clr_Bit(PORTD, PinNo); break;
				}
			}
			else if(Value==HIGH)
			{
				switch(GroupNo)
				{
				case GroupA: Set_Bit(PORTA, PinNo); break;
				case GroupB: Set_Bit(PORTB, PinNo); break;
				case GroupC: Set_Bit(PORTC, PinNo); break;
				case GroupD: Set_Bit(PORTD, PinNo); break;
			    }
		    }
			else
			{
				//wrong Direction do noting
			}
		}
}
u8 Dio_GetPinValue(u8 GroupNo, u8 PinNo)
{
	u8 Ret_PinValue=0;

	if((GroupNo<=GroupD) & (PinNo<=PIN7))
	{
		switch(GroupNo)
		{
		case GroupA: Ret_PinValue=Get_Bit(PINA, PinNo); break;
		case GroupB: Ret_PinValue=Get_Bit(PINB, PinNo); break;
		case GroupC: Ret_PinValue=Get_Bit(PINC, PinNo); break;
		case GroupD: Ret_PinValue=Get_Bit(PIND, PinNo); break;
		}
	}
	else
		Ret_PinValue=0xFF;

return Ret_PinValue;
}
