/*
---------------------------------------------------------
Purpose  : Modify a string using character arrays.
Concepts : toCharArray(), String Constructor.
New      : Converting character array back to String.
Change   : Introduces mutable string processing.
---------------------------------------------------------
*/

import java.util.*;

class StringX
{
    public String Update(String str)             //String
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        String temp = new String(Arr);          //Conveting array back to string

        return temp;
    }
}

class program252
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