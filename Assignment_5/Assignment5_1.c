#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num % 2) == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int number;

    printf("Enter number :\n");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}