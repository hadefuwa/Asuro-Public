/*

int lData[2]; // Provide memory space for measurement results
LineData(lData); // Reading measurement data
if (lData[1] > lData[0])
 command1;
else
 command2;

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
                if (iData[0] > iData[1])
                {
                    MotorDir(Fwd, Fwd);
                    MotorSpeed(120, 60);
                }
                else
                {
                    MotorDir(Fwd, Fwd);
                    MotorSpeed(60, 120);
                }
            }
        }
    }

    return 0;
}