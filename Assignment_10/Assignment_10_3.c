#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;   // 1 Kilometer = 1000 Meters
    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in Kilometer: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is %d\n", iRet);

    return 0;
}