#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include "RobotDemo.h"
extern "C"
{
    void* getBotHandle();
    
    void startTeleop(RobotDemo*);
};

#endif
