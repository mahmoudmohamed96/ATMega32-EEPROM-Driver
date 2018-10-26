/*
 * EEPROM.h
 *
 *  Created on: Oct 22, 2018
 *      Author: Mahmoud Mohamed Younis
 */

#ifndef EEPROM_H_
#define EEPROM_H_

/* Please when you use EEPROM to write or read operation control interrupts.
 * if interrupts is enabled before write or read disaple global interrupt {Clear I bit in SREG or use cli(); function}
 * and after operation is completed enble global interrupts {Set I bit in SREG or use sei(); function}.
 */

#include <avr/io.h>

void EEPROM_Write (unsigned int Address, unsigned char data);
unsigned char EEPROM_Read (unsigned int Address);

#endif /* EEPROM_H_ */
