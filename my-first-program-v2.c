//my first program
#include "asuro.h"

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    StatusLED(RED);
    StatusLED(YELLOW);
    StatusLED(GREEN);
    StatusLED(OFF);

    while (1)
        ; //eternal loop - a way of preventing the program from 'ending'

    return 0; //end the program - no errors
}
