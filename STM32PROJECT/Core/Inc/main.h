/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
#define SETMODE_0_Pin GPIO_PIN_1
#define SETMODE_0_GPIO_Port GPIOA
#define SETMODE_1_Pin GPIO_PIN_2
#define SETMODE_1_GPIO_Port GPIOA
#define SETMODE_2_Pin GPIO_PIN_3
#define SETMODE_2_GPIO_Port GPIOA
#define SETMODE_3_Pin GPIO_PIN_4
#define SETMODE_3_GPIO_Port GPIOA
#define LED_RED_Pin GPIO_PIN_5
#define LED_RED_GPIO_Port GPIOA
#define LED_RED_0_Pin GPIO_PIN_0
#define LED_RED_0_GPIO_Port GPIOB
#define LED_RED_1_Pin GPIO_PIN_1
#define LED_RED_1_GPIO_Port GPIOB
#define LED_YELLOW_0_Pin GPIO_PIN_2
#define LED_YELLOW_0_GPIO_Port GPIOB
#define DUR_4_Pin GPIO_PIN_10
#define DUR_4_GPIO_Port GPIOB
#define DUR_5_Pin GPIO_PIN_11
#define DUR_5_GPIO_Port GPIOB
#define DUR_6_Pin GPIO_PIN_12
#define DUR_6_GPIO_Port GPIOB
#define DUR_7_Pin GPIO_PIN_13
#define DUR_7_GPIO_Port GPIOB
#define SETMODE_4_Pin GPIO_PIN_10
#define SETMODE_4_GPIO_Port GPIOA
#define SETMODE_5_Pin GPIO_PIN_11
#define SETMODE_5_GPIO_Port GPIOA
#define SETMODE_6_Pin GPIO_PIN_12
#define SETMODE_6_GPIO_Port GPIOA
#define SETMODE_7_Pin GPIO_PIN_13
#define SETMODE_7_GPIO_Port GPIOA
#define LED_YELLOW_1_Pin GPIO_PIN_3
#define LED_YELLOW_1_GPIO_Port GPIOB
#define LED_GREEN_0_Pin GPIO_PIN_4
#define LED_GREEN_0_GPIO_Port GPIOB
#define LED_GREEN_1_Pin GPIO_PIN_5
#define LED_GREEN_1_GPIO_Port GPIOB
#define DUR_0_Pin GPIO_PIN_6
#define DUR_0_GPIO_Port GPIOB
#define DUR_1_Pin GPIO_PIN_7
#define DUR_1_GPIO_Port GPIOB
#define DUR_2_Pin GPIO_PIN_8
#define DUR_2_GPIO_Port GPIOB
#define DUR_3_Pin GPIO_PIN_9
#define DUR_3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
