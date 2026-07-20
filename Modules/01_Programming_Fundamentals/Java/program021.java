//Best Approach
// Purpose  : Print a message using an object.
// Concepts : Class, Object, Methods
// New      : Object Creation
// Change   : Static call → Object call


class Marvellous
{
    public void Display()
    {
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
        System.out.println("Jay Ganesh...");
    }
}
class program21
{
    public static void main(String A[])
    {
        Marvellous mobj = new Marvellous();
        mobj.Display();
    }
}