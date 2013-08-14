

#ifndef ROBOTDRIVE_CPP
#define ROBOTDRIVE_CPP

#include "Jaguar.h"
#include "Joystick.h"
#include <xmlrpc-c/base.hpp>
#include <xmlrpc-c/client_simple.hpp>
#include <string>
using namespace std;

class RobotDrive
{
    public:
        RobotDrive(Jaguar*, Jaguar*, Jaguar*, Jaguar*);
        
        ~RobotDrive();
        
        void TankDrive(Joystick*, Joystick*);
        
    private:
        Jaguar *jagFL;
        Jaguar *jagFR;
        Jaguar *jagRL;
        Jaguar *jagRR;
        
        string serverUrl;
        string methodName;

        xmlrpc_c::clientSimple myClient;
        xmlrpc_c::value *result;

};
#endif
