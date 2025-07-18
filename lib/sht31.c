#include "sht31.h"
uint8_t sht31_data[6] = {0x01, 0x00, 0x02, 0x01, 0x00, 0x02};
void write_8bit(int value)
{
}
int read_8bit(void)
{
    int value;
    return value;
}
void SHT31_Init(void)
{
}
void set_sample_mode(uint8_t MSB_DATA, uint8_t LSB_DATA)
{
    write_8bit(sht31_address); // write data
    write_8bit(MSB_DATA);
    write_8bit(LSB_DATA);
}
void get_temp_data(void)
{
    write_8bit(sht31_address | 0x80); // read data
    for (int i = 0; i < 6; i++)
    {
        sht31_data[i] = read_8bit();
    }
    Data_base = &sht31_data;
}
void sht31_reset_command()
{
    write_8bit(sht31_address);
    write_8bit(0x30);
    write_8bit(0xA2);
}