// Introduction to Motors - MotorDir & MotorSpeed

#include "asuro.h" // <<<<<<<<<<<<<

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    while (1)
    {
        MotorDir(FWD, FWD);   //Read page 67
        MotorSpeed(150, 150); //Read page 68

        for (i = 0; i < 1000; i++) //3ms * 1000 = 3 seconds
        {
            Sleep(216); //Sleep processor for 3ms
        }
    }

    return 0;
}