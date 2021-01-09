/*
 * utilites.h
 *
 *  Created on: Nov 5, 2020
 *      Author: Lenovo
 */

#ifndef UTILITES_H_
#define UTILITES_H_

#define Set_Bit(VAR,BITNO) (VAR) |=  (1 << (BITNO))
#define Clr_Bit(VAR,BITNO) (VAR) &= ~(1 << (BITNO))
#define Tog_Bit(VAR,BITNO) (VAR) ^=  (1 << (BITNO))
#define Get_Bit(VAR,BITNO) (((VAR) >> (BITNO)) & 0x01)

#endif /* UTILITES_H_ */
