#include<stdio.h>

int Difference(char *str)
{
    int iSmallCount = 0, iCapitalCount;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iSmallCount++;
        }
        else if(*str >= 'A' && *str <= 'Z')
        {
            iCapitalCount++;
        }
        str++;
    }
    return (iSmallCount-iCapitalCount);
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("Difference b/w small and capital letters is : %d\n",iRet);

    return 0;
}