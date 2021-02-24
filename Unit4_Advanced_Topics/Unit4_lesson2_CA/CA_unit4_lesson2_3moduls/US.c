/*
 * US.c

 *
 *  Created on: 17.02.2021
 *      Author: essam
 */

#include "US.h"
// variables
int US_distance = 0;


//State pinter to function
int US_Get_distance_random (int l, int r, int count);
void (* US_state) () ;

void US_init(){
	printf("US_init\n");
};

STATE_define(US_busy)
{
	//State_Name
	US_state_id =  US_busy;

	//State_Action
	US_distance = US_Get_distance_random (45, 55 ,1);


	//Event_Check

	printf("US_WAiting_State : distance = %d \n ",US_distance );
	US_Set_distance(US_distance);
	US_state = STATE(US_busy);
};


int US_Get_distance_random (int l, int r, int count){
	int i;
	int rand_num;
	for (i=0; i<count ;i++) {
		rand_num = (rand() % (r-l+1)) + l;
	}
	return rand_num ;

};
