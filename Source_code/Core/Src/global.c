/*
 * global.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include "global.h"

eTrafficLightState led_status = INIT;

// First initialization for time
int redTime = 5;
int greenTime = 3;
int yellowTime = 2;

int newRed = 0;
int newGreen = 0;
int newYellow = 0;

int toggle=0;

// Initialization 7 segment led
int led_buffer[4]={0,0,0,0};
int index_led = 0;
int timerRoad1 = 0;
int timerRoad2 = 0;

void updateLedBuffer(){
	led_buffer[0] = timerRoad1 / 10;
	led_buffer[1] = timerRoad1 % 10;
	led_buffer[2] = timerRoad2 / 10;
	led_buffer[3] = timerRoad2 % 10;
}
