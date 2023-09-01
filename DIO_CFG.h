/*
 * DIO_CFG.h
 *
 * Created: 11/8/2020 1:20:12 AM
 *  Author: youss
 */ 


#ifndef DIO_CFG_H_
#define DIO_CFG_H_

#include "DIO.h"

typedef struct{
	DIO_Dir_Types DIO_PinDir;
	STD_levelTypes Levels;

	}DIO_cfg;
	
	#define pincount 32
	
void Init (void);

#endif /* DIO_CFG_H_ */