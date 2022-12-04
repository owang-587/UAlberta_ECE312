/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <joerg@FreeBSD.ORG> wrote this file.  As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer in return.        Joerg Wunsch
 * ----------------------------------------------------------------------------
 */

//#ifndef DEFINES_H
//#define	DEFINES_H

/* CPU frequency */
#define F_CPU 1000000UL

/* UART baud rate */
#define UART_BAUD  9600

/* HD44780 LCD port connections */
#define HD44780_RS D, 0
#define HD44780_RW D, 1
#define HD44780_E  C, 2

/* The data bits have to be not only in ascending order but also consecutive. */
#define HD44780_D4 C, 3
#define HD44780_D5 C, 4
#define HD44780_D6 C, 5
#define HD44780_D7 C, 6

/* Whether to read the busy flag, or fall back to worst-time delays. */
#define USE_BUSY_BIT 1

