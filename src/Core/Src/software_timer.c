/*
 * software_timer.c
 *
 *  Created on: Dec 4, 2023
 *      Author: ADMIN
 */


#include "software_timer.h"
#include "scheduler.h"

int timer_flag = 0;
int timer_counter = 0;

void setTimer(int duration) {
	timer_counter = duration;
	timer_flag = 0;
}

void timerRun() {
	if (timer_counter > 0) {
		timer_counter --;
	} else {
		timer_flag = 1;
	}
}

