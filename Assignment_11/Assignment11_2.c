#include<stdio.h>
void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt ++ )
        {
            if(iCnt % 2 == 0)
            {
                 printf("%d\t",iCnt);

            }
           

        }

    }

    else
    {
        printf("Invalid range");
    }


}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Starting point :");
    scanf("%d",&iValue1);

    printf("Enter the ending point :");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}