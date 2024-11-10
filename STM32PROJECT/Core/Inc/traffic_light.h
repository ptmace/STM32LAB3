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
#include "fsm_automatic.h"


void clearAllLed();
void led_red_green();
void led_red_amber();
void led_green_red();
void led_amber_red();
void controlTime_led();
void init_traffic_light();
void blinkingLed(int mode);

#endif /* INC_TRAFFIC_LIGHT_H_ */
