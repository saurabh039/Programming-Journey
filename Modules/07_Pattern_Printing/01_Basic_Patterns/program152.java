// Input : 5
// Output : *   *   *   *   *
/*
    ------------------------------------------------------------
    Purpose  : Print '*' horizontally N times.
    Concepts : for Loop, Sequential Printing.
    New      : Basic one-dimensional pattern generation.
    Change   : First actual pattern printing implementation.
    ------------------------------------------------------------
*/

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.print("*\t");
        }

        System.out.println();
    }
}

class program152
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the frequency : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }
}