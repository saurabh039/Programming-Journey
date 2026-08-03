/*
---------------------------------------------------------
Purpose  : Demonstrate automatic storage class in recursion.
Concepts : auto Variables, Recursion.
New      : Local variables are recreated on every call.
Change   : Shows why auto variables do not retain state.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

void Display()
{
    int iCnt = 0;       // auto storage class
    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();
}

int main()
{
    Display();

    return 0;
}