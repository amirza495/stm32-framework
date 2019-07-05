/**
 * GPIO Peripheral Driver
 * 
 */

#ifndef __GPIO_H
#define __GPIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include "config.h"
#include "stm32f7xx_hal_gpio.h"

/* GPIO Init Function */
void GPIO_Init(void);

#ifdef  __cplusplus
}
#endif

#endif /* _GPIO_H */