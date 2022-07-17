/**
 * @file csp_clock.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-07-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <chal/clock.h>

/**
 * @brief  Initialize the system clock.
 *
 * @param  None
 * @retval None
 */
void chal_clock_init(chal_clock_t *clock)
{
    RT_ASSERT(clock);

    /** Configure the main internal regulator output voltage
     */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(clock->vos);

    if (HAL_RCC_OscConfig(&clock->osc) != HAL_OK) {
        Error_Handler();
    }

    if (HAL_RCC_ClockConfig(&clock->clk, clock->latency) != HAL_OK) {
        Error_Handler();
    }
}

/**
 * @brief
 *
 * @param clock
 */
void chal_clock_mco_config(chal_clock_mco_t *clock)
{
    RT_ASSERT(clock);

    HAL_RCC_MCOConfig(clock->mcox, clock->source, clock->div);
}

/**
 * @brief
 *
 */
void chal_clock_css_enable()
{
    HAL_RCC_EnableCSS();
}

/**
 * @brief
 *
 */
void chal_clock_css_disable()
{
    HAL_RCC_DisableCSS();
}
