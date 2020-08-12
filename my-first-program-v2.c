//my first program
#include "asuro.h"

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    long counter = 0;

    while (1)
    {
        counter++;

        if (counter < 5000)
        {
            StatusLED(GREEN);
        }
        else if (counter > 5000)
        {
            StatusLED(RED);
            if (counter > 10000)
            {
                counter = 0;
            }
        }
    }

    return 0; //end the program - no errors
}
