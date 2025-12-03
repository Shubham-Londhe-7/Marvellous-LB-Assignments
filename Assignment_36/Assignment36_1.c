#include<stdio.h>

void strlwerX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A' && *str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter the string : \n");
    scanf("%[^\n]s",Arr);

    strlwerX(Arr);

    printf("%s\n",Arr);

    return 0;
}