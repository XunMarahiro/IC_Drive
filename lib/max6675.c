#include "max6675.h"
uint16_t data[2] = {0b0001111111111111, 0b0001111111111110};
int Read_16bit_data(void)
{
    int value;
    return value;
}
void Set_bit(int pin) {}
void clear_bit(int pin) {}

void Update_TC(void)
{
    clear_bit(TC1_PIN);
    data[0] = Read_16bit_data();
    Set_bit(TC1_PIN);
    clear_bit(TC2_PIN);
    data[1] = Read_16bit_data();
    Set_bit(TC2_PIN);
    TC1 = &data;
    TC2 = &data[1];
}