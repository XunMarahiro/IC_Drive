#ifndef _max6675_h_
#define _max6675_h_

#include "drive.h"

#define TC1_PIN 0x00
#define TC2_PIN 0x00

struct max6675
{
    /* data */
    uint16_t empty : 1;
    uint16_t temp : 12;
    uint16_t input : 1;
    uint16_t ID : 1;
    uint16_t State : 1;
} *TC1, *TC2;

void Update_TC(void);

#endif