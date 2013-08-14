#include "Main.h"
using namespace std;

void* getBothandle()
{
    RobotDemo *bot = new RobotDemo();
    return bot;
}

void startTeleop(RobotDemo* bot)
{
    bot->OperatorControl();
}

int main(int argc, char *argv[])
{
    RobotDemo *bot = new RobotDemo();
    bot->OperatorControl();
    
    return 0;
}
