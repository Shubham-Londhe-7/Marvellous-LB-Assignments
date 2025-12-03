#include<stdio.h>

void StrRevX(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*str != 0)
    {
        str++;
        End++;
    }

    End--;
    while(Start < End)
    {
        temp = *Start;
        *Start = *End;
        *End = temp;

        Start++;
        End--;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter the string :\n");
    scanf("%[^\n]s",Arr);

    StrRevX(Arr);

    printf("Reverse string is :\n");
    printf("%s\n",Arr);

    return 0;
}