/**
 * @file hal.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CHAL_HAL_H__
#define __CHAL_HAL_H__

#include "stm32f4xx_hal.h"
#include <rtthread.h>

#ifdef __cplusplus
extern "C" {
#endif

void _Error_Handler(char *s, int num);

#ifndef Error_Handler
#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#endif

rt_err_t sthal2rterr(HAL_StatusTypeDef status);

#ifdef __cplusplus
}
#endif

#endif
