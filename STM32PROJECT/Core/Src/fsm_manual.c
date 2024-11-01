/*
 * fsm_manual.c
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#include "fsm_manual.h"


int prev_state[N0_OF_BUTTONS] = {NORMAL_STATE};
int state[N0_OF_BUTTONS] = {NORMAL_STATE};

void fsm_for_input_processing(){
	if(button_flag[0] == 1){
		switch(mode){
			case MODE_1:
				if(isButtonPressed(0)){
					clearAllLed();
					mode = MODE_2;
					subKeyProcess();
				}
				break;
			case MODE_2:
				if(isButtonPressed(0)){
					clearAllLed();
					mode = MODE_3;
					subKeyProcess();
				}
				break;
			case MODE_3:
				if(isButtonPressed(0)){
					clearAllLed();
					mode = MODE_4;
					subKeyProcess();
				}
				break;
			case MODE_4:
				if(isButtonPressed(0)){
					clearAllLed();
					mode = MODE_1;
					subKeyProcess();
				}
				break;
			default: break;
		}

		button_flag[0] = 0;
		timer_flag[0] = 1;
	}

	if(timer_flag[0]){
		blinkingLed(mode);
		setTimer(0, 10);
	}
	displayLED7SEG(mode, 0);
}

