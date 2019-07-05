/** 
 * GPIO Peripheral Driver
 * This is where dedicated GPIO pins should be configured
 * All other pins should be configured in their respective driver files
 */

#include "gpio.h"

/**
 * Configure GPIO Pins
 * 
 * Must be called before configuring or using GPIO pins
 * ***Called by Peripheral_Init() by default***
 * 
 */
void GPIO_Init(void){

    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* GPIO Ports Clock Enable */
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();
    __HAL_RCC_GPIOD_CLK_ENABLE();
    __HAL_RCC_GPIOE_CLK_ENABLE();

    /** Turn on LEDs 2 and 3 on Nucleo Dev Board (example of writing pins low)
     * HAL_GPIO_WritePin(GPIOB, LD3_Pin|LD2_Pin, GPIO_PIN_RESET);
     */


    /**
     * structure for pin initialization
     * this format will also be followed for pin config for other peripherals
     * 
     * GPIO_InitStruct.Pin = Pin_1 | Pin_2 | ...;
     * GPIO_InitStruct.Mode = mode/direction;
     * GPIO_InitStruct.Pull = pin pull setting;
     * GPIO_InitStruct.Speed = frequency speed (if applicable);
     * GPIO_InitStruct.Alternate = alternate pin function (if applicable);
     * HAL_GPIO_Init(gpio port, &GPIO_InitStruct);
     */
    
    /** Example for LED 2 and 3 config (pins PB_7 and PB_14)
     * 
     * GPIO_InitStruct.Pin = LD3_Pin | LD2_Pin;
     * GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
     * GPIO_InitStruct.Pull = GPIO_NOPULL;
     * HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);
    */

    /* Put GPIO pin configs below here */


}