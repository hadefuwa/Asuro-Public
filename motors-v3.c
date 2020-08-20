// Introduction to Motors - MotorDir & MotorSpeed
// Drive forward for a certain amount of time then reverse for a certain amount of time.. then nothing

#include "asuro.h" // <<<<<<<<<<<<<

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    int i = 0;

    MotorDir(FWD, FWD);   //Read page 67
    MotorSpeed(150, 150); //Read page 68
    StatusLED(GREEN);

    for (i = 0; i < 500; i++) //3ms * 1000 = 1.5 seconds - This isn't totally accurate and will need adjusting
    {
        Sleep(216); //Sleep processor for 3ms
    }

    MotorDir(RWD, RWD);   //Read page 67
    MotorSpeed(150, 150); //Read page 68
    StatusLED(RED);

    for (i = 0; i < 500; i++) //3ms * 1000 = 1.5 seconds
    {
        Sleep(216); //Sleep processor for 3ms
    }

    return 0;
}