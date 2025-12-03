#include<stdio.h>

int LastChar(char *str, char key)
{
    int iCount = 0, iPos = 0;

    iPos = -1;
    while (*str != '\0')
    {   
        if(*str == key)
        {
            iPos = iCount;
        }
        iCount++;
        str++;
    }

    return iPos;
}

int main()
{
    char Arr[20] = {'\0'};
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    printf("Enter character :\n");
    scanf(" %c",&ch);

    iRet = LastChar(Arr, ch);

    if(iRet == -1)
    {
        printf("(%d) %c is not present in string\n",iRet, ch);
    }
    else
    {
        printf("Last occurance of %c in string is : %d\n",ch, iRet);
    }

    return 0;
}