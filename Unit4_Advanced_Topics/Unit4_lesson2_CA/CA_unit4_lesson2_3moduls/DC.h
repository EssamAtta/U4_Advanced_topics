/*
 * CA.h
 *
 *  Created on: 17.02.2021
 *      Author: essam
 */

#ifndef DC_H_
#define DC_H_
#include "state.h"
//Define State

enum {
	DC_idle,
	DC_busy,
}DC_state_id;

// declare state function CA
STATE_define(DC_idle);
STATE_define(DC_busy);

void DC_init ();

extern void (* DC_state) () ;

#endif /* DC_H_ */
