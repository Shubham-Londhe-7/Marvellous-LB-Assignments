#include<stdio.h>

int FirstChar(char *str, char key)
{
    int iCount = 0;

    while (*str != '\0')
    {   
        if(*str == key)
        {
            break;
        }
        iCount++;
        str++;
    }

    if(*str == '\0')
    {
        return -1;
    }   
    else
    {
        return iCount;
    }
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

    iRet = FirstChar(Arr, ch);

    if(iRet == -1)
    {
        printf("(%d) %c is not present in string\n",iRet, ch);
    }
    else
    {
        printf("First occurance of %c in string is : %d\n",ch, iRet);
    }

    return 0;
}