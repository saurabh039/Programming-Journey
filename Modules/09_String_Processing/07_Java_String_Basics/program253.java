/*
---------------------------------------------------------
Purpose  : Update and return a modified string.
Concepts : String Constructor, Return Statement.
New      : Returning objects directly.
Change   : Eliminates temporary String variable.
---------------------------------------------------------
*/

import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        return new String(Arr);                   //Changed
    }
}

class program253
{
    public static void main(String A[])
    {
        String sRet = null;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        
        sRet = strobj.Update(sobj);
        System.out.println("updated string : "+sRet);
    }
}