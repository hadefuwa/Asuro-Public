#include "asuro.h"
int main(void)
{
    int counter; // defi ne a variable for counting
    for (counter = 0; counter < 10; counter++)
    {                                 // repeat ten times:
        SerWrite("Go ahead !\n", 10); // “Go ahead” message
    }
    MotorDir(FWD, FWD);   // Both engines forward
    MotorSpeed(120, 120); // Both engines running at around half speed
    while (1)
    { // No more action!
    }
}