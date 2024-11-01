/*
 * traffic_light.h
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#ifndef INC_TRAFFIC_LIGHT_H_
#define INC_TRAFFIC_LIGHT_H_

#include "main.h"
#include "global.h"
#include "software_timer.h"
#include "fsm_manual.h"


void clearAllLed();
void blinkingLed(int mode);
void traffic_light_mode_0();
void led_red();
void led_yellow();
void led_green();
void init_traffic_light();
void run_traffic_light();
#endif /* INC_TRAFFIC_LIGHT_H_ */
