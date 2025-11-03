#include<stdio.h>

int Sumfactors(int number)
{

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= number/2; iCnt++)
    {
        if(number % iCnt == 0)
        {
           iSum = iSum +iCnt;
        }
    }

    return iSum;

}

int main()
{
    int num;
    int iRet = 0;

    printf("Enter the number :");
    scanf("%d",&num);

    iRet = Sumfactors(num);

    printf("The Sum of factors of given number is :%d",iRet);


    return 0;
}