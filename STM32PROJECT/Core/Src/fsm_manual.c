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
	for(int i = 0; i < N0_OF_BUTTONS; i++){
		if(isButtonPressed(i)){
			prev_state[i] = state[i];
			state[i] = PRESSED_STATE;
		}
		else{
			prev_state[i] = state[i];
			state[i] = NORMAL_STATE;
		}
	}

	switch(mode){
		case MODE_1:
			if(state[0] == PRESSED_STATE && prev_state[0] == NORMAL_STATE){
				clearAllLed();
				mode = MODE_2;
			}
			break;
		case MODE_2:
			if(state[0] == PRESSED_STATE && prev_state[0] == NORMAL_STATE){
				clearAllLed();
				mode = MODE_3;
			}
			break;
		case MODE_3:
			if(state[0] == PRESSED_STATE && prev_state[0] == NORMAL_STATE){
				clearAllLed();
				mode = MODE_4;
			}
			break;
		case MODE_4:
			if(state[0] == PRESSED_STATE && prev_state[0] == NORMAL_STATE){
				clearAllLed();
				mode = MODE_1;
			}
			break;
		default: break;
	}
}

