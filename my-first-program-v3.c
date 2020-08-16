//my first program V3
//For loops

#include "asuro.h"

/*
Infinite Loop:
    For loop 1000x:
        Green LED
    For loop 1000x:
        RED LED
*/

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    int i = 0;

    while (1)
    {
        for (i = 0; i < 20000; i++)
        {
            StatusLED(GREEN);
        }

        for (int i = 0; i < 20000; i++)
        {
            StatusLED(RED);
        }
    }

    return 0; //end the program - no errors
}
