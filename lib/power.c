#include "power.h"
struct power syspower;
static bool ReadIO(int pin)
{
    return true;
}
static void setout(int pin)
{
}
static void clearout(int pin)
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
