/*
 * fsm_manual.h
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#ifndef INC_FSM_MANUAL_H_
#define INC_FSM_MANUAL_H_

#include "main.h"
#include "button.h"
#include "global.h"
#include "traffic_light.h"
#include "software_timer.h"

extern int prev_state[N0_OF_BUTTONS];
extern int state[N0_OF_BUTTONS];

void fsm_for_input_processing();

#endif /* INC_FSM_MANUAL_H_ */
