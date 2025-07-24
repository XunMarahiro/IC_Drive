#include "mlx90614.h"
static void write_8bit(int data)
{
}
static int read_8bit()
{
    int value;
    return value;
}
void ReadRegData(uint8_t regaddres, uint8_t data)
{
    write_8bit(mlx_address);
    write_8bit(regaddres);
    write_8bit(mlx_address);
    write_8bit(data);
}