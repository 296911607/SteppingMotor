#ifndef   _BSP_L298N_H_
#define   _BSP_L298N_H_

#include "stm32f0xx_hal.h"

#define L298N_RCC_CLK_ENABLE()         __HAL_RCC_GPIOA_CLK_ENABLE()
#define L298N_GPIO_PIN                 (GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3)
#define L298N_GPIO_PORT                GPIOA
//A��A-��B��B-���Ŷ���
#define A_P_ON                         HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_0,GPIO_PIN_SET)
#define A_P_OFF                        HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_0,GPIO_PIN_RESET)
#define A_N_ON                         HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_1,GPIO_PIN_SET)
#define A_N_OFF                        HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_1,GPIO_PIN_RESET)
#define B_P_ON                         HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_2,GPIO_PIN_SET)
#define B_P_OFF                        HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_2,GPIO_PIN_RESET)
#define B_N_ON                         HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_3,GPIO_PIN_SET)
#define B_N_OFF                        HAL_GPIO_WritePin(L298N_GPIO_PORT,GPIO_PIN_3,GPIO_PIN_RESET)

void L298N_GPIO_Init(void);

#endif
