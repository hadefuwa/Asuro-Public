/*

Turn on the front LED
Read the data received by the two phototransistors
Compare the data received to a midway value
if under 800 then statusled green
if over 800 then statusled red

Midway value is half way between black and white
midway value = 800

*/

#include "asuro.h" //<<<<<<<<

int main(void)
{
    Init();
    while (1)
    {
        FrontLED(ON);
        unsigned int iData[2];

        while (1)
        {
            LineData(iData);

            if ((iData[0] < 800) && (iData[1] < 800))
            {
                StatusLED(GREEN);
            }
            else
            {
                StatusLED(RED);
            }
        }
    }

    return 0;
}