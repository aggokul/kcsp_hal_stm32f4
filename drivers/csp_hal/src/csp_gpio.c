/**
 * @file csp_gpio.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <chal/gpio.h>

void chal_gpio_init(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_t *gpio)
{
    RT_ASSERT(gpiox);
    RT_ASSERT(gpio);

    HAL_GPIO_Init(gpiox, &gpio->init);
}

void chal_gpio_deinit(GPIO_TypeDef *gpiox, rt_uint16_t pin)
{
    RT_ASSERT(gpiox);

    HAL_GPIO_DeInit(gpiox, pin);
}

CHAL_GPIO_PinState chal_gpio_read_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin)
{
    RT_ASSERT(gpiox);

    return (CHAL_GPIO_PinState)HAL_GPIO_ReadPin(gpiox, pin);
}

void chal_gpio_write_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, CHAL_GPIO_PinState state)
{
    RT_ASSERT(gpiox);

    HAL_GPIO_WritePin(gpiox, pin, (GPIO_PinState)state);
}

void chal_gpio_toggle_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin)
{
    RT_ASSERT(gpiox);

    HAL_GPIO_TogglePin(gpiox, pin);
}

rt_err_t chal_gpio_lock_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin)
{
    RT_ASSERT(gpiox);

    return sthal2rterr(HAL_GPIO_LockPin(gpiox, pin));
}
