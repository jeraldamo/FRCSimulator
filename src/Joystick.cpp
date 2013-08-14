

#include "Joystick.h"


Joystick::Joystick(int usbPortIn)
{
    usbPort = usbPortIn;
    
    result = new xmlrpc_c::value;
    myClient.call("http://localhost:25000/botServer", "instantiate_joystick", "i", result, usbPort);
																				
	string const value((xmlrpc_c::value_string(*result)));
	
	serverURL = value;
}

Joystick::~Joystick()
{
}

double Joystick::getX()
{
	return 0.0;
}

double Joystick::getY()
{
	result = new xmlrpc_c::value;
    myClient.call(serverURL, "get_joystick_axis", "i", result, 1);
																				
	double const value((xmlrpc_c::value_double(*result)));
	
	return value;
}

void Joystick::setX(double x)
{
    xValue = x;
}

void Joystick::setY(double y)
{
    yValue = y;
}
