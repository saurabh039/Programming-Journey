/*
    input : 8
    output : z y x w v u t s 
    index :  1 2 3 4 5 6 7 8

*/

/*
---------------------------------------------------------
Program : 178
Purpose : Print reverse lowercase alphabets.
Concept : Reverse character traversal.
New     : Character decrement.
Change  : Reverse alphabetical sequence.
---------------------------------------------------------
*/

import java.util.Scanner;

class Pattern{
    public void Display(int iNo)
    {
        int iCnt = 0;
        char ch = 'z';

        for (iCnt = 1; iCnt <= iNo; iCnt++,ch--)
        {
            System.out.printf("%c\t",ch);
        }
        System.out.println();
    }
}


class program178
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the frequency : ");
        iValue = sobj.nextInt();

        Pattern pobj = new Pattern();
        pobj.Display(iValue);
    }   
}