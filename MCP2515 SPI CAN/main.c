/*
 * MCP2515 SPI CAN.c
 *
 * Created: 27/06/2024 3:22:40 PM
 * Author : QUOC THANG
 */ 

#include <avr/io.h>
#include "MCP2515.h"
#include "CANSPI.h"
#include "spi.h"
	
	
int main(void)
{
	SPI_Init();
    /* Replace with your application code */
	
	uint8_t i = 0;
	uint8_t data_out[8] = {0, 1, 2, 3, 4, 5, 6, 7};
	if (!CANSPI_Initialize())
	{
		i = 0;
	}

    while (1) 
    {
		if (Transmit(data_out))
		{
			i = i++;
			_delay_ms(500);
	    }
	}
}

