/*
 * CA.c

 *
 *  Created on: 17.02.2021
 *      Author: essam
 */

#include "CA.h"
// variables
int CA_speed = 0;
int CA_distance = 0;
int CA_threshold= 50;

//State pinter to function
int US_Get_distance_random (int l, int r, int count);
void (* CA_state) () ;

STATE_define(CA_waiting)
{
	//State_Name
	CA_state_id =  CA_waiting;

	//State_Action
	CA_speed = 0;  //DC_Motor(speed)


	//Event_Check
	CA_distance = US_Get_distance_random (45, 55 ,1);
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving)) ;
	printf("CA_WAiting_State : distance = %d speed =%d\n ",CA_distance,CA_speed );
};

STATE_define(CA_driving)
{
	CA_state_id =  CA_driving;

	//State_Action
	CA_speed = 30;  //DC_Motor(speed)


	//Event_Check
	//US_Get_distance(CA_distance)
	CA_distance = US_Get_distance_random (45, 55 ,1);
	(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving)) ;
	printf("CA_Driving_State : distance = %d speed =%d\n ",CA_distance,CA_speed );
};

int US_Get_distance_random (int l, int r, int count){
	int i;
	int rand_num;
	for (i=0; i<count ;i++) {
		rand_num = (rand() % (r-l+1)) + l;
	}
	return rand_num ;

};
