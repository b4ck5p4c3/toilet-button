#ifndef TOILET_BUTTON_MCU_CONFIG_H
#define TOILET_BUTTON_MCU_CONFIG_H

#include <ch32v00x.h>

#define MODBUS_UART USART1
#define MODBUS_SPEED 115200
#define MODBUS_SLAVE_ID 228

#define TX_PORT GPIOD
#define TX_PIN GPIO_Pin_5

#define RX_PORT GPIOD
#define RX_PIN GPIO_Pin_6

#define DIR_PORT GPIOD
#define DIR_PIN GPIO_Pin_4

#define LIGHT_PORT GPIOC
#define LIGHT_PIN GPIO_Pin_1

#define FRESHNER_PORT GPIOC
#define FRESHNER_PIN GPIO_Pin_2

#define BUTTON_PORT GPIOC
#define BUTTON_PIN GPIO_Pin_3
#define BUTTON_PORT_SOURCE GPIO_PortSourceGPIOC
#define BUTTON_PIN_SOURCE GPIO_PinSource3
#define BUTTON_EXTI_LINE EXTI_Line3

#define SWITCH_PORT GPIOC
#define SWITCH_PIN GPIO_Pin_4

#define AUX_INPUT_1_PORT GPIOC
#define AUX_INPUT_1_PIN GPIO_Pin_6

#endif  //TOILET_BUTTON_MCU_CONFIG_H
