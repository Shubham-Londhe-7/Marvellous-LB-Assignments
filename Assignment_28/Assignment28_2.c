/*
    iRow = 4
    iCol = 4

    A   B   C   D
    a   b   c   d
    A   B   C   D
    a   b   c   d
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0', CH = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, ch = 'a', CH = 'A'; j <= iCol; j++, ch++, CH++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                ch = 'A';
                printf("%c\t",CH);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of Rows : \n");
    scanf("%d",&iValue1);

    printf("Enter the number of Columns : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}