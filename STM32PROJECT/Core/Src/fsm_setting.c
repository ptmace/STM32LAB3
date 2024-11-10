/*
 * fsm_setting.c
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */


#include "fsm_setting.h"

void fsm_setting(){
	switch(status){
		case MODE_1:
			status = INIT;
			break;
		case MODE_2:
			displayLED7SEG(status, 1);
			displayLED7SEG(adj_red, 0);
			if(timer_flag[0]){
				blinkingLed(status);
				setTimer(0, 50);
			}
			if(isButtonPressed(0)){
				status = MODE_3;
				clearAllLed();
				button_flag[0] = 0;
			}
			if(isButtonPressed(1)){
				button_flag[1] = 0;
				adj_red++;
				if(adj_red == 100)
					adj_red = 1;
				displayLED7SEG(adj_red, 0);
			}
			if(isButtonPressed(2)){
				button_flag[2] = 0;
				if(adj_red > 2){
					green = ((amber < adj_red) ? (adj_red - amber) : green);
					amber = ((green < adj_red) ? (adj_red - green) : amber);

					if(green + amber < 100){
						adj_red = green + amber;
						red = adj_red;

						temp_red = red;
						temp_amber = amber;
						temp_green = green;
					}
					else{
						red = max_red;
						amber = max_amber;
						green = max_green;
						temp_red = red;
						temp_amber = amber;
						temp_green = green;
					}
				}
				else{
					red = max_red;
					amber = max_amber;
					green = max_green;
				}
				status = RED_GREEN;
				setTimer(1, green*100);
				setTimer(0, 1);
			}
			break;
		case MODE_3:
			displayLED7SEG(status, 1);
			displayLED7SEG(adj_amber, 0);
			if(timer_flag[0]){
				blinkingLed(status);
				setTimer(0, 50);
			}
			if(isButtonPressed(0)){
				status = MODE_4;
				clearAllLed();
				button_flag[0] = 0;
			}
			if(isButtonPressed(1)){
				button_flag[1] = 0;
				adj_amber++;
				if(adj_amber == 100)
					adj_amber = 1;
				displayLED7SEG(adj_amber, 0);
			}
			if(isButtonPressed(2)){
				button_flag[2] = 0;
				green = ((adj_amber < red) ? (red - adj_amber) : green);

				if(green + adj_amber < 100){
					red = adj_green + adj_amber;
					amber = adj_amber;
					temp_red = red;
					temp_amber = amber;
					temp_green = green;
				}
				else{
					red = max_red;
					amber = max_amber;
					green = max_green;
					temp_red = red;
					temp_amber = amber;
					temp_green = green;
				}

				status = RED_GREEN;
				setTimer(1, green*100);
				setTimer(0, 1);
			}
			break;
		case MODE_4:
			displayLED7SEG(status, 1);
			displayLED7SEG(adj_green, 0);
			if(timer_flag[0]){
				blinkingLed(status);
				setTimer(0, 50);
			}
			if(isButtonPressed(0)){
				status = MODE_1;
				clearAllLed();
				button_flag[0] = 0;
			}
			if(isButtonPressed(1)){
				button_flag[1] = 0;
				adj_green++;
				if(adj_green == 100)
					adj_green = 1;
				displayLED7SEG(adj_green, 0);
			}
			if(isButtonPressed(2)){
				button_flag[2] = 0;
				amber = ((adj_green < red) ? (red - adj_green) : amber);

				if(adj_green + amber < 100){
					red = adj_green + adj_amber;
					green = adj_green;
					temp_red = red;
					temp_amber = amber;
					temp_green = green;
				}
				else{
					red = max_red;
					amber = max_amber;
					green = max_green;
					temp_red = red;
					temp_amber = amber;
					temp_green = green;
				}

				status = RED_GREEN;
				setTimer(1, green*100);
				setTimer(0, 1);
			}
			break;
		default:
			break;
	}
}
