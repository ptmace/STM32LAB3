/*
 * fsm_automatic.h
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#ifndef INC_FSM_AUTOMATIC_H_
#define INC_FSM_AUTOMATIC_H_

#include "main.h"
#include "global.h"
#include "traffic_light.h"
#include "software_timer.h"
#include "led7_segment.h"
#include "button.h"

void blinkingLed(int mode);
void run_traffic_light();
void fsm_automatic();

#endif /* INC_FSM_AUTOMATIC_H_ */
