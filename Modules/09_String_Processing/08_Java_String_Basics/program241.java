/*
---------------------------------------------------------
Purpose  : Display the length of a string.
Concepts : String.length(), Java Strings.
New      : Using the length() method.
Change   : Retrieves string length using a built-in method.
---------------------------------------------------------
*/

import java.util.*;

class program241
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String : ");
        String str = sobj.nextLine();

        System.out.println("Input is : "+str);
        System.out.println("Length of string : "+str.length());
    }
}

//str.length is like str.len in c and is way differnt from sizeof() of c