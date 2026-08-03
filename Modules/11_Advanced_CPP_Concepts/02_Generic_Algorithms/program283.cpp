/*
---------------------------------------------------------
Purpose  : Demonstrate repetition using a while loop.
Concepts : while Loop, Iteration.
New      : Uses conditional looping for repetition.
Change   : Introduces while-based iteration.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;
    
    iCnt = 1;
    
    while(iCnt <= 4)
    {
        cout<<"Jay Ganesh...\n";
        iCnt++;
    }
}

int main()
{
    Display();

    return 0;
}