#include “asuro.h”
int main(void)
{
    MotorDir(FWD, FWD);   // Both engines running forward
    MotorSpeed(120, 120); // Both engines running at around half speed
    StatusLED(GREEN);     // Turn on Status-LED green
    while (PollSwitch() == 0)
    {                               // As long as there is no collision
        SerWrite(“All OK !\n”, 10); // ... Feeling groovy ....
    }
    MotorSpeed(0, 0); // Collision! Stop immediatedly!
    StatusLED(RED);   // Turn on Status-LED red
    while (1)
    {
        SerWrite(“Ouch !\n”, 5); // start crying!
    }
}