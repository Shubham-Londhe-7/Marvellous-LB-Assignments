#include<stdio.h>

void Display(int iNo)
{
    printf("You entered: %d\n", iNo);
}


int main()
{

    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}