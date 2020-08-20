// Introduction to Motors - MotorDir & MotorSpeed
// Drive forward...

#include "asuro.h" // <<<<<<<<<<<<<

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    while (1)
    {
        MotorDir(FWD, FWD);   //Read page 67
        MotorSpeed(150, 150); //Read page 68
        StatusLED(GREEN);
    }

    return 0;
}