#include "asuro.h"

int main(void)
{
    Init();

    while (1)
    {
        MotorDir(FWD, FWD); // Both engines forward
        MotorSpeed(120, 120);
        StatusLED(GREEN);

        while (PollSwitch() != 0)
        {                     // As long as there is no collision
            MotorSpeed(0, 0); // Collision! Stop immediatedly!
            StatusLED(RED);
        }
    }
}