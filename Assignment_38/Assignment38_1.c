#include<stdio.h>

void StrCpyRevX(char *src, char *dest)
{
    char *Start = src;
    char *temp = src;

    while(*Start != 0)
    {
        Start++;
        temp++;
    }

    temp--;

    while(*src != '\0')
    {
        *dest = *temp;
        src++;
        dest++;
        temp--;
    }
}

int main()
{
    char Arr[30] = {'\0'};
    char Brr[30] = {'\0'};

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    StrCpyRevX(Arr, Brr);

    printf("Main string (Arr) is :\n");
    printf("%s\n",Arr);

    printf("Reverse Copied (Brr) string is :\n");
    printf("%s\n",Brr);

    return 0;
}