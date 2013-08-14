

#ifndef ROBOTDEMO_H
#define ROBOTDEMO_H


#include "WPILib.h"

class RobotDemo: public SimpleRobot
{
	
	public:
		RobotDemo(); // Constructor
		
		void Autonomous(); // Autonomous method
		
		void OperatorControl(); // Teleop method
	
	private:    
	    // Instaintiate the Joysticks
	    Joystick *joystick_left;
	
	    Joystick *joystick_right;
	
	    // Instantinate the Jaguars
	    Jaguar *motor_FL;
	
	    Jaguar *motor_FR;
	
	    Jaguar *motor_RL;
	
	    Jaguar *motor_RR;
	
	    // Instantiate the Drive
	    RobotDrive *drivetrain;


	
};

#endif
