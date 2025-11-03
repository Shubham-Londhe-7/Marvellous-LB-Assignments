#include<stdio.h>

int CountLessThan6(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit <= 6)
        {
            iCnt ++;
           
        }
        iNo = iNo / 10;
    }
    return iCnt;

}

int main()

{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountLessThan6(iValue);

    printf("The frequency of no which is less than 6 is :%d",iRet);
    return 0;
}