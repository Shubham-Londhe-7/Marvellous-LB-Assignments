#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iFact = 0, iNonFact = 0;
    int iDifference = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }
    iDifference = iFact - iNonFact;

    return iDifference;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}