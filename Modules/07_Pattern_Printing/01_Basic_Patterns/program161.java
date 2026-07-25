// Input :  5
// Output : -5  -4  -3  -2  -1  0   1   2   3   4   5

/*
    ------------------------------------------------------------
    Purpose  : Print numbers from -N to +N using one loop.
    Concepts : Single Loop Optimization.
    New      : Optimized symmetric traversal.
    Change   : Replaces two loops with one continuous loop.
    ------------------------------------------------------------
*/

import java.util.*;

class Pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        for(iCnt = -iNo; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t");
        }

        System.out.println();
    }
}

class program161
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