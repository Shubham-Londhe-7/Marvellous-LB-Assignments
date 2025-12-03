#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    StrCpyX(Arr, Brr);

    printf("Main string (Arr) is :\n");
    printf("%s\n",Arr);

    printf("Copied (Brr) string is :\n");
    printf("%s\n",Brr);

    return 0;
}