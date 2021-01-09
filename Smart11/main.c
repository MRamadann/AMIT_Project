
#include "SPI.h"
#include "UART.h"

int main()
{
	SPI_InitMaster();
	UART_INIT();
	while(1)
	{
		SPI_SendByte(UART_ReceveByte());
	}

return 0;
}
