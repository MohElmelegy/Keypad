
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO_Interface.h"
#include "LCD_Interface.h"
#include <avr/io.h>
#include <avr/delay.h>



void main(void)
{
	
	LCD_VidInit ();
	
	
    while(1)
    {
       for (int i=0; i<2; i++)
	   {
	    LCD_VidWriteString("MohElmelegy");
        _delay_ms(4000);
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
        LCD_VidSetPosition(1 , 6);
        LCD_VidWriteString("MohElmelegy");
		_delay_ms(4000);
		LCD_VidSendCommand(0b00000001);
		_delay_ms(2);
		 LCD_VidSetPosition(0 , 10);
		 LCD_VidWriteString("MohElmelegy");
		 _delay_ms(4000);
		 LCD_VidSendCommand(0b00000001);
		 _delay_ms(2);
	   }		 
		 
		 for (u8 i=0; i<=16; i++)
		 {
			LCD_VidSetPosition(0 , i);
			LCD_VidWriteString("MohElmelegy");
			_delay_ms(2000);
			LCD_VidSendCommand(0b00000001);
			_delay_ms(2);
		 }
		 
		 for (u8 i=0; i<=16; i++)
		 {
			 LCD_VidSetPosition(1 , i);
			 LCD_VidWriteString("MohElmelegy");
			 _delay_ms(2000);
			 LCD_VidSendCommand(0b00000001);
			 _delay_ms(2);
		 }
		 
    }
}
