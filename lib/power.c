#include "power.h"
bool ReadIO(int pin)
{
    return true;
}
void setout(int pin)
{
}
void clearout(int pin)
{
}
int GetADC(int pin)
{
    int value;
    return value;
}
void Update_power()
{
    syspower.BAT_SUP = ReadIO(BAT_SUP_PIN);
    syspower.USB_SUP = ReadIO(USB_SUP_PIN);
    syspower.V_BAT = GetADC(VBAT_PIN);
}
