// Purpose  : Display factors using exception handling.
// Concepts : try-catch
// New      : Exception Handling
// Change   : Added try-catch block.

import java.io.*;

class program75
{
    public static void main(String A[])
    {
        int iNo = 0;
        int i = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");
        
        try
        {
            iNo = Integer.parseInt(bobj.readLine());
        }
        catch(IOException iobj)
        {}

        for(i = 1; i <= (iNo / 2); i++)
        {
            if((iNo % i) == 0)
            {
                System.out.println(i);
            }
        }
    }
}
