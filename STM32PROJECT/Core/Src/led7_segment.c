/*
 * led7_segment.c
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */
#include "led7_segment.h"

#define MODE 0
#define DUR 1

void displayLED7SEG(int number, int modify){
	int div = number / 10;
	int mod = number % 10;

	int arr1[4] = {0};
	int arr2[4] = {0};

	for(int i = 3; i >= 0; --i){
		arr1[i] = div % 2;
		div = div / 2;

		arr2[i] = mod % 2;
		mod = mod / 2;
	}

	if(modify == MODE){
		HAL_GPIO_WritePin(SETMODE_0_GPIO_Port, SETMODE_0_Pin, arr1[3]);
		HAL_GPIO_WritePin(SETMODE_1_GPIO_Port, SETMODE_1_Pin, arr1[2]);
		HAL_GPIO_WritePin(SETMODE_2_GPIO_Port, SETMODE_2_Pin, arr1[1]);
		HAL_GPIO_WritePin(SETMODE_3_GPIO_Port, SETMODE_3_Pin, arr1[0]);

		HAL_GPIO_WritePin(SETMODE_4_GPIO_Port, SETMODE_4_Pin, arr2[3]);
		HAL_GPIO_WritePin(SETMODE_5_GPIO_Port, SETMODE_5_Pin, arr2[2]);
		HAL_GPIO_WritePin(SETMODE_6_GPIO_Port, SETMODE_6_Pin, arr2[1]);
		HAL_GPIO_WritePin(SETMODE_7_GPIO_Port, SETMODE_7_Pin, arr2[0]);
	}
	if(modify == DUR){
		HAL_GPIO_WritePin(DUR_0_GPIO_Port, DUR_0_Pin, arr1[3]);
		HAL_GPIO_WritePin(DUR_1_GPIO_Port, DUR_1_Pin, arr1[2]);
		HAL_GPIO_WritePin(DUR_2_GPIO_Port, DUR_2_Pin, arr1[1]);
		HAL_GPIO_WritePin(DUR_3_GPIO_Port, DUR_3_Pin, arr1[0]);

		HAL_GPIO_WritePin(DUR_4_GPIO_Port, DUR_4_Pin, arr2[3]);
		HAL_GPIO_WritePin(DUR_5_GPIO_Port, DUR_5_Pin, arr2[2]);
		HAL_GPIO_WritePin(DUR_6_GPIO_Port, DUR_6_Pin, arr2[1]);
		HAL_GPIO_WritePin(DUR_7_GPIO_Port, DUR_7_Pin, arr2[0]);
	}
}
