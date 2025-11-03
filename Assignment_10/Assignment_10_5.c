#include <stdio.h>

double SquareMeter(int iValue)
{
    double dSquareMeter = 0.0;
    dSquareMeter = iValue * 0.0929;   // 1 square foot = 0.0929 square meter
    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meters is %.4lf\n", dRet);

    return 0;
}