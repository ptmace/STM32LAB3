/*
 * button.c
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#include "button.h"

int KeyReg0[10] = NORMAL_STATE;
int KeyReg1[10] = NORMAL_STATE;
int KeyReg2[10] = NORMAL_STATE;
int KeyReg3[10] = NORMAL_STATE;

int TimeOutForKeyPress = 500;
int button1_pressed = 0;
int button1_long_pressed = 0;
int button1_flag = 0;

int isButton1Pressed(){
	if(button1_flag == 1)
		return 1;
	return 0;
}

int isButton1LongPressed(){
	if(button1_long_pressed == 1)
		return 1;
	return 0;
}

void subKeyProcess(){

}
void getKeyInput(){

}
