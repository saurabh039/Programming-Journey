/*
---------------------------------------------------------
Purpose  : Count occurrences of a character.
Concepts : Character Comparison, Arrays, Counting.
New      : Searching within a character array.
Change   : Counts occurrences of 'a'.
---------------------------------------------------------
*/

import java.util.*;

class StringX
{
    public int CountOccurence(String str)
    {
        int iCnt = 0,iCount = 0;

        char Arr[] = str.toCharArray(); 

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if (Arr[iCnt] == 'a')
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class program249
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        
        iRet = strobj.CountOccurence(sobj);
        System.out.println("The count of a is : "+iRet);
    }
}