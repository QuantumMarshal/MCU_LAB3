/*
 * display7seg.c
 *
 *  Created on: Oct 29, 2023
 *      Author: Admin
 */

#include "display7seg.h"

void display7SEG(int num){
	switch(num){
	case 0:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, SET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, SET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, SET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, SET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, SET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, SET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, SET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, SET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, SET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, SET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, SET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, SET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, SET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, SET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, SET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, SET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, SET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, SET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, RESET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, RESET);
		break;
	default:
		HAL_GPIO_WritePin(SEG7_A_GPIO_Port, SEG7_A_Pin, SET);
		HAL_GPIO_WritePin(SEG7_B_GPIO_Port, SEG7_B_Pin, SET);
		HAL_GPIO_WritePin(SEG7_C_GPIO_Port, SEG7_C_Pin, SET);
		HAL_GPIO_WritePin(SEG7_D_GPIO_Port, SEG7_D_Pin, SET);
		HAL_GPIO_WritePin(SEG7_E_GPIO_Port, SEG7_E_Pin, SET);
		HAL_GPIO_WritePin(SEG7_F_GPIO_Port, SEG7_F_Pin, SET);
		HAL_GPIO_WritePin(SEG7_G_GPIO_Port, SEG7_G_Pin, SET);
		break;
	}
}

void clearSignal(){
	HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,SET);
	HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,SET);
	HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,SET);
	HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin,SET);
}

void update7SEG(int index){
	clearSignal();
	display7SEG(led_buffer[index]);
	switch(index){
	case 0:
		HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
		break;
	case 1:
		HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
		break;
	case 2:
		HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
		break;
	default:
		break;
	}
}
