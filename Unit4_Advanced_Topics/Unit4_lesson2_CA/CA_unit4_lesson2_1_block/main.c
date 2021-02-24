/*
 * main.c
 *
 *  Created on: 17.02.2021
 *      Author: essam
 */
#include "CA.h"

void setup()
{
	// init all drivers
	// init IRQ
	// init HAL US_driver DC_driver
	//init Block
	//Set state pointer for each block
	CA_state = STATE(CA_waiting);
}
void main ()
{
setup ();
volatile int x;
while (1)
{
	// call state for each block
	CA_state();
	for (x=0 ; x<500; x++);
}
}


