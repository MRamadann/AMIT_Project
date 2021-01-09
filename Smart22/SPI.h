/*
 * SPI.h
 *
 *  Created on: 5 Dec 2020
 *      Author: wahee
 */

#ifndef SPI_H_
#define SPI_H_

#include "utilites.h"
#include "Dio_Reg.h"

#define SPCR   *((volatile u8*)0x2D)
#define SPDR   *((volatile u8*)0x2F)
#define SPSR   *((volatile u8*)0x2E)

void SPI_InitMaster(void);
void SPI_InitSlave(void);
void SPI_SendByte(u8 data);
u8 SPI_RecieveByte(void);

#endif /* SPI_H_ */
