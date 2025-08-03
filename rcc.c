#include "rcc.h"

void rcc_init(void)
{
    //RCC_CR

    //setting bypass clock from ST-LINK //18
    //setting HSE oscillator ON //16
    //checking if HSE is stable //17
    //if stable set clock detection //19

    //internaal clock to 0 //0 after reset HSION

    //HSITRIM can be leftt alone

    //PLLON needs to be enabled
}