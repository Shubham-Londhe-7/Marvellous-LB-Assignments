#include<stdio.h>
void RangeDisplayReverse(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart <= iEnd)
    {
        for(iCnt = iEnd; iCnt > iStart; iCnt -- )
        {
            printf("%d\t",iCnt);

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

    RangeDisplayReverse(iValue1, iValue2);

    return 0;
}