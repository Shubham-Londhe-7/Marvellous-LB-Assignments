#include<stdio.h>
#include<stdbool.h>

bool IsDivisibleByFive(int number)
{
    if(number % 5 == 0)
    {
        return true;

    }
    else
    {
        return false;
    }

}

int main()
{
    int num;
    bool bRet = false;


    printf("Enter the number :");
    scanf("%d",&num);

    bRet = IsDivisibleByFive(num);
    if(bRet == true)
    {
        printf("The number is Divisible by 5.");

    }
    else
    {
        printf("The number is not Divisible by 5 !");
    }


    return 0;
}