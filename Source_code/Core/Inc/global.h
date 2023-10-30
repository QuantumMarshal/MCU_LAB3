/*
 * global.h
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"

// FSM for traffic light
typedef enum {
	// Initial State
	INIT,

	// Traffic State
	REDGREEN,
	REDYELLOW,
	GREENRED,
	YELLOWRED,

	// Modify State
	SET_RED,
	SET_YELLOW,
	SET_GREEN
} eTrafficLightState;

extern eTrafficLightState led_status;

extern int redTime;
extern int greenTime;
extern int yellowTime;

extern int newRed;
extern int newGreen;
extern int newYellow;

extern int toggle;

extern int led_buffer[4];
extern int index_led;
extern int timerRoad1;
extern int timerRoad2;
void updateLedBuffer();

#endif /* INC_GLOBAL_H_ */
