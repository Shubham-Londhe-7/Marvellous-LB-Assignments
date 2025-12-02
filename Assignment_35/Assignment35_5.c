#include<stdio.h>

void Reverse(char *str)
{
    char *Start = str;
    char *End = str;
    char temp = '\0';

    while(*str != '\0')
    {
        End++;
        str++;
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
    scanf("%[^\n]s", Arr);

    Reverse(Arr);

    printf("%s\n",Arr);

    return 0;
}