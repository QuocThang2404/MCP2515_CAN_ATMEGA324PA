// spi.h
//
// SPI master routines were pulled from the Atmel ATMega168 datasheet.

#ifndef _SPI_H
#define _SPI_H

#include <inttypes.h>

// SPI Definitions


#define SPI_SPCR	SPCR0
#define SPI_SPDR	SPDR0
#define SPI_SPSR	SPSR0
#define SPI_SPIF	SPIF0
#define SPI_SPE		SPE0
#define SPI_MSTR	MSTR0
#define SPI_SPR0	SPR00
#define SPI_SPR1	SPR10


// Loop until any current SPI transmissions have completed
#define spi_wait()	while (!(SPSR0 & (1 << SPIF0)));

// Initialize the SPI subsystem
void SPI_Init(void);

// Transfer a byte of data
uint8_t SPI_SendByte( uint8_t data );

// Read a byte of data
uint8_t SPI_ReadByte( void );

void SPI_RxBuffer(uint8_t *buffer, uint8_t length);
void SPI_TxBuffer(uint8_t *buffer, uint8_t length);

#endif // _SPI_CLARKDAWG
