#include "RobotDemo.h"

int main(int argc, char *argv[])
{
    RobotDemo *bot = new RobotDemo();
    bot->Autonomous();
    
    return 0;
}
