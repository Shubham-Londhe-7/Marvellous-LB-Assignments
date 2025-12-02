#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Difference(char *str)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            bFlag = TRUE;
        }
        str++;
    }
    return bFlag;
}
int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    bRet = Difference(Arr);

    if(bRet == TRUE)
    {
        printf("String contains vowel\n");
    }
    else
    {
        printf("String not contains vowel\n");
    }

    return 0;
}