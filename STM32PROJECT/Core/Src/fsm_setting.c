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
			status = MODE_2;
			break;
		case MODE_2:
			status = MODE_3;
			break;
		case MODE_3:
			status = MODE_4;
			break;
		case MODE_4:
			status = MODE_1;
			break;
		default:
			status = MODE_1;
			break;
	}
}

