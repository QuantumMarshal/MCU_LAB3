/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RED1_Pin GPIO_PIN_3
#define RED1_GPIO_Port GPIOA
#define YELLOW1_Pin GPIO_PIN_4
#define YELLOW1_GPIO_Port GPIOA
#define GREEN1_Pin GPIO_PIN_5
#define GREEN1_GPIO_Port GPIOA
#define RED2_Pin GPIO_PIN_6
#define RED2_GPIO_Port GPIOA
#define YELLOW2_Pin GPIO_PIN_7
#define YELLOW2_GPIO_Port GPIOA
#define SEG7_A_Pin GPIO_PIN_0
#define SEG7_A_GPIO_Port GPIOB
#define SEG7_B_Pin GPIO_PIN_1
#define SEG7_B_GPIO_Port GPIOB
#define SEG7_C_Pin GPIO_PIN_2
#define SEG7_C_GPIO_Port GPIOB
#define GREEN2_Pin GPIO_PIN_8
#define GREEN2_GPIO_Port GPIOA
#define EN0_Pin GPIO_PIN_9
#define EN0_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_10
#define EN1_GPIO_Port GPIOA
#define EN2_Pin GPIO_PIN_11
#define EN2_GPIO_Port GPIOA
#define EN3_Pin GPIO_PIN_12
#define EN3_GPIO_Port GPIOA
#define SEG7_D_Pin GPIO_PIN_3
#define SEG7_D_GPIO_Port GPIOB
#define SEG7_E_Pin GPIO_PIN_4
#define SEG7_E_GPIO_Port GPIOB
#define SEG7_F_Pin GPIO_PIN_5
#define SEG7_F_GPIO_Port GPIOB
#define SEG7_G_Pin GPIO_PIN_6
#define SEG7_G_GPIO_Port GPIOB
#define BTN0_Pin GPIO_PIN_7
#define BTN0_GPIO_Port GPIOB
#define BTN1_Pin GPIO_PIN_8
#define BTN1_GPIO_Port GPIOB
#define BTN2_Pin GPIO_PIN_9
#define BTN2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
