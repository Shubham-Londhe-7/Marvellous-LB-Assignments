#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("Count of blank spaces is : %d\n",iRet);

    return 0;
}