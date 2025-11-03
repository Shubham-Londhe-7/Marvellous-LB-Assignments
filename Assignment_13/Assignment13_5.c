#include<stdio.h>

int DisplaySumEven(int iNo)
{
    int iCount = 0;
    int iSum = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if(iCount % 2 == 0)
        {

            iSum = iSum + iCount;
        }  
    }
    return iSum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    iRet = DisplaySumEven(iValue);

    printf("The sum of natural numbers is : %d",iRet);

    return 0;
}