#include "RobotDemo.h"
using namespace std;

RobotDemo::RobotDemo()
{
	
	joystick_left = new Joystick(0);
    joystick_right = new Joystick(1);
	
	// Some Constants
	int SIDE_CAR_MODULE = 2;
	int PWM1 = 1;
	int PWM2 = 2;
	int PWM3 = 3;
	int PWM4 = 4;
	
	motor_FL = new Jaguar(SIDE_CAR_MODULE, PWM1); // Front left motor in PWM1
	motor_FR = new Jaguar(SIDE_CAR_MODULE, PWM2); // Front right motor in PWM2
	motor_RL = new Jaguar(SIDE_CAR_MODULE, PWM3); // Rear left motor in PWM3
	motor_RR = new Jaguar(SIDE_CAR_MODULE, PWM4); // Rear right motor in PWM4
	
	// Instantiate the Drive
	//drivetrain = RobotDrive(motor_FL, motor_RL, motor_FR, motor_RR);
	drivetrain = new RobotDrive(motor_FL, motor_RL, motor_FR, motor_RR);
}

		
void RobotDemo::Autonomous() // Autonomous method
{
	// Autonomous code (will get to later)
}
		
void RobotDemo::OperatorControl() // Teleop method
{
	while(true)
	{
		drivetrain->TankDrive(joystick_left, joystick_right);
		wait(1); // Pause for just a bit as to not overload the system
	}
}
