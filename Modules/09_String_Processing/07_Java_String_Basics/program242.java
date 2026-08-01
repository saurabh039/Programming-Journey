/*
---------------------------------------------------------
Purpose  : Access characters using charAt().
Concepts : String Indexing, charAt().
New      : Retrieving characters by index.
Change   : Demonstrates random character access.
---------------------------------------------------------
*/

import java.util.*;

class program242
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = sobj.nextLine();

        System.out.println(str.charAt(0));
        System.out.println(str.charAt(1));
        System.out.println(str.charAt(2));
        System.out.println(str.charAt(3));
        System.out.println(str.charAt(4));
    }
    
}