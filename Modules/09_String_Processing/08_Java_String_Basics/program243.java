/*
---------------------------------------------------------
Purpose  : Traverse a string using charAt().
Concepts : Looping, String.length(), charAt().
New      : Character-by-character traversal.
Change   : Uses indexing instead of direct access.
---------------------------------------------------------
*/

import java.util.*;

class program243
{
    public static void main(String A[])
    {
        int iCnt = 0;

        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        for (iCnt = 0;iCnt <=str.length() ;iCnt++)
        {
            System.out.println(str.charAt(iCnt));
        }    
    }
}