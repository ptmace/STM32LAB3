/*
 * traffic_light.c
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#include "traffic_light.h"


void clearAllLed(){
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, RESET);
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, RESET);

	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, RESET);

	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, RESET);
	HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, RESET);
}
void led_red_green(){
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, SET);
}
void led_red_amber(){
	HAL_GPIO_WritePin(LED_RED_0_GPIO_Port, LED_RED_0_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, SET);
}
void led_green_red(){
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_GREEN_0_GPIO_Port, LED_GREEN_0_Pin, SET);
}
void led_amber_red(){
	HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, SET);
	HAL_GPIO_WritePin(LED_YELLOW_0_GPIO_Port, LED_YELLOW_0_Pin, SET);
}
void init_traffic_light(){
	setTimer(1, 100);

	clearAllLed();
	led_red_green();
	led_red_amber();
}
void controlTime_led(){
	if(red <= 0)
		red = temp_red;
	if(green <= 0)
		green = temp_green;
	if(amber <= 0)
		amber = temp_amber;
}
void blinkingLed(int mode){
	switch(mode){
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
