#ifndef _sht31_h_
#define _sht31_h_

#include "drive.h"

#define sht31_address 0x44

struct sht31_data
{
    uint16_t temp : 16;
    uint8_t temp_crc : 8;
    uint16_t hum : 16;
    uint8_t hum_crc : 8;
} __attribute__((packed)) * Data_base;

void get_temp_data(void);

#endif