/*
 * button.c
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */
#include "button.h"

int KeyReg0[10] = {NORMAL_STATE};
int KeyReg1[10] = {NORMAL_STATE};
int KeyReg2[10] = {NORMAL_STATE};
int KeyReg3[10] = {NORMAL_STATE};

int TimeOutForKeyPress = 500;
int button1_pressed[10] = {0};
int button1_long_pressed[10] = {0};
int button1_flag[10] = {0};

int isButton1Pressed(uint8_t index){
	if(button1_flag[index] == 1)
		return 1;
	return 0;
}

int isButton1LongPressed(uint8_t index){
	if(button1_long_pressed[index] == 1)
		return 1;
	return 0;
}

void subKeyProcess(){
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}
void getKeyInput(){
	for(int i = 0; i < 10; i++){
		KeyReg2[i] = KeyReg1[i];
		KeyReg1[i] = KeyReg0[i];
	}
	KeyReg0[0] = HAL_GPIO_ReadPin(SETMODE_0_GPIO_Port, SETMODE_0_Pin);
	for(int i = 0; i < 10; i++){
		if((KeyReg1[i] == KeyReg0[i]) && (KeyReg2[i] == KeyReg1[i])){
			if(KeyReg2[i] != KeyReg3[i]){
				KeyReg3[i] = KeyReg2[i];

				if(KeyReg3[i] == PRESSED_STATE){
					TimeOutForKeyPress = 500;
					button1_flag[i] = 1;
				}
			}
			else{
				TimeOutForKeyPress--;
				if(TimeOutForKeyPress == 0){
					TimeOutForKeyPress = 500;

					if(KeyReg3[i] == PRESSED_STATE){
						button_flag[i] = 1;
					}
				}
			}
		}
	}
}
