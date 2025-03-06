/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32l4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FSLeft_A5_Pin GPIO_PIN_0
#define FSLeft_A5_GPIO_Port GPIOC
#define FSRight_A4_Pin GPIO_PIN_1
#define FSRight_A4_GPIO_Port GPIOC
#define FSMiddle_35_Pin GPIO_PIN_2
#define FSMiddle_35_GPIO_Port GPIOC
#define Pump_24_Pin GPIO_PIN_1
#define Pump_24_GPIO_Port GPIOB
#define LMReverse_D6_Pin GPIO_PIN_10
#define LMReverse_D6_GPIO_Port GPIOB
#define RMForward_D9_Pin GPIO_PIN_7
#define RMForward_D9_GPIO_Port GPIOC
#define LMForward_D5_Pin GPIO_PIN_4
#define LMForward_D5_GPIO_Port GPIOB
#define RMReverse_D10_Pin GPIO_PIN_6
#define RMReverse_D10_GPIO_Port GPIOB
#define Buzzer_Pin GPIO_PIN_8
#define Buzzer_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
