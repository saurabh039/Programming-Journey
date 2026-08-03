/*
---------------------------------------------------------
Purpose  : Demonstrate infinite recursion.
Concepts : Recursion, Function Calls.
New      : Function repeatedly invokes itself.
Change   : Introduces recursive function execution.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

void Display()
{
    cout<<"Jay Ganesh...\n";
    Display();
}

int main()
{
    Display();

    return 0;
}