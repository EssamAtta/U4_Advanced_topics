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
void US_Set_distance (int d)
{
	CA_distance = d;
(CA_distance <= CA_threshold) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving)) ;
printf("US -----distance= %d----------\n", CA_distance);
};

STATE_define(CA_waiting)
{
	//State_Name
	CA_state_id =  CA_waiting;
	printf("CA_WAiting_State : distance = %d speed =%d\n ",CA_distance,CA_speed );

	//State_Action
	CA_speed = 0;  //DC_Motor(speed)
	DC_motor(CA_speed);

};

STATE_define(CA_driving)
{
	CA_state_id =  CA_driving;
	printf("CA_Driving_State : distance = %d speed =%d\n ",CA_distance,CA_speed );

	//State_Action
	CA_speed = 30;  //DC_Motor(speed)
	DC_motor(CA_speed);

	//Event_Check
	//US_Get_distance(CA_distance)

};
