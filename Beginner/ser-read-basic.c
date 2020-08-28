// Introduction to Motors - Spin left and right on a loop
// Spin to the right with the right back light on, get asuro to spin to left with the left back light on - on a loop continuously

#include "asuro.h"

int main(void)
{
    int i = 0;

    Init();
    while (1)
    {
        StatusLED(GREEN);
        MotorDir(FWD, RWD);
        MotorSpeed(150, 150);
        BackLED(OFF, ON);

        for (i = 0; i < 300; i++) //900ms
        {
            Sleep(216);
        }

        StatusLED(RED);
        MotorDir(RWD, FWD);
        MotorSpeed(150, 150);
        BackLED(ON, OFF);

        for (i = 0; i < 300; i++) //900ms
        {
            Sleep(216);
        }
    }

    return 0;
}