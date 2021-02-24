/*
 * US.h
 *
 *  Created on: 17.02.2021
 *      Author: essam
 */

#ifndef US_H_
#define US_H_
#include "state.h"
//Define State

enum {
	US_busy
}US_state_id;

// declare state function US

STATE_define(US_busy);

extern void (* US_state) () ;
void US_init ();

#endif /* US_H_ */
