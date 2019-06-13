#include <avr/io.h>

int main(void)
{
	PORTB.DIRSET = (0x01 << 0x00);
	
	
	while(1)
	{
		PORTB.OUTTGL = (0x01 << 0x00);
		for(uint8_t i = 0x00; i < 0xFFFF; i++);
	}
	
	return 0;
}