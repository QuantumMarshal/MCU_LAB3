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
		break;

	default:
		break;
	}

	if (isButtonPressed(0) == 1 && (led_status == REDGREEN || led_status == REDYELLOW || led_status == GREENRED || led_status == YELLOWRED) ) {
		offLed();

		led_status = SET_RED;
		newRed = redTime;
		newGreen = greenTime;
		newYellow = yellowTime;

		setTimer5(1);
		timerRoad1 = redTime;
		timerRoad2 = 2;
	}
}

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
		if (isButtonPressed(1) == 1){
			newRed++;
			timerRoad1++;
			if (newRed >= 100) newRed = 2;
		}
		if (isButtonPressed(0) == 1){
			setTimer5(1);
			led_status = SET_YELLOW;

			timerRoad1 = yellowTime;
			timerRoad2 = 3;
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
		if (isButtonPressed(1) == 1){
			newYellow++;
			timerRoad1++;
			if (newYellow >= redTime) newYellow = 1;
		}
		if (isButtonPressed(0) == 1){
			setTimer5(1);
			led_status = SET_GREEN;

			timerRoad1 = greenTime;
			timerRoad2 = 4;
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

		if (isButtonPressed(1) == 1){
			newGreen++;
			timerRoad1++;
			if (newGreen >= redTime) newGreen = 1;
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
		if (isButtonPressed(2) == 1){
			greenTime = newGreen;
			yellowTime = redTime - greenTime;
		}
		break;
	default:
		break;
	}
}
