/*
 * DIO_HW.h
 *
 * Created: 11/7/2020 11:44:59 PM
 *  Author: youss
 */ 


#ifndef DIO_HW_H_
#define DIO_HW_H_

#include "STD_Typed.h"

#define PORTA_REG (*((volatile Uint8 *)0x3B))
#define DDRA_REG (*((volatile Uint8 *)0x3A))
#define PINA_REG (*((volatile Uint8 *)0x39))

#define PORTB_REG (*((volatile Uint8 *)0x38))
#define DDRB_REG (*((volatile Uint8 *)0x37))
#define PINB_REG (*((volatile Uint8 *)0x36))

#define PORTC_REG (*((volatile Uint8 *)0x35))
#define DDRC_REG (*((volatile Uint8 *)0x34))
#define PINC_REG (*((volatile Uint8 *)0x33))

#define PORTD_REG (*((volatile Uint8 *)0x32))
#define DDRD_REG (*((volatile Uint8 *)0x31))
#define PIND_REG (*((volatile Uint8 *)0x30))



#endif /* DIO_HW_H_ */