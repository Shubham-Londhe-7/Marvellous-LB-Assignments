#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    BOOL bflag = FALSE;
    if((ch >= '0' && ch <= '9'))
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

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is digit\n");
    }
    else
    {
    printf("It is not a digit\n");
    }

    return 0;
}