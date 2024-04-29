#include "driver.h"

uint16_t rnval = 0xACE1;
uint16_t JOY_random(void)
{
    rnval = (rnval >> 0x01) ^ (-(rnval & 0x01) & 0xB400);
    return rnval;
}
