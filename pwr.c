#include "pwr.h"
#include "stm32f446r_registers_map.h"

void pwr_init(void)
{
    PWR_CR |= PWR_CR_VOS_0;
    PWR_CR &= ~PWR_CR_VOS_1;
}