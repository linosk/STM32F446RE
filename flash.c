#include "flash.h"
#include "stm32f446r_registers_map.h"

void flash_init(void)
{
    FLASH_ACR |= FLASH_ACR_PRFTEN;
    FLASH_ACR |= FLASH_ACR_ICEN;
    FLASH_ACR |= FLASH_ACR_DCEN;
}