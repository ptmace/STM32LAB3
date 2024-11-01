/*
 * traffic_light.c
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#include "traffic_light.h"

int mode;
int counter = 0;

void clearAllLed(){
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);

	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, RESET);

	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, RESET);
}
void blinkingLed(int mode){
	switch(mode){
		case MODE_1:
			run_traffic_light();
			break;
		case MODE_2:
			HAL_GPIO_TogglePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin);
			HAL_GPIO_TogglePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
			break;
		case MODE_3:
			HAL_GPIO_TogglePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin);
			HAL_GPIO_TogglePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
			break;
		case MODE_4:
			HAL_GPIO_TogglePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin);
			HAL_GPIO_TogglePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
			break;
		default: break;
	}
}
void led_red(){
	HAL_GPIO_TogglePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin);
	HAL_GPIO_TogglePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin);
}
void led_yellow(){
	HAL_GPIO_TogglePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin);
	HAL_GPIO_TogglePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin);
}
void led_green(){
	HAL_GPIO_TogglePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin);
	HAL_GPIO_TogglePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin);
}
void init_traffic_light(){
	setTimer(1, 100);

	clearAllLed();
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, SET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);

	HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);

	HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
}
void run_traffic_light(){
	if(timer_flag[1]){
		counter++;
		if(counter == 4){
			clearAllLed();
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, SET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);

			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);

			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);

		}
		else if(counter == 6){
			clearAllLed();
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);

			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);

			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
		}
		else if(counter == 9){
			clearAllLed();
			HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);

			HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);

			HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
		}
		else if(counter == 11){
			init_traffic_light();
			counter = 0;
		}
		setTimer(1, 100);
	}
}
