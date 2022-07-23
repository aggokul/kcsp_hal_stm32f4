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

#if defined(GPIOA)
#define PA0  CHAL_GPIO_GET_PIN(A, 0)
#define PA1  CHAL_GPIO_GET_PIN(A, 1)
#define PA2  CHAL_GPIO_GET_PIN(A, 2)
#define PA3  CHAL_GPIO_GET_PIN(A, 3)
#define PA4  CHAL_GPIO_GET_PIN(A, 4)
#define PA5  CHAL_GPIO_GET_PIN(A, 5)
#define PA6  CHAL_GPIO_GET_PIN(A, 6)
#define PA7  CHAL_GPIO_GET_PIN(A, 7)
#define PA8  CHAL_GPIO_GET_PIN(A, 8)
#define PA9  CHAL_GPIO_GET_PIN(A, 9)
#define PA10 CHAL_GPIO_GET_PIN(A, 10)
#define PA11 CHAL_GPIO_GET_PIN(A, 11)
#define PA12 CHAL_GPIO_GET_PIN(A, 12)
#define PA13 CHAL_GPIO_GET_PIN(A, 13)
#define PA14 CHAL_GPIO_GET_PIN(A, 14)
#define PA15 CHAL_GPIO_GET_PIN(A, 15)
#endif

#if defined(GPIOB)
#define PB0  CHAL_GPIO_GET_PIN(B, 0)
#define PB1  CHAL_GPIO_GET_PIN(B, 1)
#define PB2  CHAL_GPIO_GET_PIN(B, 2)
#define PB3  CHAL_GPIO_GET_PIN(B, 3)
#define PB4  CHAL_GPIO_GET_PIN(B, 4)
#define PB5  CHAL_GPIO_GET_PIN(B, 5)
#define PB6  CHAL_GPIO_GET_PIN(B, 6)
#define PB7  CHAL_GPIO_GET_PIN(B, 7)
#define PB8  CHAL_GPIO_GET_PIN(B, 8)
#define PB9  CHAL_GPIO_GET_PIN(B, 9)
#define PB10 CHAL_GPIO_GET_PIN(B, 10)
#define PB11 CHAL_GPIO_GET_PIN(B, 11)
#define PB12 CHAL_GPIO_GET_PIN(B, 12)
#define PB13 CHAL_GPIO_GET_PIN(B, 13)
#define PB14 CHAL_GPIO_GET_PIN(B, 14)
#define PB15 CHAL_GPIO_GET_PIN(B, 15)
#endif

#if defined(GPIOC)
#define PC0  CHAL_GPIO_GET_PIN(C, 0)
#define PC1  CHAL_GPIO_GET_PIN(C, 1)
#define PC2  CHAL_GPIO_GET_PIN(C, 2)
#define PC3  CHAL_GPIO_GET_PIN(C, 3)
#define PC4  CHAL_GPIO_GET_PIN(C, 4)
#define PC5  CHAL_GPIO_GET_PIN(C, 5)
#define PC6  CHAL_GPIO_GET_PIN(C, 6)
#define PC7  CHAL_GPIO_GET_PIN(C, 7)
#define PC8  CHAL_GPIO_GET_PIN(C, 8)
#define PC9  CHAL_GPIO_GET_PIN(C, 9)
#define PC10 CHAL_GPIO_GET_PIN(C, 10)
#define PC11 CHAL_GPIO_GET_PIN(C, 11)
#define PC12 CHAL_GPIO_GET_PIN(C, 12)
#define PC13 CHAL_GPIO_GET_PIN(C, 13)
#define PC14 CHAL_GPIO_GET_PIN(C, 14)
#define PC15 CHAL_GPIO_GET_PIN(C, 15)
#endif

#if defined(GPIOD)
#define PD0  CHAL_GPIO_GET_PIN(D, 0)
#define PD1  CHAL_GPIO_GET_PIN(D, 1)
#define PD2  CHAL_GPIO_GET_PIN(D, 2)
#define PD3  CHAL_GPIO_GET_PIN(D, 3)
#define PD4  CHAL_GPIO_GET_PIN(D, 4)
#define PD5  CHAL_GPIO_GET_PIN(D, 5)
#define PD6  CHAL_GPIO_GET_PIN(D, 6)
#define PD7  CHAL_GPIO_GET_PIN(D, 7)
#define PD8  CHAL_GPIO_GET_PIN(D, 8)
#define PD9  CHAL_GPIO_GET_PIN(D, 9)
#define PD10 CHAL_GPIO_GET_PIN(D, 10)
#define PD11 CHAL_GPIO_GET_PIN(D, 11)
#define PD12 CHAL_GPIO_GET_PIN(D, 12)
#define PD13 CHAL_GPIO_GET_PIN(D, 13)
#define PD14 CHAL_GPIO_GET_PIN(D, 14)
#define PD15 CHAL_GPIO_GET_PIN(D, 15)
#endif

#if defined(GPIOE)
#define PE0  CHAL_GPIO_GET_PIN(E, 0)
#define PE1  CHAL_GPIO_GET_PIN(E, 1)
#define PE2  CHAL_GPIO_GET_PIN(E, 2)
#define PE3  CHAL_GPIO_GET_PIN(E, 3)
#define PE4  CHAL_GPIO_GET_PIN(E, 4)
#define PE5  CHAL_GPIO_GET_PIN(E, 5)
#define PE6  CHAL_GPIO_GET_PIN(E, 6)
#define PE7  CHAL_GPIO_GET_PIN(E, 7)
#define PE8  CHAL_GPIO_GET_PIN(E, 8)
#define PE9  CHAL_GPIO_GET_PIN(E, 9)
#define PE10 CHAL_GPIO_GET_PIN(E, 10)
#define PE11 CHAL_GPIO_GET_PIN(E, 11)
#define PE12 CHAL_GPIO_GET_PIN(E, 12)
#define PE13 CHAL_GPIO_GET_PIN(E, 13)
#define PE14 CHAL_GPIO_GET_PIN(E, 14)
#define PE15 CHAL_GPIO_GET_PIN(E, 15)
#endif

#if defined(GPIOF)
#define PF0  CHAL_GPIO_GET_PIN(F, 0)
#define PF1  CHAL_GPIO_GET_PIN(F, 1)
#define PF2  CHAL_GPIO_GET_PIN(F, 2)
#define PF3  CHAL_GPIO_GET_PIN(F, 3)
#define PF4  CHAL_GPIO_GET_PIN(F, 4)
#define PF5  CHAL_GPIO_GET_PIN(F, 5)
#define PF6  CHAL_GPIO_GET_PIN(F, 6)
#define PF7  CHAL_GPIO_GET_PIN(F, 7)
#define PF8  CHAL_GPIO_GET_PIN(F, 8)
#define PF9  CHAL_GPIO_GET_PIN(F, 9)
#define PF10 CHAL_GPIO_GET_PIN(F, 10)
#define PF11 CHAL_GPIO_GET_PIN(F, 11)
#define PF12 CHAL_GPIO_GET_PIN(F, 12)
#define PF13 CHAL_GPIO_GET_PIN(F, 13)
#define PF14 CHAL_GPIO_GET_PIN(F, 14)
#define PF15 CHAL_GPIO_GET_PIN(F, 15)
#endif

#if defined(GPIOG)
#define PG0  CHAL_GPIO_GET_PIN(G, 0)
#define PG1  CHAL_GPIO_GET_PIN(G, 1)
#define PG2  CHAL_GPIO_GET_PIN(G, 2)
#define PG3  CHAL_GPIO_GET_PIN(G, 3)
#define PG4  CHAL_GPIO_GET_PIN(G, 4)
#define PG5  CHAL_GPIO_GET_PIN(G, 5)
#define PG6  CHAL_GPIO_GET_PIN(G, 6)
#define PG7  CHAL_GPIO_GET_PIN(G, 7)
#define PG8  CHAL_GPIO_GET_PIN(G, 8)
#define PG9  CHAL_GPIO_GET_PIN(G, 9)
#define PG10 CHAL_GPIO_GET_PIN(G, 10)
#define PG11 CHAL_GPIO_GET_PIN(G, 11)
#define PG12 CHAL_GPIO_GET_PIN(G, 12)
#define PG13 CHAL_GPIO_GET_PIN(G, 13)
#define PG14 CHAL_GPIO_GET_PIN(G, 14)
#define PG15 CHAL_GPIO_GET_PIN(G, 15)
#endif

#if defined(GPIOH)
#define PH0  CHAL_GPIO_GET_PIN(H, 0)
#define PH1  CHAL_GPIO_GET_PIN(H, 1)
#define PH2  CHAL_GPIO_GET_PIN(H, 2)
#define PH3  CHAL_GPIO_GET_PIN(H, 3)
#define PH4  CHAL_GPIO_GET_PIN(H, 4)
#define PH5  CHAL_GPIO_GET_PIN(H, 5)
#define PH6  CHAL_GPIO_GET_PIN(H, 6)
#define PH7  CHAL_GPIO_GET_PIN(H, 7)
#define PH8  CHAL_GPIO_GET_PIN(H, 8)
#define PH9  CHAL_GPIO_GET_PIN(H, 9)
#define PH10 CHAL_GPIO_GET_PIN(H, 10)
#define PH11 CHAL_GPIO_GET_PIN(H, 11)
#define PH12 CHAL_GPIO_GET_PIN(H, 12)
#define PH13 CHAL_GPIO_GET_PIN(H, 13)
#define PH14 CHAL_GPIO_GET_PIN(H, 14)
#define PH15 CHAL_GPIO_GET_PIN(H, 15)
#endif

#if defined(GPIOI)
#define PI0  CHAL_GPIO_GET_PIN(I, 0)
#define PI1  CHAL_GPIO_GET_PIN(I, 1)
#define PI2  CHAL_GPIO_GET_PIN(I, 2)
#define PI3  CHAL_GPIO_GET_PIN(I, 3)
#define PI4  CHAL_GPIO_GET_PIN(I, 4)
#define PI5  CHAL_GPIO_GET_PIN(I, 5)
#define PI6  CHAL_GPIO_GET_PIN(I, 6)
#define PI7  CHAL_GPIO_GET_PIN(I, 7)
#define PI8  CHAL_GPIO_GET_PIN(I, 8)
#define PI9  CHAL_GPIO_GET_PIN(I, 9)
#define PI10 CHAL_GPIO_GET_PIN(I, 10)
#define PI11 CHAL_GPIO_GET_PIN(I, 11)
#define PI12 CHAL_GPIO_GET_PIN(I, 12)
#define PI13 CHAL_GPIO_GET_PIN(I, 13)
#define PI14 CHAL_GPIO_GET_PIN(I, 14)
#define PI15 CHAL_GPIO_GET_PIN(I, 15)
#endif

#if defined(GPIOJ)
#define PJ0  CHAL_GPIO_GET_PIN(J, 0)
#define PJ1  CHAL_GPIO_GET_PIN(J, 1)
#define PJ2  CHAL_GPIO_GET_PIN(J, 2)
#define PJ3  CHAL_GPIO_GET_PIN(J, 3)
#define PJ4  CHAL_GPIO_GET_PIN(J, 4)
#define PJ5  CHAL_GPIO_GET_PIN(J, 5)
#define PJ6  CHAL_GPIO_GET_PIN(J, 6)
#define PJ7  CHAL_GPIO_GET_PIN(J, 7)
#define PJ8  CHAL_GPIO_GET_PIN(J, 8)
#define PJ9  CHAL_GPIO_GET_PIN(J, 9)
#define PJ10 CHAL_GPIO_GET_PIN(J, 10)
#define PJ11 CHAL_GPIO_GET_PIN(J, 11)
#define PJ12 CHAL_GPIO_GET_PIN(J, 12)
#define PJ13 CHAL_GPIO_GET_PIN(J, 13)
#define PJ14 CHAL_GPIO_GET_PIN(J, 14)
#define PJ15 CHAL_GPIO_GET_PIN(J, 15)
#endif

#if defined(GPIOK)
#define PK0  CHAL_GPIO_GET_PIN(K, 0)
#define PK1  CHAL_GPIO_GET_PIN(K, 1)
#define PK2  CHAL_GPIO_GET_PIN(K, 2)
#define PK3  CHAL_GPIO_GET_PIN(K, 3)
#define PK4  CHAL_GPIO_GET_PIN(K, 4)
#define PK5  CHAL_GPIO_GET_PIN(K, 5)
#define PK6  CHAL_GPIO_GET_PIN(K, 6)
#define PK7  CHAL_GPIO_GET_PIN(K, 7)
#define PK8  CHAL_GPIO_GET_PIN(K, 8)
#define PK9  CHAL_GPIO_GET_PIN(K, 9)
#define PK10 CHAL_GPIO_GET_PIN(K, 10)
#define PK11 CHAL_GPIO_GET_PIN(K, 11)
#define PK12 CHAL_GPIO_GET_PIN(K, 12)
#define PK13 CHAL_GPIO_GET_PIN(K, 13)
#define PK14 CHAL_GPIO_GET_PIN(K, 14)
#define PK15 CHAL_GPIO_GET_PIN(K, 15)
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
