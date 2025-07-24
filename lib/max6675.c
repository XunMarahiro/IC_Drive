#include "max6675.h"
uint16_t Max6675_data[2] = {0b0001111111111111, 0b0001111111111110};
struct max6675 *TC1, *TC2;
static int Read_16bit_data(void)
{
    int value;
    return value;
}
static void Set_bit(int pin) {}
static void clear_bit(int pin) {}

void Update_TC(void)
{
    clear_bit(TC1_PIN);
    Max6675_data[0] = Read_16bit_data();
    Set_bit(TC1_PIN);
    clear_bit(TC2_PIN);
    Max6675_data[1] = Read_16bit_data();
    Set_bit(TC2_PIN);
    TC1 = &Max6675_data;
    TC2 = &Max6675_data[1];
}