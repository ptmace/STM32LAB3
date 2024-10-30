/*
 * fsm_manual.h
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#ifndef INC_FSM_MANUAL_H_
#define INC_FSM_MANUAL_H_

#include "button.h"
#include "global.h"

int prev_state[N0_OF_BUTTONS] = {NORMAL_STATE};
int state[N0_OF_BUTTONS] = {NORMAL_STATE};

void fsm_for_input_processing();

#endif /* INC_FSM_MANUAL_H_ */
