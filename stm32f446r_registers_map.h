#ifndef STM32F446R_REGISTERS_MAP
#define STM32F446R_REGISTERS_MAP

#include <stdint.h>

#define FLASH_BASE      (0x40023C00UL)

#define FLASH_ACR       (*(volatile uint32_t*)(FLASH_BASE + 0x00))
#define FLASH_KEYR      (*(volatile uint32_t*)(FLASH_BASE + 0x04))
#define FLASH_OPTIKEYR  (*(volatile uint32_t*)(FLASH_BASE + 0x08))
#define FLASH_SR        (*(volatile uint32_t*)(FLASH_BASE + 0x0C))
#define FLASH_CR        (*(volatile uint32_t*)(FLASH_BASE + 0x10))
#define FLASH_OPTCR     (*(volatile uint32_t*)(FLASH_BASE + 0x14))

#define RCC_BASE        (0x40023800UL)

#define RCC_CR          (*(volatile uint32_t*)(RCC_BASE + 0x00))
#define RCC_PLLCFGR     (*(volatile uint32_t*)(RCC_BASE + 0x04))
#define RCC_CFGR        (*(volatile uint32_t*)(RCC_BASE + 0x08))
#define RCC_CIR         (*(volatile uint32_t*)(RCC_BASE + 0x0C))
#define RCC_AHB1RSTR    (*(volatile uint32_t*)(RCC_BASE + 0x10))
#define RCC_AHB2RSTR    (*(volatile uint32_t*)(RCC_BASE + 0x14))
#define RCC_AHB3RSTR    (*(volatile uint32_t*)(RCC_BASE + 0x18))
#define RCC_APB1RSTR    (*(volatile uint32_t*)(RCC_BASE + 0x20))
#define RCC_APB2RSTR    (*(volatile uint32_t*)(RCC_BASE + 0x24))
#define RCC_AHB1ENR     (*(volatile uint32_t*)(RCC_BASE + 0x30))
#define RCC_AHB2ENR     (*(volatile uint32_t*)(RCC_BASE + 0x34))
#define RCC_AHB3ENR     (*(volatile uint32_t*)(RCC_BASE + 0x38))
#define RCC_APB1ENR     (*(volatile uint32_t*)(RCC_BASE + 0x40))
#define RCC_APB2ENR     (*(volatile uint32_t*)(RCC_BASE + 0x44))
#define RCC_AHB1LPENR   (*(volatile uint32_t*)(RCC_BASE + 0x50))
#define RCC_AHB2LPENR   (*(volatile uint32_t*)(RCC_BASE + 0x54))
#define RCC_AHB3LPENR   (*(volatile uint32_t*)(RCC_BASE + 0x58))
#define RCC_APB1LPENR   (*(volatile uint32_t*)(RCC_BASE + 0x60))
#define RCC_APB2LPENR   (*(volatile uint32_t*)(RCC_BASE + 0x64))
#define RCC_BDCR        (*(volatile uint32_t*)(RCC_BASE + 0x70))
#define RCC_CSR         (*(volatile uint32_t*)(RCC_BASE + 0x74))
#define RCC_SSCGR       (*(volatile uint32_t*)(RCC_BASE + 0x80))
#define RCC_PLLI2SCFGR  (*(volatile uint32_t*)(RCC_BASE + 0x84))
#define RCC_PLLSAICFGR  (*(volatile uint32_t*)(RCC_BASE + 0x88))
#define RCC_DCKCFGR     (*(volatile uint32_t*)(RCC_BASE + 0x8C))
#define RCC_CKGATENR    (*(volatile uint32_t*)(RCC_BASE + 0x90))
#define RCC_DCKGATENR2  (*(volatile uint32_t*)(RCC_BASE + 0x94))

#define PWR_BASE        (0x40007000UL)

#define PWR_CR          (*(volatile uint32_t*)(PWR_BASE + 0x00))

#endif//STM32F446R_REGISTER_MAP