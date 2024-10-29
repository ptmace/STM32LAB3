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
#define PRESS_STATEM RESET

extern int button1_flag;

void getKeyInput();

#endif /* INC_BUTTON_H_ */
