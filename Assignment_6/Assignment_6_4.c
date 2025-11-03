
#include<stdio.h>

int Multi(int iNo1,int iNo2,int iNo3)
{
    int multi = 0;
    if(iNo1 == 0)
    {
        iNo1 = 1;
    }

    if(iNo2 == 0)
    {
        iNo2 = 1;
    }

    if(iNo3 == 0)
    {
        iNo3 = 1;
    }

    multi = iNo1 * iNo2 * iNo3;

    return multi;

}


int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    int iRet = 0;

    printf("Enter the three numbers :");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multi(iValue1,iValue2,iValue3);
    printf("The multiplication is :%d",iRet);

    return 0;
}
