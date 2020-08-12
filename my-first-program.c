//my first program
#include "asuro.h"

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    StatusLED(RED); // small white led nex to switch - turn RED
    //Valid parameter values are OFF, GREEN, RED or YELLOW

    while (1)
        ; //eternal loop - a way of preventing the program from 'ending'

    return 0; //end the program - no errors
}
