

#ifndef JOYSTICK_H
#define JOYSTICK_H

#include <xmlrpc-c/base.hpp>
#include <xmlrpc-c/client_simple.hpp>
#include <string>
#include <iostream>
using namespace std;

class Joystick
{
    public:
        
        Joystick(int);
        
        ~Joystick();
        
        double getX();
        
        double getY();
        
        void setX(double x);
        
        void setY(double y);
        
        
    private:
    
    	xmlrpc_c::clientSimple myClient;
        xmlrpc_c::value *result;
        
        double xValue;
        
        double yValue;
        
        int usbPort;
        
        string serverURL;
        
        
};

#endif
