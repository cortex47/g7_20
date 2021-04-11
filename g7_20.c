/*
 * g7_20.c
 *
 * Created: 11.04.2021 8:04:13
 *  Author: MI
 */ 

#define F_CPU 1200000
#include <avr/io.h>
#include <util/delay.h>

#define REPEAT_COUNT 3
#define SET_UP(b)	(1<<b)
#define SET_DOWN(b) (0<<b)


int main(void)
{
	unsigned char repeat_counter = 0;
	DDRB = 0x00;
	DDRB |= (SET_UP(PB4))|(SET_UP(PB3));
	PORTB = 0x00;
	
	_delay_ms(5000);
	
    while(1)
    {
        //TODO:: Please write your application code 
		for(repeat_counter = 0; repeat_counter < REPEAT_COUNT; repeat_counter++)
		{
			PORTB = SET_UP(PB4);
			_delay_ms(420000);
			PORTB = SET_DOWN(PB4);
			_delay_ms(1200000);
		};
		PORTB = SET_UP(PB3);
		while(1);
    }
}