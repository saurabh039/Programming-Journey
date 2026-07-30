/*
    iRow : 4
    iCol : 4

    % # # # 
    * % # # 
    * * % #
    * * * %
*/

/*
---------------------------------------------------------
Purpose  : Print diagonal pattern using printf().
Concepts : printf(), Escape Characters, Matrix Traversal.
New      : Printing '%' using '%%' escape sequence.
Change   : Demonstrates special character handling in printf().
---------------------------------------------------------
*/

import java.util.Scanner;

class Pattern{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;

        if (iRow != iCol)
        {
            System.out.println("Invalid input!!!!!!");
            System.out.println("Row number and column number should be same....");
            return;
        }

        for (i=1 ;i <= iRow; i++)
        {
            for ( j=1; j<=iCol; j++) 
            {
                if (i>j)
                {
                    System.out.printf("*\t");
                }
                else if ( i == j)
                {
                    System.out.printf("%%\t");           //important
                }
                else 
                {
                    System.out.printf("#\t");          
                }
            }
            System.out.println();
        }
    }
}

class program192
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter number of rows : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iValue2 = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue1,iValue2);
    }   
}