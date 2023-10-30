/*
 * fsm_traffic_light.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include "fsm_traffic_light.h"

void fsm_traffic_light(){
	switch (led_status){
	case INIT:
		offLed();

		led_status = REDGREEN;
		setTimer1(greenTime*100);
		setTimer2(100);

		timerRoad1 = redTime;
		timerRoad2 = greenTime;
		break;

	case REDGREEN:
		onRed1();
		onGreen2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = yellowTime;
		}

		if (timer1_flag == 1){
			setTimer1(yellowTime*100);
			led_status = REDYELLOW;
		}

		if (isButtonPressed(0) == 1) {
			offLed();

			led_status = SET_RED;
			newRed = redTime;
			newGreen = greenTime;
			newYellow = yellowTime;

			setTimer5(1);
			timerRoad1 = redTime;
			timerRoad2 = 2;
		}

		break;

	case REDYELLOW:
		onRed1();
		onYellow2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			timerRoad2--;
			if (timerRoad1 <= 0) timerRoad1 = greenTime;
			if (timerRoad2 <= 0) timerRoad2 = redTime;
		}

		if(timer1_flag == 1){
			setTimer1(greenTime*100);
			led_status = GREENRED;
		}

		if (isButtonPressed(0) == 1) {
			offLed();

			led_status = SET_RED;
			newRed = redTime;
			newGreen = greenTime;
			newYellow = yellowTime;

			setTimer5(1);
			timerRoad1 = redTime;
			timerRoad2 = 2;
		}

		break;

	case GREENRED:
		onGreen1();
		onRed2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = yellowTime;
			timerRoad2--;
		}


		if(timer1_flag == 1){
			setTimer1(yellowTime*100);
			led_status = YELLOWRED;
		}

		if (isButtonPressed(0) == 1) {
			offLed();

			led_status = SET_RED;
			newRed = redTime;
			newGreen = greenTime;
			newYellow = yellowTime;

			setTimer5(1);
			timerRoad1 = redTime;
			timerRoad2 = 2;
		}
		break;

	case YELLOWRED:
		onYellow1();
		onRed2();

		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = redTime;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = greenTime;
		}

		if (timer1_flag == 1){
			setTimer1(greenTime*100);
			led_status = REDGREEN;
		}

		if (isButtonPressed(0) == 1) {
			offLed();

			led_status = SET_RED;
			newRed = redTime;
			newGreen = greenTime;
			newYellow = yellowTime;

			setTimer5(1);
			timerRoad1 = redTime;
			timerRoad2 = 2;
		}
		break;

	default:
		break;
	}


}


