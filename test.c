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

int main(void)
{
    Init();
    while (1)
    {
        FrontLED(ON);
        unsigned int iData[2];
        int i = 0;

        while (1)
        {
            LineData(iData);
            StatusLED(GREEN);
            if ((iData[0] < 1000) && (iData[1] < 1000)) // the brighter your environment, the higher this value should be - and vice versa
            {
                if (iData[0] > iData[1])
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(120, 70);

                    // check for collision

                    if (PollSwitch() > 0)
                    {
                        //reversing
                        StatusLED(RED);
                        MotorDir(RWD, RWD);
                        MotorSpeed(100, 100);

                        for (i = 0; i < 50; i++)
                        {
                            Sleep(216);
                        }

                        //spinning
                        MotorDir(FWD, RWD);
                        MotorSpeed(130, 130);

                        for (i = 0; i < 100; i++)
                        {
                            Sleep(216);
                        }
                    }
                }
                else
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(70, 120);

                    // check for collision
                    if (PollSwitch() > 0)
                    {
                        //reversing
                        StatusLED(RED);
                        MotorDir(RWD, RWD);
                        MotorSpeed(100, 100);

                        for (i = 0; i < 50; i++)
                        {
                            Sleep(216);
                        }

                        //spinning
                        MotorDir(FWD, RWD);
                        MotorSpeed(130, 130);

                        for (i = 0; i < 100; i++)
                        {
                            Sleep(216);
                        }
                    }
                }
            }

            else
            {
                MotorDir(FWD, FWD);
                MotorSpeed(80, 80);

                // check for collision
                if (PollSwitch() > 0)
                {
                    //reversing
                    StatusLED(RED);
                    MotorDir(RWD, RWD);
                    MotorSpeed(100, 100);

                    for (i = 0; i < 50; i++)
                    {
                        Sleep(216);
                    }

                    //spinning
                    MotorDir(FWD, RWD);
                    MotorSpeed(130, 130);

                    for (i = 0; i < 100; i++)
                    {
                        Sleep(216);
                    }
                }
            }
        }
    }

    return 0;
}