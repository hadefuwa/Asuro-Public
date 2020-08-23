// Code on page 60
// Pollswitch code

/*
Original Code
#include “asuro.h”
int main(void) {
while (1) {
if (PollSwitch()>0) {StatusLED(RED);}
else {StatusLED(GREEN);}
}
}

*/

#include "asuro.h"

int main(void)
{
    Init(); //initialise - initialises the microcontroller ports

    while (1)
    {
        if (PollSwitch() > 0) //Calling pollswitch function
        // queries the front switches via polling - value of 0 = not pressed
        // if it is pressed = value 1
        {
            StatusLED(RED);
            //stop
        }
        else // value of pollswitch's is 0
        {
            StatusLED(GREEN);
            //drive forward
        }
    }

    return 0;
}