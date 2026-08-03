/*
---------------------------------------------------------
Purpose  : Demonstrate procedural programming.
Concepts : POP, Standalone Functions.
New      : Arithmetic operations using functions.
Change   : Introduces the POP programming model.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans = 0;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    cout<<Addition(10,11)<<"\n";

    return 0;
}