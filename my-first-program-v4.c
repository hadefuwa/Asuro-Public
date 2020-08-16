//my first program
#include "asuro.h"

/*
Loop:
    Counter increment
    if the counter is less than X
        LED Green
    otherwise if more than X
        LED red
    if counter is 2X
        reset counter
*/

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    long counter = 0;

    while (1)
    {
        for (int i = 0; i > 1000; i++)
        {
            StatusLED(GREEN);
            MSleep(216);
        }

        for (int i = 0; i > 1000; i++)
        {
            StatusLED(RED);
            MSleep(216);
        }
    }

    return 0; //end the program - no errors
}
