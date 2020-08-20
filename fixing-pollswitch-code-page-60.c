#include "asuro.h"

/* 

ORIGINAL CODE

#include “asuro.h”
int main(void) {
while (1) {
if (PollSwitch()>0) {StatusLED(RED);}
else {StatusLED(GREEN);}
}
}
*/

int main(void)
{
    Init();

    unsigned char t1, t2; //These variables can hold 0 to 255 in value
    int i = 0;            //loop variable

    while (1)
    {

        StartSwitch(); //Start interrupt operation of the button.

        t1 = PollSwitch(); //Query the front buttons via polling and store that value into t1
        t2 = PollSwitch(); //Query the front buttons via polling and store that value into t2

        if (t1 == 0 && t2 == 0) //test if these variables both hold 0 in them
        {
            StatusLED(GREEN);
        }

        else //if t1 & t2 are not 0
        {
            StatusLED(RED);
            for (i = 0; i < 100; i++) //3ms * 100 = 0.3 seconds
            {
                StatusLED(RED);
                Sleep(216); //Sleep processor for 3ms
            }
        }
        StopSwitch(); //Stop interrupt operation of the button.
    }
    return 0;
}
