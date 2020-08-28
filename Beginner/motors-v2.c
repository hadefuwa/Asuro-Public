// Introduction to Motors - MotorDir & MotorSpeed - Part 2
// Drive the Asuro Forward then stop

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

    MotorDir(BREAK, BREAK); //Valid parameters are FWD, RWD, BREAK and FREE
    MotorSpeed(0, 0);       //Can use any value from 0 - 255 (min 60 to move))
    StatusLED(RED);

    return 0;
}