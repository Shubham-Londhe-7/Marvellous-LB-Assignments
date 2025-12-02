#include<stdio.h>

void DisplayASCII(char ch)
{
    printf("--------------------------------------------------\n");
    printf(" Character\tDecimal\tHex\tOctal\n");
    printf("--------------------------------------------------\n");

    printf("     %c\t\t%d\t%X\t%o\n", ch, ch, ch, ch);

    printf("--------------------------------------------------\n");
}

int main()
{
    char cValue = '\0';

    printf("Enter character :\n");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}