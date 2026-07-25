/*
    ------------------------------------------------------------
    Purpose  : Create the first Pattern Printing class template.
    Concepts : Class Design, Method Creation.
    New      : Introduction to Pattern Printing module.
    Change   : No printing logic yet; establishes reusable structure.
    ------------------------------------------------------------
*/

class Pattern
{
    public void Display()
    {
        System.out.println("Inside Display");
        // Logic of pattern printing
    }
}

class program151
{
    public static void main(String A[])
    {
        Pattern pobj = new Pattern();
        pobj.Display();
    }
}