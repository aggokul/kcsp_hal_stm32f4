/**
 * @file clock.h
 * @author xqyjlj (xqyjlj@126.com)
 * @brief
 * @version 0.1
 * @date 2022-07-16
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

#ifndef __CHAL_CLOCK_H__
#define __CHAL_CLOCK_H__

#include <chal/hal.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct
{
    rt_uint32_t        vos;
    RCC_OscInitTypeDef osc;
    RCC_ClkInitTypeDef clk;
    rt_uint32_t        latency;
} chal_clock_t;

typedef struct
{
    rt_uint32_t mcox;
    rt_uint32_t source;
    rt_uint32_t div;
} chal_clock_mco_t;

void chal_clock_init(chal_clock_t *clock);
void chal_clock_mco_config(chal_clock_mco_t *clock);
void chal_clock_css_enable();
void chal_clock_css_disable();

#ifdef __cplusplus
}
#endif

#endif
