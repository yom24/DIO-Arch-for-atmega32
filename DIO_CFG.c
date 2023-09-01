/*
* DIO_CFG.c
*
* Created: 11/8/2020 1:19:42 AM
*  Author: youss
*/

#include "DIO_CFG.h"

const DIO_cfg pincfg[] = {
	//PortA
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	//PortB
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	//PortC
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	//PortD
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high},
	{output,high}
	
};

void Init (){
	Uint8 i =0;
	
	DIO_PortTypes Portx ;
	DIO_ChannelTypes Channelpos ;
	
	for(i=DIO_ChannelA0;i<pincount;i++){
		
		Portx =i/8;
		Channelpos = i%8;
		
		switch(Portx){
			case DIO_PortA:
			if(pincfg[i].DIO_PinDir == output)
			setbit(DDRA_REG,Channelpos);
			else
			clearbit(DDRA_REG,Channelpos);
			break;
			
			case DIO_POrtB:
			if(pincfg[i].DIO_PinDir == output)
			setbit(DDRB_REG,Channelpos);
			else
			clearbit(DDRB_REG,Channelpos);
			break;
			
			case DIO_PORTC:
			if(pincfg[i].DIO_PinDir == output)
			setbit(DDRC_REG,Channelpos);
			else
			clearbit(DDRC_REG,Channelpos);
			break;
			
			case DIO_PortD:
			if(pincfg[i].DIO_PinDir == output)
			setbit(DDRD_REG,Channelpos);
			else
			clearbit(DDRD_REG,Channelpos);
			break;
		}
		
	}
}