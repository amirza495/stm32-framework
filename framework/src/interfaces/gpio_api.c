/**
 * GPIO Peripheral App Interface
 * 
 */

#include "gpio_api.h"

/**
 * Initialization for GPIO pin configuration
 * 
 * Configures and sets the default state for a GPIO pin. This
 * is usually used when a pin does not have a pre-defined 
 * funtion and is a general digital IO pin
 * 
 * GPIO_Pins are defined in config.h
 * GPIO_Modes are listed below:
 *      - INPUT
 *      - OUTPUT
 *      - OPEN_DRAIN
 * GPIO_Pull options:
 *      - NO_PULL
 *      - PULLUP
 *      - PULLDOWN
 * 
 * Ex - Configure P0 as a PULLUP INPUT pin:
 * GPIO_Init_Pin(P0, INPUT, PULLUP);
 * 
 */
void GPIO_Init_Pin(GPIO_Pin pin, GPIO_Mode mode, GPIO_Pull pull)
{
    /* Pin configuration */
    GPIO_InitTypeDef InitStruct = {0};

    InitStruct.Pin = pin.pin;
    InitStruct.Mode = mode;
    InitStruct.Pull = pull;

    /* Pin initialization */
    HAL_GPIO_Init(pin.port, &InitStruct);
}

/**
 * Set the state of a GPIO pin
 * 
 * Use a GPIO_Pin defined in config.h (i.e. P1)
 * Write the state to HIGH or LOW
 * 
 * Ex - Write pin P1 HIGH:
 * GPIO_Write(P1, HIGH);
 * 
 */
void GPIO_Write(GPIO_Pin pin, GPIO_State state)
{
    /* Set pin state */
    HAL_GPIO_WritePin(pin.port, pin.pin, state);
}

/**
 * Read the state of a GPIO pin
 * 
 * Use a GPIO_Pin defined in config.h
 * 
 * Ex - Read state of P0 (val is a uint32_t)
 * val = GPIO_Read(P0);
 * 
 */
GPIO_State GPIO_Read(GPIO_Pin pin)
{
    GPIO_State retn;

    /* Read pin state */
    retn = HAL_GPIO_ReadPin(pin.port, pin.pin);

    return retn;
}