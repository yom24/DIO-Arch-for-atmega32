/*
 * DIO.h
 *
 * Created: 11/8/2020 12:44:29 AM
 *  Author: youss
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "STD_Typed.h"
#include "BitMath.h"
#include "DIO_HW.h"
#include "DIO_Types.h"

void DIO_write (DIO_ChannelTypes ChannelId,STD_levelTypes Levels);
Uint8 Read (DIO_ChannelTypes ChannelId);
void Toggle(DIO_ChannelTypes ChannelId);

#endif /* DIO_H_ */