#include<stdio.h>

int main()
{
    char Name[50];
    printf("Please Enter the full name :\n ");
    scanf("%[^\n]s",&Name);
    printf("Your name is %s",Name);

    return 0;
}