//my first program V4
//Sleep Function

#include "asuro.h"

/*
Infinite Loop:
    For loop 1000x:
        Green LED
        Sleep for 3ms
    For loop 1000x:
        RED LED
        Sleep for 3ms
*/

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    int i = 0;

    while (1)
    {

        for (i = 0; i < 100; i++) //3ms * 100 = 0.3 seconds
        {
            StatusLED(GREEN);
            Sleep(216); //Sleep processor for 3ms
        }

        for (i = 0; i < 100; i++) //3ms * 100 = 0.3 seconds
        {
            StatusLED(RED);
            Sleep(216); //Sleep processor for 3ms
        }
    }

    return 0; //end the program - no errors
}