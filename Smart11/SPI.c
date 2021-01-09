#include "DIO_Reg.h"
#include "utilites.h"
#include "Dio_Reg.h"
#include "SPI.h"
void SPI_InitMaster(void)
{

	Dio_SetPinDirection(GroupB,PIN4,OUTPUT);
	Dio_SetPinDirection(GroupB,PIN5,OUTPUT);
	Dio_SetPinDirection(GroupB,PIN6,INPUT);
	Dio_SetPinDirection(GroupB,PIN7,OUTPUT);

	Set_Bit(SPCR,4);

	Set_Bit(SPCR,6);


}
void SPI_InitSlave(void)
{
	Dio_SetPinDirection(GroupB,PIN4,INPUT);
	Dio_SetPinDirection(GroupB,PIN5,INPUT);
	Dio_SetPinDirection(GroupB,PIN6,OUTPUT);
	Dio_SetPinDirection(GroupB,PIN7,INPUT);

	Set_Bit(SPCR,6);

}
void SPI_SendByte(u8 data)
{
	SPDR =data;
	while(Get_Bit(SPSR,7)==0);
}
u8 SPI_RecieveByte(void)
{
	while(Get_Bit(SPSR,7)==0);
	return SPDR;
}

