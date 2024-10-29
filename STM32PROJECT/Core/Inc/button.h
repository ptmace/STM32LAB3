/*
 * button.h
 *
 *  Created on: Oct 28, 2024
 *      Author: 2004p
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_


#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define N0_OF_BUTTONS 10

extern int button_flag[10];

void getKeyInput();

#endif /* INC_BUTTON_H_ */
