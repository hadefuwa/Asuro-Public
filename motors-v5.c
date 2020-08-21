// Introduction to Motors - Spin the Asuro on a loop
// Spin to the right with right back light on then spin to the left with left back light on - continously

#include "asuro.h" // <<<<<<<<<<<<<

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    int i = 0;

    while (1)
    {
        MotorDir(FWD, RWD);   //Read page 67
        MotorSpeed(150, 150); //Read page 68
        StatusLED(GREEN);
        BackLED(OFF, ON);

        for (i = 0; i < 500; i++) //3ms * 1000 = 1.5 seconds - This isn't totally accurate and will need adjusting
        {
            Sleep(216); //Sleep processor for 3ms
        }

        MotorDir(RWD, FWD);   //Read page 67
        MotorSpeed(150, 150); //Read page 68
        StatusLED(RED);
        BackLED(ON, OFF);

        for (i = 0; i < 500; i++) //3ms * 1000 = 1.5 seconds
        {
            Sleep(216); //Sleep processor for 3ms
        }
    }

    return 0;
}