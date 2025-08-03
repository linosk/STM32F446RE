#ifndef RCC_H
#define RCC_H

#define HSEON  ((1<<16))
#define HSEBYP ((1<<18))
#define CSSON  ((1<<19))

#define RCC         (0x40023800UL)
#define RCC_CR      (*(volatile uint32_t*)(RCC + 0x00))
#define RCC_PLLCFGR (*(volatile uint32_t*)(RCC + 0x04))
#define RCC_CFGR    (*(volatile uint32_t*)(RCC + 0x08))

void rcc_init(void);

#endif // RCC_H