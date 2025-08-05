#include "rcc.h"
#include "stm32f446r_registers_map.h"

void rcc_init(void)
{
    //HSI instead of HSE?
    RCC_CR &= ~RCC_CR_HSION;
    RCC_CR |= RCC_CR_HSEBYP;
    RCC_CR |= RCC_CR_HSEON;
    while(!(RCC_CR & RCC_CR_HSERDY)){}
    RCC_CR |= RCC_CR_CSSON;

    RCC_CR |= RCC_CR_PLLON;
}