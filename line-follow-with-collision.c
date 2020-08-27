/*

Line follow program that responds to collisions by reversing and spinning around then continuing

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

            if ((iData[0] < 1000) && (iData[1] < 1000)) //the brighter your environment the higher this number needs to be and vice versa
            {
                if (iData[0] > iData[1])
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(100, 60);

                    if (PollSwitch() > 0)
                    {
                        StatusLED(RED);
                        MotorDir(RWD, RWD);
                        MotorSpeed(100, 100);

                        for (i = 0; i < 50; i++) //3ms * 100 = 0.3s
                        {
                            Sleep(216); //3ms
                        }

                        MotorDir(FWD, RWD);
                        MotorSpeed(130, 130);

                        for (i = 0; i < 100; i++) //3ms * 100 = 0.3s
                        {
                            Sleep(216); //3ms
                        }

                        MotorDir(FWD, FWD);
                        StatusLED(GREEN);
                    }
                }
                else
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(60, 100);

                    if (PollSwitch() > 0)
                    {
                        StatusLED(RED);
                        MotorDir(RWD, RWD);
                        MotorSpeed(100, 100);

                        for (i = 0; i < 50; i++) //3ms * 100 = 0.3s
                        {
                            Sleep(216); //3ms
                        }

                        MotorDir(FWD, RWD);
                        MotorSpeed(130, 130);

                        for (i = 0; i < 100; i++) //3ms * 100 = 0.3s
                        {
                            Sleep(216); //3ms
                        }

                        MotorDir(FWD, FWD);
                        StatusLED(GREEN);
                    }
                }
            }

            else if ((iData[0] > 1000) && (iData[1] > 1000))
            {
                MotorDir(FWD, FWD);
                MotorSpeed(60, 60);

                if (PollSwitch() > 0)
                {
                    StatusLED(RED);
                    MotorDir(RWD, RWD);
                    MotorSpeed(100, 100);

                    for (i = 0; i < 50; i++) //3ms * 100 = 0.3s
                    {
                        Sleep(216); //3ms
                    }

                    MotorDir(FWD, RWD);
                    MotorSpeed(130, 130);

                    for (i = 0; i < 100; i++) //3ms * 100 = 0.3s
                    {
                        Sleep(216); //3ms
                    }

                    MotorDir(FWD, FWD);
                    StatusLED(GREEN);
                }
            }
        }
    }

    return 0;
}
