

#ifndef JAGUAR_H
#define JAGUAR_H

class Jaguar
{
    public:
    
        Jaguar(int, int);
        
        ~Jaguar();
        
        int getSideCarModule();
        
        int getPWMChannel();
        
    private:
    
        int sideCarModule;
        
        int pwmChannel;


};
#endif
