/*
 * main.c
 *
 *  Created on: 17.02.2021
 *      Author: essam
 */
#include "CA.h"
#include "US.h"
#include "DC.h"


void setup()
{
	// init all drivers
	// init IRQ
	// init HAL US_driver DC_driver
	//init Block
	//Set state pointer for each block
	US_init();
	DC_init();

	CA_state = STATE(CA_waiting);
	US_state = STATE(US_busy);
	DC_state= STATE(DC_idle);

}
void main ()
{
	volatile int x;
	setup ();

while (1)
{
	// call state for each block
	US_state();
	CA_state();
	DC_state();

	for (x=0 ; x<5000000; x++);
}
}


