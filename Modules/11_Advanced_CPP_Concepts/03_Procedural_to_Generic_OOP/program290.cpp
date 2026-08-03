/*
---------------------------------------------------------
Purpose  : Demonstrate controlled recursion.
Concepts : Base Case, Recursive Functions.
New      : Stops recursion using a termination condition.
Change   : Introduces proper recursive design.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 1;
    
    if(iCnt <= 4)
    {
        cout<<"Jay Ganesh...\n";
        iCnt++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}