/*
* DIO.c
*
* Created: 11/8/2020 12:44:49 AM
*  Author: youssef
*/

#include "DIO.h"

void DIO_write (DIO_ChannelTypes ChannelId,STD_levelTypes Level){
	DIO_PortTypes Portx = ChannelId/8;
	DIO_ChannelTypes Channelpos = ChannelId%8;  //can use Uint8 bec it is number from 0-7
	
	switch(Portx){
		case DIO_PortA:
		if(Level == high)
		     setbit(PORTA_REG,Channelpos);
		else
		     clearbit(PORTA_REG,Channelpos);
		break;
		
		case DIO_POrtB:
		if(Level == high)
		setbit(PORTB_REG,Channelpos);
		else
		clearbit(PORTB_REG,Channelpos);
		break;
		
		case DIO_PORTC:
		if(Level == high)
		setbit(PORTC_REG,Channelpos);
		else
		clearbit(PORTC_REG,Channelpos);
		break;
		
		case DIO_PortD:
		if(Level == high)
		setbit(PORTD_REG,Channelpos);
		else
		clearbit(PORTD_REG,Channelpos);
		break;
		
	}
}
	
	Uint8 Read (DIO_ChannelTypes ChannelId){
		DIO_PortTypes Portx = ChannelId/8;
		DIO_ChannelTypes Channelpos = ChannelId%8;
		Uint8 data = 0;
		switch(Portx){
		
		case DIO_PortA:
		data = (getbit(PINA_REG,Channelpos));
		break;
		
		case DIO_POrtB:
		data = (getbit(PINB_REG,Channelpos));
		break;
		
		case DIO_PORTC:
		data = (getbit(PINC_REG,Channelpos));
		break;
		
		case DIO_PortD:
		data = (getbit(PIND_REG,Channelpos));
		break;

		}
		return data;
	}
	


void Toggle(DIO_ChannelTypes ChannelId){
	DIO_PortTypes Portx = ChannelId/8;
	DIO_ChannelTypes Channelpos = ChannelId%8;
	
	switch(Portx){
		
		case DIO_PortA:
		 togglebit(PORTA_REG,Channelpos);
		break;
		
		case DIO_POrtB:
		togglebit(PORTB_REG,Channelpos);
		break;
		
		case DIO_PORTC:
		togglebit(PORTC_REG,Channelpos);
		break;
		
		case DIO_PortD:
		togglebit(PORTD_REG,Channelpos);
		break;
		
	}
	
	
}