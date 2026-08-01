/*
---------------------------------------------------------
Purpose  : Traverse strings using toCharArray().
Concepts : OOP, Character Arrays, Methods.
New      : Combines object-oriented design with arrays.
Change   : Uses a helper class for traversal.
---------------------------------------------------------
*/

import java.util.*;

class StringX
{
    public void Display(String str)
    {
        int iCnt = 0;

        char Arr[] = str.toCharArray();  //Converting string to character array

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
}

class program248
{
    public static void main(String A[])
    {
        
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        
        strobj.Display(sobj);
    }
}