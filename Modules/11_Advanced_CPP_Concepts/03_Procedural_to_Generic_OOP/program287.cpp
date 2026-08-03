/*
---------------------------------------------------------
Purpose  : Demonstrate static variables in recursion.
Concepts : static Variables, Recursion.
New      : Static variables preserve values across calls.
Change   : Introduces persistent local storage.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

void Display()
{
    static int iCnt = 0;       // static storage class
    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();
}

int main()
{
    Display();

    return 0;
}