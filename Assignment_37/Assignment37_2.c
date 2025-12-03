#include<stdio.h>

int CountChar(char *str, char key)
{
    int iCount = 0;

    while (*str != '\0')
    {   
        if(*str == key)
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
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    printf("Enter character to count frequency :\n");
    scanf(" %c",&ch);

    iRet = CountChar(Arr, ch);

    printf("Frequency of %c in string is : %d\n",ch, iRet);

    return 0;
}