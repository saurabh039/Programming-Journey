/*
---------------------------------------------------------
Purpose  : Demonstrate enhanced for-each loop.
Concepts : Arrays, Enhanced for Loop.
New      : Traverses arrays using for-each syntax.
Change   : Introduces simplified array iteration.
---------------------------------------------------------
*/

import java.util.*;

class program292
{
    public static void main(String A[])
    {
        int Arr[] = {45,21,90,54,78};

        // this is foreach loop
        for(int no : Arr)
        {
            System.out.println(no);
        }
    }
}