/*
 * DC.c

 *
 *  Created on: 17.02.2021
 *      Author: essam
 */

#include "DC.h"
// variables
int DC_speed = 0;


//State pinter to function

void (* DC_state) () ;

void DC_init (){
	// init PWM
	printf("DC_init \n");

};

void DC_motor(int s)
{
	DC_speed = s;
	DC_state = STATE(DC_busy);
	printf("CA -----speed= %d----------> DC \n" ,DC_speed);
};

STATE_define(DC_idle)
{
	//State_Name
	DC_state_id =  DC_idle;

	//State_Action

printf("DC_idele State:  speed =%d\n ",DC_speed );
};

STATE_define(DC_busy)
{
	DC_state_id =  DC_busy;
	DC_state =  STATE(DC_idle);

	printf("DC_busy State:  speed =%d\n ",DC_speed );

};


