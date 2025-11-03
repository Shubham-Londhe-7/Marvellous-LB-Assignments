#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCount = 0;

    for(iCount = 1; iCount <= iNo; iCount++)
    {
        if(iCount % 2 != 0)
        
        {
            printf("%d \t",iCount);

        }
        
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    DisplayOdd(iValue);


    return 0;
}