/*
---------------------------------------------------------
Purpose  : Convert a String to a character array.
Concepts : toCharArray(), Arrays.
New      : String-to-array conversion.
Change   : Compares String length with array length.
---------------------------------------------------------
*/

import java.util.*;
 
class program245
{
    public static void main(String A[])
    {
        int iCnt = 0;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();
       
        char Arr[] = sobj.toCharArray();

        System.out.println(sobj.length());
        System.out.println(Arr.length);
    }
}