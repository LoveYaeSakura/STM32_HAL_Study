/**
  ******************************************************************************
  * File Name          : gpio.h
  * Description        : This file contains all the functions prototypes for 
  *                      the gpio  
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
extern "C"
{
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

    /* USER CODE BEGIN Includes */

    /* USER CODE END Includes */

    /* USER CODE BEGIN Private defines */
    /* 直接操作寄存器的方法控制IO */
#define digitalHi(p, i) \
    {                   \
        p->BSRR = i;    \
    } //设置为高电平
#define digitalLo(p, i)              \
    {                                \
        p->BSRR = (uint32_t)i << 16; \
    } //输出低电平
#define digitalToggle(p, i) \
    {                       \
        p->ODR ^= i;        \
    } //输出反转状态

    /* 定义控制IO的宏 */
#define LED1_TOGGLE digitalToggle(LED1_GPIO_Port, LED1_Pin)
#define LED1_OFF digitalHi(LED1_GPIO_Port, LED1_Pin)
#define LED1_ON digitalLo(LED1_GPIO_Port, LED1_Pin)

#define LED2_TOGGLE digitalToggle(LED2_GPIO_Port, LED2_Pin)
#define LED2_OFF digitalHi(LED2_GPIO_Port, LED2_Pin)
#define LED2_ON digitalLo(LED2_GPIO_Port, LED2_Pin)
    /* USER CODE END Private defines */

    void MX_GPIO_Init(void);

    /* USER CODE BEGIN Prototypes */

    /* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
