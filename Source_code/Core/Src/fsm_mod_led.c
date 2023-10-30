/*
 * fsm_mod_led.c
 *
 *  Created on: Oct 30, 2023
 *      Author: Admin
 */
#include "fsm_mod_led.h"

void fsm_mod_led(){
	switch (led_status){
	case SET_RED:
		if (timer5_flag == 1){
			setTimer5(25);
			if (toggle == 0){
				toggle = 1;
				onRed1();
				onRed2();
			}
			else {
				toggle = 0;
				offLed();
			}
		}

		if (isButtonPressed(0) == 1){
			setTimer5(1);
			led_status = SET_YELLOW;

			timerRoad1 = yellowTime;
			timerRoad2 = 3;
		}

		if (isButtonPressed(1) == 1){
			newRed++;
			timerRoad1++;
			if (newRed >= 100) newRed = 2;
		}

		if (isButtonPressed(2) == 1){
			redTime = newRed;
		}
		break;

	case SET_YELLOW:
		if (timer5_flag == 1){
			setTimer5(25);
			if (toggle == 0){
				toggle = 1;
				onYellow1();
				onYellow2();
			}
			else {
				toggle = 0;
				offLed();
			}
		}

		if (isButtonPressed(0) == 1){
			setTimer5(1);
			led_status = SET_GREEN;

			timerRoad1 = greenTime;
			timerRoad2 = 4;
		}
		if (isButtonPressed(1) == 1){
			newYellow++;
			timerRoad1++;
			if (newYellow >= redTime) newYellow = 1;
		}

		if (isButtonPressed(2) == 1){
			yellowTime=newYellow;
		}
		break;

	case SET_GREEN:
		if (timer5_flag == 1){
			setTimer5(25);
			if (toggle == 0){
				toggle = 1;
				onGreen1();
				onGreen2();
			}
			else {
				toggle = 0;
				offLed();
			}
		}

		if (isButtonPressed(0) == 1){
			led_status = REDGREEN;
			greenTime = redTime - yellowTime;
			timerRoad1 = redTime;
			timerRoad2 = greenTime;
			updateLedBuffer();
			setTimer1(greenTime*100);
			setTimer2(100);

			//to display new value of 7SEG
			setTimer4(1);
			index_led=0;
			clearSignal();

		}

		if (isButtonPressed(1) == 1){
			newGreen++;
			timerRoad1++;
			if (newGreen >= redTime) newGreen = 1;
		}

		if (isButtonPressed(2) == 1){
			greenTime = newGreen;
			yellowTime = redTime - greenTime;
		}
		break;
	default:
		break;
	}
}
