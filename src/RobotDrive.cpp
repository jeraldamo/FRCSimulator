#include <iostream>
#include "RobotDrive.h"
using namespace std;



RobotDrive::RobotDrive(Jaguar *fl, Jaguar *fr, Jaguar *rl, Jaguar *rr)
{
    jagFL = fl;
    jagFR = fr;
    jagRL = rl;
    jagRR = rr;
}

RobotDrive::~RobotDrive()
{
}

void RobotDrive::TankDrive(Joystick *leftStick, Joystick *rightStick)
{
    serverUrl = "http://localhost:25000/RPC2";
    methodName = "4_motor_drive";
    result = new xmlrpc_c::value;
    cout << "LEFT VALUE: " << leftStick->getY() << " RIGHT VALUE: " << rightStick->getY() << endl;
    //myClient.call(serverURL, "4_motor_drive", "dddd", result, leftStick->getY(), 
	//																			rightStick->getY(), 
	//																			leftStick->getY(), 
	//																			rightStick->getY() );


}
