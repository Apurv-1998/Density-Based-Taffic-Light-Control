/*******************************************************
This program was created by the CodeWizardAVR V3.25 
Automatic Program Generator
© Copyright 1998-2016 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 02-04-2019
Author  : 
Company : 
Comments:                         ,                                              


Chip type               : ATmega8
Program type            : Application
AVR Core Clock frequency: 1.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <io.h>
#define F_CPU 8000000UL

#include <delay.h>

#define R1 PORTB0
#define Y1 PORTB1
#define G1 PORTB2

#define R2 PORTB3
#define Y2 PORTB4
#define G2 PORTB5

#define R3 PORTD5
#define Y3 PORTD4
#define G3 PORTD3

#define R4 PORTD2
#define Y4 PORTD1
#define G4 PORTD0

// Declare your global variables here

void main(void)
{


    DDRB = 0xff;
    DDRD = 0xff;
    DDRC = 0x00;
    
    PORTB = 0x00;
    PORTD = 0x00;
    
    while(1)
    {
        if((PINC&0x01) == 0x01)
        {
        PORTB |= (1<<G1);
        PORTB |= (1<<Y2);
        PORTD |= (1<<R3);
        PORTD |= (1<<R4);
        
        }
        else if((PINC&0x02) == 0x02)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<G2);
        PORTD |= (1<<Y3);
        PORTD |= (1<<R4);    
        
        }
        
        else if((PINC&0x04) == 0x04)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<R2);
        PORTD |= (1<<G3);
        PORTD |= (1<<Y4);
        
        }
        
        else if((PINC&0x08) == 0x08)
        {
        PORTB |= (1<<Y1);
        PORTB |= (1<<R2);
        PORTD |= (1<<R3);
        PORTD |= (1<<G4);
        
        }
        
        else
        {
        PORTB = 0x00;
        PORTD = 0x00;
            
        PORTB |= (1<<G1);
        PORTB |= (1<<Y2);
        PORTD |= (1<<R3);
        PORTD |= (1<<R4);
        delay_ms(700); 
         }
        
        if((PINC&0x01) == 0x01)
        {
        PORTB |= (1<<G1);
        PORTB |= (1<<Y2);
        PORTD |= (1<<R3);
        PORTD |= (1<<R4);
        
        }
        else if((PINC&0x02) == 0x02)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<G2);
        PORTD |= (1<<Y3);
        PORTD |= (1<<R4);    
        
        }
        
        else if((PINC&0x04) == 0x04)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<R2);
        PORTD |= (1<<G3);
        PORTD |= (1<<Y4);
        
        }
        
        else if((PINC&0x08) == 0x08)
        {
        PORTB |= (1<<Y1);
        PORTB |= (1<<R2);
        PORTD |= (1<<R3);
        PORTD |= (1<<G4);
        
        }   
        else{
        
        PORTB = 0x00;
        PORTD = 0x00;
        
        PORTB |= (1<<R1);
        PORTB |= (1<<G2);
        PORTD |= (1<<Y3);
        PORTD |= (1<<R4);
        delay_ms(700); }
        
        
        if((PINC&0x01) == 0x01)
        {
        PORTB |= (1<<G1);
        PORTB |= (1<<Y2);
        PORTD |= (1<<R3);
        PORTD |= (1<<R4);
        
        }
        else if((PINC&0x02) == 0x02)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<G2);
        PORTD |= (1<<Y3);
        PORTD |= (1<<R4);    
        
        }
        
        else if((PINC&0x04) == 0x04)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<R2);
        PORTD |= (1<<G3);
        PORTD |= (1<<Y4);
        
        }
        
        else if((PINC&0x08) == 0x08)
        {
        PORTB |= (1<<Y1);
        PORTB |= (1<<R2);
        PORTD |= (1<<R3);
        PORTD |= (1<<G4);
        
        }
        else{
        
        PORTB = 0x00;
        PORTD = 0x00;
        
        PORTB |= (1<<R1);
        PORTB |= (1<<R2);
        PORTD |= (1<<G3);
        PORTD |= (1<<Y4);
        delay_ms(700);
         }
         
        if((PINC&0x01) == 0x01)
        {
        PORTB |= (1<<G1);
        PORTB |= (1<<Y2);
        PORTD |= (1<<R3);
        PORTD |= (1<<R4);
        
        }
        else if((PINC&0x02) == 0x02)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<G2);
        PORTD |= (1<<Y3);
        PORTD |= (1<<R4);    
        
        }
        
        else if((PINC&0x04) == 0x04)
        {
        PORTB |= (1<<R1);
        PORTB |= (1<<R2);
        PORTD |= (1<<G3);
        PORTD |= (1<<Y4);
        
        }
        
        else if((PINC&0x08) == 0x08)
        {
        PORTB |= (1<<Y1);
        PORTB |= (1<<R2);
        PORTD |= (1<<R3);
        PORTD |= (1<<G4);
        
        }
         else{
        PORTB = 0x00;
        PORTD = 0x00;
        PORTB |= (1<<Y1);
        PORTB |= (1<<R2);
        PORTD |= (1<<R3);
        PORTD |= (1<<G4);
        delay_ms(700);
        }
        PORTB = 0x00;
        PORTD = 0x00;
        }        
    
}