
#include "asuro.h"

int main(void)
{
    Init();
    while (1)
    {
        unsigned int iData[2];
        FrontLED(ON);

        while (1)
        {
            LineData(iData);

            if ((iData[0] < 800) || (iData[1] < 800))
            {
                if (iData[0] > iData[1])
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(150, 120);
                }
                else if (iData[0] < iData[1])
                {
                    MotorDir(FWD, FWD);
                    MotorSpeed(120, 150);
                }
            }
        }
    }
}