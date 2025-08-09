#ifndef FLASH_H
#define FLASH_H

#define FLASH_ACR_LATENCY_0 ((1<<0))
#define FLASH_ACR_LATENCY_1 ((1<<1))
#define FLASH_ACR_LATENCY_2 ((1<<2))
#define FLASH_ACR_LATENCY_3 ((1<<3))
#define FLASH_ACR_PRFTEN    ((1<<8))
#define FLASH_ACR_ICEN      ((1<<9))
#define FLASH_ACR_DCEN      ((1<<10))

//nested interrupts directly in mcu, look at cortex-m4 manual
//SysTick needs to be configured if timer/timing things
//Init low level hardware
//default HAL delays omitted

void flash_init(void);

#endif//FLASH_H