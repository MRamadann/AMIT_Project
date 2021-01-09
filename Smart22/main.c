
#include "SPI.h"
#include "UART.h"

int main()
{
	SPI_InitSlave();
	Dio_SetPinDirection(GroupA,PIN0,OUTPUT);
	Dio_SetPinDirection(GroupA,PIN1,OUTPUT);
	while(1)
	{
		switch(SPI_RecieveByte())
		{
		case('1'):Tog_Bit(PORTA,0);break;
		case('2'):Tog_Bit(PORTA,1);break;
		}
	}

return 0;
}

