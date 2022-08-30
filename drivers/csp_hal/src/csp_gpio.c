/**
 * @file csp_gpio.c
 * @author xqyjlj (xqyjlj@126.com)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022-2022, zhouquan
 *
 * @SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2022-07-17     xqyjlj      the first version
 *
 */

#include <chal/gpio.h>

void chal_gpio_init(GPIO_TypeDef     *gpiox,
                    rt_uint16_t       pin,
                    chal_gpio_exti_e  irqn,
                    chal_gpio_mode_e  mode,
                    chal_gpio_speed_e speed,
                    chal_gpio_pull_e  pull)
{
    RT_ASSERT(gpiox);

    chal_gpio_t gpio = {0};
    gpio.init.Pin    = pin;
    gpio.init.Mode   = mode;
    gpio.init.Speed  = speed;
    gpio.init.Pull   = pull;
    __chal_gpio_init(gpiox, pin, gpio);
}

void chal_gpio_deinit(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn)
{
    RT_ASSERT(gpiox);

    __chal_gpio_deinit(gpiox, pin);
}

chal_gpio_state_e chal_gpio_read_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn)
{
    RT_ASSERT(gpiox);

    return (chal_gpio_state_e)__chal_gpio_read_pin(gpiox, pin);
}

void chal_gpio_write_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn, chal_gpio_state_e state)
{
    RT_ASSERT(gpiox);

    __chal_gpio_write_pin(gpiox, pin, (GPIO_PinState)state);
}

void chal_gpio_toggle_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn)
{
    RT_ASSERT(gpiox);

    __chal_gpio_toggle_pin(gpiox, pin);
}

rt_err_t chal_gpio_lock_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn)
{
    RT_ASSERT(gpiox);

    HAL_StatusTypeDef status = __chal_gpio_lock_pin(gpiox, pin);
    return sthal2rterr(status);
}

void chal_gpio_set_irq(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn, uint32_t preempt, uint32_t sub)
{
    __chal_gpio_set_irq((IRQn_Type)irqn, preempt, sub);
}

void chal_gpio_enable_irq(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn)
{
    __chal_gpio_enable_irq(irqn);
}

void chal_gpio_disable_irq(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn)
{
    __chal_gpio_disable_irq(irqn);
}

RT_WEAK void chal_gpio_irq_callback(uint16_t pin)
{
    (void)(pin);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    chal_gpio_irq_callback(GPIO_Pin);
}

void EXTI0_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_0);
}

void EXTI1_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_1);
}

void EXTI2_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_2);
}

void EXTI3_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_3);
}

void EXTI4_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_4);
}

void EXTI9_5_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_5);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_6);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_7);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_9);
}

void EXTI15_10_IRQHandler(void)
{
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_10);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_11);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_12);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_13);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_14);
    HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_15);
}
