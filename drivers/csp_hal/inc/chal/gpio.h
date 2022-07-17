/**
 * @file gpio.h
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#ifndef __CHAL_GPIO_H__
#define __CHAL_GPIO_H__

#include <chal/hal.h>

#define CHAL_GET_PIN(PORTx, PIN) GPIO##PORTx, GPIO_PIN_##PIN

#define CHAL_GPIOX_CLK_ENABLE(PORTx)     __HAL_RCC_GPIO##PORTx##_CLK_ENABLE()
#define CHAL_GPIOX_CLK_DISABLE(PORTx)    __HAL_RCC_GPIO##PORTx##_CLK_DISABLE()
#define CHAL_GPIOX_IS_CLK_ENABLED(PORTx) __HAL_RCC_GPIO##PORTx##_IS_CLK_ENABLED();

typedef enum
{
    CHAL_GPIO_PIN_RESET = 0,
    CHAL_GPIO_PIN_SET
} CHAL_GPIO_PinState;

typedef struct
{
    GPIO_InitTypeDef init;
} chal_gpio_t;

void               chal_gpio_init(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_t *gpio);
void               chal_gpio_deinit(GPIO_TypeDef *gpiox, rt_uint16_t pin);
CHAL_GPIO_PinState chal_gpio_read_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin);
void               chal_gpio_write_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, CHAL_GPIO_PinState state);
void               chal_gpio_toggle_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin);
rt_err_t           chal_gpio_lock_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin);

#endif
