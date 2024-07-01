/*
 * ATMega324P.h
 *
 * Created: 01/07/2024 10:12:29 AM
 *  Author: QUOC THANG
 */ 


#ifndef ATMEGA324P_H_
#define ATMEGA324P_H_

#define F_CPU 8000000UL

#define SPI_DDR			DDRB
#define SPI_PORT		PORTB
#define SPI_MISO		PINB6
#define SPI_MOSI		PINB5
#define SPI_SCK			PINB7

#endif /* ATMEGA324P_H_ */