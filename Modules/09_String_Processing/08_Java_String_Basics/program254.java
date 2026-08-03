/*
---------------------------------------------------------
Purpose  : Update the original String reference.
Concepts : Object References, String Assignment.
New      : Reassigning String objects.
Change   : Replaces original reference with updated object.
---------------------------------------------------------
*/

import java.util.*;

class StringX
{
    public String Update(String str)
    {
        char Arr[] = str.toCharArray();

        Arr[0] = '_';

        return new String(Arr);
    }
}

class program254
{
    public static void main(String A[])
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sobj = strobj.Update(sobj);                    //Changed  (Not preferable because of data loss)
        System.out.println("updated string : "+sobj);  
    }
}
