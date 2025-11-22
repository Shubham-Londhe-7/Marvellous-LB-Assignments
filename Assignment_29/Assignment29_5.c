/*
    iRow = 4
    iCol = 4

    1   2   3   4
    2   3   4   5
    3   4   5   6
    4   5   6   7
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int num = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, num = i; j <= iCol; j++, num++)
        {
            printf("%d\t",num);
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