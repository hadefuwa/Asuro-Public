// Introduction to Motors - MotorDir & MotorSpeed - Part 3
// Drive the Asuro Forward then stop and then reverse

#include "asuro.h" //<<<<<<<

int main(void)
{
    int i = 0;
    Init();

    StatusLED(GREEN);
    MotorDir(FWD, FWD);   //Valid parameters are FWD, RWD, BREAK and FREE
    MotorSpeed(140, 150); //Can use any value from 0 - 255 (min 60 to move))

    for (i = 0; i < 300; i++) //3ms * 300 = 900ms
    {
        Sleep(216); //sleep the processor for 3ms
    }

    MotorDir(BREAK, BREAK);
    MotorSpeed(0, 0);
    StatusLED(RED);

    for (i = 0; i < 50; i++) //3ms * 50 = 150ms
    {
        Sleep(216); //sleep the processor for 3ms
    }

    BackLED(ON, ON);
    MotorDir(RWD, RWD);
    MotorSpeed(140, 150);

    for (i = 0; i < 300; i++) //3ms * 300 = 900ms
    {
        Sleep(216); //sleep the processor for 3ms
    }

    MotorDir(BREAK, BREAK);
    MotorSpeed(0, 0);
    StatusLED(OFF);
    BackLED(OFF, OFF);

    return 0;
}