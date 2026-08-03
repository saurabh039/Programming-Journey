/*
---------------------------------------------------------
Purpose  : Access characters from a character array.
Concepts : Character Arrays, Array Indexing.
New      : Traversing converted character arrays.
Change   : Uses array indexing after conversion.
---------------------------------------------------------
*/

import java.util.*;
 
class program246
{
    public static void main(String A[])
    {
        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string:");
        String sobj = scanobj.nextLine();
       
        char Arr[] = sobj.toCharArray();

        System.out.println(Arr[0]);
        System.out.println(Arr[1]);
        System.out.println(Arr[2]);
        System.out.println(Arr[3]);
        System.out.println(Arr[4]);

    }
}