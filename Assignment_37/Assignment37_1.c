#include<stdio.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;

BOOL ChkChar(char *str, char key)
{
    BOOL bFlag = FALSE;

    while (*str != '\0')
    {   
        if(*str == key)
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }

    return bFlag;   
}

int main()
{
    char Arr[20] = {'\0'};
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    printf("Enter character to search :\n");
    scanf(" %c",&ch);

    bRet = ChkChar(Arr, ch);

    if(bRet == TRUE)
    {
        printf("%c character is present in string\n", ch);
    }
    else
    {
        printf("%c character is not present in string\n",ch);
    }

    return 0;
}