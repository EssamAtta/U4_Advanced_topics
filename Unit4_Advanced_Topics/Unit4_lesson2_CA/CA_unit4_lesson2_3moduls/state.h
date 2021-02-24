/*
 * state.h
 *
 *  Created on: 17.02.2021
 *      Author: essam
 */

#ifndef STATE_H_
#define STATE_H_
#include "stdio.h"
#include"stdlib.h"
// Automatic sate function genrated
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_)  ST_##_statFUN_

// states connection
void US_Set_distance (int d);
void DC_motor(int s);


#endif /* SATE_H_ */
