package Assignment_31;

/*
    iRow = 5
    iCol = 5

    $   *   *   *   *
    #   $   *   *   *
    #   #   $   *   *
    #   #   #   $   *
    #   #   #   #   $
*/

import java.util.Scanner;

class Pattern
{
    void Pattern(int iRow, int iCol)
    {
        int i = 0, j = 0;

        if(iRow != iCol)
        {
            System.out.println("Invalid input !\n");
            System.out.println("Number of rows should be equal to number of columns.\n");
            return;
        }
        
        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(i == j)
                {
                    System.out.printf("$\t");
                }
                else if (i >= j)
                {
                    System.out.printf("#\t");
                }
                else
                {
                    System.out.printf("*\t");
                }  
            }
            System.out.println();
        }
    }
}

class Assignment31_3
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);    
        int iValue1 = 0, iValue2 = 0;
        
        System.out.println("Enter number of Rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of Columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Pattern(iValue1, iValue2);

        sobj = null;
        pobj = null;
    }
}