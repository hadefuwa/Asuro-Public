/*

Program Description: Line following program that responds to collissions by reversing and spinning around

Outline
Loop:
    Line following code
        if collision
            reverse for 0.5s
            spin 180 degrees
LEDs Green if no collision, red if collision and whilst reversing

*/

#include "asuro.h"

// all definitions detailed in 'definitions.txt'
#define COLOURTHRESHOLD 1000 // 1500 is pure white & 0 pure black.
// speeds for motors
#define STANDARDSPEED 130
#define SLOWSPEED 100
#define FASTSPEED 150
#define VSLOWSPEED 80

int collisionDetect(void);

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
            StatusLED(GREEN);
            if ((iData[0] < COLOURTHRESHOLD) && (iData[1] < COLOURTHRESHOLD))
            {
                if (iData[0] > iData[1])
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(STANDARDSPEED, VSLOWSPEED);

                    collisionDetect();
                }
                else
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(VSLOWSPEED, STANDARDSPEED);

                    collisionDetect();
                }
            }

            else
            {
                MotorDir(FWD, FWD);
                MotorSpeed(VSLOWSPEED, VSLOWSPEED);

                collisionDetect();
            }
        }
    }

    return 0;
}

int collisionDetect(void)
{
    int i = 0;
    // check for collision
    if (PollSwitch() > 0)
    {
        //reversing
        StatusLED(RED);
        MotorDir(RWD, RWD);
        MotorSpeed(SLOWSPEED, SLOWSPEED);

        for (i = 0; i < 50; i++)
        {
            Sleep(216);
        }

        //spinning
        MotorDir(FWD, RWD);
        MotorSpeed(STANDARDSPEED, STANDARDSPEED);

        for (i = 0; i < 100; i++)
        {
            Sleep(216);
        }
    }

    return;
}