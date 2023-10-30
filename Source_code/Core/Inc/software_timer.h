/*
 * software_timer.h
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

//  ==== TIMER ====
/*
 * timer1: Traffic light
 * timer2: set time for 7 led segment
 * timer3: update led buffer
 * timer4: change EN signal for 7 led segment
 * timer5: modify time
 */

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);

void timerRun();

#endif /* INC_SOFTWARE_TIMER_H_ */
