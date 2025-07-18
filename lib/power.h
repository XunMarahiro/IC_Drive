#ifndef _POWER_H_
#define _POWER_H_
#include "drive.h"
#define USB_SUP_PIN 0x00
#define BAT_SUP_PIN 0x00
#define VBAT_PIN 0x00
struct power
{
    /* data */
    bool USB_SUP;
    bool BAT_SUP;
    int V_BAT;
} syspower;

#endif