#include<stdio.h>

int Countfactors(int number)
{

    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if(number % iCnt == 0)
        {
           iCount = iCount +1;
        }
    }

    return iCount;

}


int main()
{
    int num;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&num);

    iRet = Countfactors(num);

    printf("The count of factors of given number is :%d",iRet);


    return 0;
}