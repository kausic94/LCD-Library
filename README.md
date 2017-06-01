<h1><center> LCD-Library </center></h1>
---

This project was created to help anyone struggling with character LCD to prototype quickly. The project was done in the atmega platform. Particularly, for the ATmega32 and ATmega16 board. 

The files kau_lcd.h and kau_lcd.c are the library files. You can either have them installed to your global header library or just put them in the directory with your main program file. 

The default CPU has been defined at 16MHz. The character LCD (16x2) works in the 8 bit mode.
The deafault port for control pins is PORTC in the ATmega board.To be specific:

             LCD-PIN    controller pin
             Enable        Port C 0
             RS            Port C 1
             R/W           Port C 2
             DATA          PORT D 0-7
             
All these are defined as macros in the header file. 

I have also included a sample file "lcd_kausic.c" that demonstrates a simple functionality of the library.

Constructive criticism are welcomed.
