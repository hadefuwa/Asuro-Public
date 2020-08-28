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
