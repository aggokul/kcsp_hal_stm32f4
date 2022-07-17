/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-07-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <chal/gpio.h>

#define LED2 CHAL_GET_PIN(A, 5)

int main()
{
    CHAL_GPIOX_CLK_ENABLE(A);
    CHAL_GPIOX_CLK_ENABLE(B);

    chal_gpio_write_pin(LED2, CHAL_GPIO_PIN_SET);

    chal_gpio_t gpio = {0};
    gpio.init.Pin    = GPIO_PIN_5;
    gpio.init.Mode   = GPIO_MODE_OUTPUT_PP;
    gpio.init.Pull   = GPIO_PULLUP;
    gpio.init.Speed  = GPIO_SPEED_FREQ_VERY_HIGH;
    chal_gpio_init(LED2, &gpio);

    while (1) {
    }
}
