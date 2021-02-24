/*
 * switch.c
 *
 *  Created on: Feb 15, 2020
 *      Author: Anwar
 */
#include <avr/io.h>
#define F_CPU 8000000UL
#include<avr/delay.h>
#include"types_def.h"
void main()
{

	DDRD=0xff;
	DDRA=0x00;


	while(1)
	{
	if((PINA&0x01)==0)
	{
		PORTD=0xff;
		_delay_ms(500);
		PORTD=0x00;
		_delay_ms(500);
	}
	else if ((PINA&0x01)!=0)
	{
		PORTD=0x00;
		_delay_ms(500);
	}
	}




}


