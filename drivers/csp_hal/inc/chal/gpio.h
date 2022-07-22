/**
 * @file gpio.h
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

#ifndef __CHAL_GPIO_H__
#define __CHAL_GPIO_H__

#include <chal/hal.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CHAL_GPIO_GET_PIN(PORTx, PIN)            GPIO##PORTx, GPIO_PIN_##PIN, CHAL_GPIO_EXTI##PIN##_IRQn

#define CHAL_GPIOX_CLK_ENABLE(PORTx)             __HAL_RCC_GPIO##PORTx##_CLK_ENABLE()
#define CHAL_GPIOX_CLK_DISABLE(PORTx)            __HAL_RCC_GPIO##PORTx##_CLK_DISABLE()
#define CHAL_GPIOX_IS_CLK_ENABLED(PORTx)         __HAL_RCC_GPIO##PORTx##_IS_CLK_ENABLED();

#define __chal_gpio_init(gpiox, pin, gpio)       HAL_GPIO_Init(gpiox, &gpio.init);
#define __chal_gpio_deinit(gpiox, pin)           HAL_GPIO_DeInit(gpiox, pin);
#define __chal_gpio_read_pin(gpiox, pin)         HAL_GPIO_ReadPin(gpiox, pin);
#define __chal_gpio_write_pin(gpiox, pin, state) HAL_GPIO_WritePin(gpiox, pin, state);
#define __chal_gpio_toggle_pin(gpiox, pin)       HAL_GPIO_TogglePin(gpiox, pin);
#define __chal_gpio_lock_pin(gpiox, pin)         HAL_GPIO_LockPin(gpiox, pin);

#define __chal_gpio_set_irq(irqn, preempt, sub)  HAL_NVIC_SetPriority(irqn, preempt, sub);
#define __chal_gpio_enable_irq(irqn)             HAL_NVIC_EnableIRQ(irqn);
#define __chal_gpio_disable_irq(irqn)            HAL_NVIC_DisableIRQ(irqn);

typedef enum
{
    CHAL_GPIO_PIN_RESET = 0,  //低电平
    CHAL_GPIO_PIN_SET         //高电平
} chal_gpio_state_e;

typedef enum
{
    CHAL_GPIO_MODE_INPUT              = GPIO_MODE_INPUT,               //输入模式
    CHAL_GPIO_MODE_OUTPUT_PP          = GPIO_MODE_OUTPUT_PP,           //推挽输出模式
    CHAL_GPIO_MODE_OUTPUT_OD          = GPIO_MODE_OUTPUT_OD,           //开漏输出模式
    CHAL_GPIO_MODE_AF_PP              = GPIO_MODE_AF_PP,               //推挽复用模式
    CHAL_GPIO_MODE_AF_OD              = GPIO_MODE_AF_OD,               //开漏复用模式
    CHAL_GPIO_MODE_ANALOG             = GPIO_MODE_ANALOG,              //模拟模式
    CHAL_GPIO_MODE_IRQ_RISING         = GPIO_MODE_IT_RISING,           //上升沿中断模式
    CHAL_GPIO_MODE_IRQ_FALLING        = GPIO_MODE_IT_FALLING,          //下降沿中断模式
    CHAL_GPIO_MODE_IRQ_RISING_FALLING = GPIO_MODE_IT_RISING_FALLING,   //上升沿下降沿中断模式
    CHAL_GPIO_MODE_EVT_RISING         = GPIO_MODE_EVT_RISING,          //上升沿事件模式
    CHAL_GPIO_MODE_EVT_FALLING        = GPIO_MODE_EVT_FALLING,         //下降沿事件模式
    CHAL_GPIO_MODE_EVT_RISING_FALLING = GPIO_MODE_EVT_RISING_FALLING,  //上升沿下降沿事件模式
} chal_gpio_mode_e;

typedef enum
{
    CHAL_GPIO_SPEED_LOW       = GPIO_SPEED_FREQ_LOW,       //低速
    CHAL_GPIO_SPEED_MEDIUM    = GPIO_SPEED_FREQ_MEDIUM,    //中速
    CHAL_GPIO_SPEED_HIGH      = GPIO_SPEED_FREQ_HIGH,      //高速
    CHAL_GPIO_SPEED_VERY_HIGH = GPIO_SPEED_FREQ_VERY_HIGH  //非常高速
} chal_gpio_speed_e;

typedef enum
{
    CHAL_GPIO_PULL_NO      = GPIO_NOPULL,    //浮空
    CHAL_GPIO_GPIO_PULL_UP = GPIO_PULLUP,    //上拉
    CHAL_GPIO_PULL_DOWN    = GPIO_PULLDOWN,  //下拉
} chal_gpio_pull_e;

typedef enum
{
    CHAL_GPIO_EXTI0_IRQn  = EXTI0_IRQn,
    CHAL_GPIO_EXTI1_IRQn  = EXTI1_IRQn,
    CHAL_GPIO_EXTI2_IRQn  = EXTI2_IRQn,
    CHAL_GPIO_EXTI3_IRQn  = EXTI3_IRQn,
    CHAL_GPIO_EXTI4_IRQn  = EXTI4_IRQn,
    CHAL_GPIO_EXTI5_IRQn  = EXTI9_5_IRQn,
    CHAL_GPIO_EXTI6_IRQn  = CHAL_GPIO_EXTI5_IRQn,
    CHAL_GPIO_EXTI7_IRQn  = CHAL_GPIO_EXTI5_IRQn,
    CHAL_GPIO_EXTI8_IRQn  = CHAL_GPIO_EXTI5_IRQn,
    CHAL_GPIO_EXTI9_IRQn  = CHAL_GPIO_EXTI5_IRQn,
    CHAL_GPIO_EXTI10_IRQn = EXTI15_10_IRQn,
    CHAL_GPIO_EXTI11_IRQn = CHAL_GPIO_EXTI10_IRQn,
    CHAL_GPIO_EXTI12_IRQn = CHAL_GPIO_EXTI10_IRQn,
    CHAL_GPIO_EXTI13_IRQn = CHAL_GPIO_EXTI10_IRQn,
    CHAL_GPIO_EXTI14_IRQn = CHAL_GPIO_EXTI10_IRQn,
    CHAL_GPIO_EXTI15_IRQn = CHAL_GPIO_EXTI10_IRQn,
} chal_gpio_exti_e;

typedef struct
{
    GPIO_InitTypeDef init;
} chal_gpio_t;

void              chal_gpio_init(GPIO_TypeDef     *gpiox,
                                 rt_uint16_t       pin,
                                 chal_gpio_exti_e  irqn,
                                 chal_gpio_mode_e  mode,
                                 chal_gpio_speed_e speed,
                                 chal_gpio_pull_e  pull);
void              chal_gpio_deinit(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn);
chal_gpio_state_e chal_gpio_read_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn);
void              chal_gpio_write_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn, chal_gpio_state_e state);
void              chal_gpio_toggle_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn);
rt_err_t          chal_gpio_lock_pin(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn);

void              chal_gpio_set_irq(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn, uint32_t preempt, uint32_t sub);
void              chal_gpio_enable_irq(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn);
void              chal_gpio_disable_irq(GPIO_TypeDef *gpiox, rt_uint16_t pin, chal_gpio_exti_e irqn);

void              chal_gpio_irq_callback(uint16_t pin);

#ifdef __cplusplus
}
#endif

#endif
