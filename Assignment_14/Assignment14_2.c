#include<stdio.h>
#include<stdbool.h>
typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }

    return false;

}

int main()

{
    int iValue = 0;
    BOOL bRet = false;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");

    }
    return 0;
}