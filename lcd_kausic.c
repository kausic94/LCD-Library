/*
 * kausic_lcd.c
 *
 * Created: 5/29/2013 11:38:28 AM
 *  Author: kausic
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>
#include <kau_lcd.h>
int main(void)
{   initialize();
	_delay_ms(5);
 clr_lcd();
 _delay_ms(5);
 lcd_write("Hello");
 _delay_ms(5);
 moveto(1,0);
 _delay_ms(5);
 disp_int(1);
 	while(1);
}
