/*
---------------------------------------------------------
Purpose  : Toggle the case of every character.
Concepts : ASCII Conversion, Character Classification.
New      : User-defined toggle case operation.
Change   : Converts uppercase to lowercase and vice versa.
---------------------------------------------------------
*/

import java.util.*;

class StringX
{
    public String strToggleX(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();

        for (iCnt = 0; iCnt <= Arr.length; iCnt++)
        {
            if (Arr[iCnt] >= 'A' && Arr[iCnt] <= 'Z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] + 32);
            }
            else if (Arr[iCnt] >= 'a' && Arr[iCnt] <= 'z')
            {
                Arr[iCnt] = (char)(Arr[iCnt] - 32);
            }
        }
        return new String(Arr);
    }
}

class program256
{
    public static void main(String A[])
    {
        String sRet = null;
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();

        sRet = strobj.strToggleX(sobj);                   
        System.out.println("updated string : "+sRet);  
    }
}

error