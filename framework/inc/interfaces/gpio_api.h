/**
 * GPIO Peripheral App Interface
 * 
 */

#ifndef __GPIO_API_H
#define __GPIO_API_H

#ifdef __cplusplus
extern "C" {
#endif

#include "gpio.h"


/* Data Structures */

/* GPIO Pin Struct */
typedef struct gpio_pin
{
    GPIO_TypeDef *port;
    uint32_t pin;
}GPIO_Pin;

/* GPIO Pin State struct */
typedef enum gpio_state
{
    LOW = 0,
    HIGH
}GPIO_State;

/* GPIO Mode struct */
typedef enum gpio_mode
{
    INPUT = 0,
    OUTPUT,
    OPEN_DRAIN = 0x11
}GPIO_Mode;

/* GPIO Pull Mode struct */
typedef enum gpio_pull
{
    NO_PULL = 0,
    PULLUP,
    PULLDOWN
}GPIO_Pull;


/* Functions */

/* GPIO Init Pins */
void GPIO_Init_Pin(GPIO_Pin pin, GPIO_Mode mode, GPIO_Pull pull);

/* GPIO Write */
void GPIO_Write(GPIO_Pin pin, GPIO_State state);

/* GPIO Read */
GPIO_State GPIO_Read(GPIO_Pin pin);


#ifdef  __cplusplus
}
#endif

#endif /* _GPIO_API_H */