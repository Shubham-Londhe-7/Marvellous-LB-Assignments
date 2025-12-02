#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    BOOL bflag = FALSE;
    if((ch >= 'a' && ch <= 'z'))
    {
        bflag = TRUE;
    }

    return bflag;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character :\n");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character\n");
    }
    else
    {
    printf("It is not a small case character\n");
    }

    return 0;
}