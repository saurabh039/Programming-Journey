// Checked Exception
// Purpose  : Display factors using BufferedReader.
// Concepts : BufferedReader, Checked Exception
// New      : BufferedReader
// Change   : Scanner → BufferedReader.

import java.io.*;

class program74
{
    public static void main(String A[])
    {
        int iNo = 0;
        int i = 0;

        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter number : ");
        iNo = Integer.parseInt(bobj.readLine());
        
        for(i = 1; i <= (iNo / 2); i++)
        {
            if((iNo % i) == 0)
            {
                System.out.println(i);
            }
        }
    }
}
