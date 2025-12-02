#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    BOOL bflag = FALSE;
    if((ch >= 'A' && ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital Character\n");
    }
    else
    {
        printf("It is not a Capital Character\n");
    }

    return 0;
}