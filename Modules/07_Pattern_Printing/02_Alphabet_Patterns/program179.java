/*
    iRow : 4
    iCol : 4

    a b c d
    a b c d
    a b c d
    a b c d

*/

/*
---------------------------------------------------------
Program : 179
Purpose : Print increasing alphabets in matrix form.
Concept : Nested loops with continuous character update.
New     : Character persistence across rows.
Change  : Character is not reset after each row.
---------------------------------------------------------
*/

import java.util.Scanner;

class Pattern{
    public void Display(int iRow,int iCol)
    {
        int i = 0, j = 0;
        char ch = 'a';

        
        for (i=1 ;i <= iRow; i++)
        {

            for ( j=  1;j<=iCol;j++)   
            {
                System.out.printf("%c\t",ch);
                ch++;                                         //important
            }
            System.out.println();
        }
    }
}

class program179
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