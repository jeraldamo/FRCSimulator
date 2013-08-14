#include <iostream>
#include "RobotDemo.h"
using namespace std;


int main(int argc, char *argv[])
{
    RobotDemo bot();
    bot.OperatorControl();
    
    return 0;
}

void* getNumber()
{
    return new Class();
}
