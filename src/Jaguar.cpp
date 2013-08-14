

#include "Jaguar.h"


Jaguar::Jaguar(int sideCarMod, int pwmChan)
{
    sideCarModule = sideCarMod;
    pwmChannel = pwmChan;
}

Jaguar::~Jaguar()
{
}

int Jaguar::getSideCarModule()
{
    return sideCarModule;
}

int Jaguar::getPWMChannel()
{
    return pwmChannel;
}
