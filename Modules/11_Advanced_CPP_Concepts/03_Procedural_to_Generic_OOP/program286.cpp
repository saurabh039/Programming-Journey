/*
---------------------------------------------------------
Purpose  : Demonstrate explicit auto storage class.
Concepts : auto Keyword, Local Variables.
New      : Explicit declaration of automatic variables.
Change   : Reinforces automatic storage behavior.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

void Display()
{
    auto int iCnt = 0;       // auto storage class
    cout<<"Jay Ganesh..."<<iCnt<<"\n";
    iCnt++;
    Display();
}

int main()
{
    Display();

    return 0;
}