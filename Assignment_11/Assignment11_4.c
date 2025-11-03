#include<stdio.h>
int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart < 0 || iEnd <0)
    {
        printf("Invalid entry");
        return 0;
    }

    if(iStart <= iEnd)
    {

        for(iCnt = iStart; iCnt <= iEnd; iCnt ++ )
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;

            }
           
        }

    }
    else
    {
        printf("Invalid range");
    }
    
    return iSum;


}

int main()
{
    int iValue1 = 0;
    int iValue2, iRet = 0;

    printf("Enter the Starting point :");
    scanf("%d",&iValue1);

    printf("Enter the ending point :");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet != 0)
    {
         printf("The Addition is : %d",iRet);

    }

   
    return 0;
}