/**
 * @file csp_hal.c
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

#include <chal/clock.h>
#include <chal/hal.h>

rt_err_t sthal2rterr(HAL_StatusTypeDef status)
{
    switch (status) {
        case HAL_OK: return RT_EOK;
        case HAL_ERROR: return RT_ERROR;
        case HAL_BUSY: return RT_EBUSY;
        case HAL_TIMEOUT: return RT_ETIMEOUT;
        default: return RT_ERROR;
    }
}

rt_err_t chal_init()
{
    return sthal2rterr(HAL_Init());
}

rt_err_t chal_deinit()
{
    return sthal2rterr(HAL_DeInit());
}

RT_WEAK void CSP_clock_init()
{
    chal_clock_t clock            = {0};

    clock.vos                     = PWR_REGULATOR_VOLTAGE_SCALE1;
    clock.osc.OscillatorType      = RCC_OSCILLATORTYPE_HSI;
    clock.osc.HSIState            = RCC_HSI_ON;
    clock.osc.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    clock.osc.PLL.PLLState        = RCC_PLL_ON;
    clock.osc.PLL.PLLSource       = RCC_PLLSOURCE_HSI;
    clock.osc.PLL.PLLM            = 8;
    clock.osc.PLL.PLLN            = 84;
    clock.osc.PLL.PLLP            = RCC_PLLP_DIV2;
    clock.osc.PLL.PLLQ            = 4;

    clock.clk.ClockType           = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
    clock.clk.SYSCLKSource        = RCC_SYSCLKSOURCE_PLLCLK;
    clock.clk.AHBCLKDivider       = RCC_SYSCLK_DIV1;
    clock.clk.APB1CLKDivider      = RCC_HCLK_DIV2;
    clock.clk.APB2CLKDivider      = RCC_HCLK_DIV1;

    clock.latency                 = FLASH_LATENCY_5;

    chal_clock_init(&clock);
}

RT_WEAK void rt_hw_board_init()
{
    chal_init();  // Init CSP HAL Library

    extern void CSP_clock_init();
    CSP_clock_init();  // Init Clock

#ifdef RT_USING_COMPONENTS_INIT
    rt_components_board_init();
#endif
}

void _Error_Handler(char *s, int num)
{
    rt_kprintf("error at function:%s, line number:%d \n", s, num);
    while (1) {
    }
}

#ifdef RT_DEBUG
/**
 * The RT_ASSERT function.
 *
 * @param ex the assertion condition string
 * @param func the function name when assertion.
 * @param line the file line number when assertion.
 */
RT_WEAK void rt_assert_handler(const char *ex_string, const char *func, rt_size_t line)
{
    rt_kprintf("(%s) assertion failed at function:%s, line number:%d \n", ex_string, func, line);
    while (1) {
    };
}
#endif /* RT_DEBUG */
