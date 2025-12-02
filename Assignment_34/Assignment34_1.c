#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("--------------------------------------------------\n");
    printf(" Character\tDecimal\tHex\tOctal\n");
    printf("--------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i < 32 || i == 127)
        {
            printf("  Non-printable\t%d\t%X\t%o\n", i, i, i);
        }
        else
        {
            printf("     %c\t\t%d\t%X\t%o\n", i, i, i, i);
        }
    }

    printf("--------------------------------------------------\n");
}

int main()
{
    DisplayASCII();

    return 0;
}