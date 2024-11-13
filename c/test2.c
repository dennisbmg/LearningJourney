#include "test2.h"


#define INTERNAL_VAR 88

extern uint8_t getVar(void)
{
    return INTERNAL_VAR;
}