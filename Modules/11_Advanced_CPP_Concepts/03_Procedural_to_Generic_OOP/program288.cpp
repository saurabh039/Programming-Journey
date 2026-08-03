/*
---------------------------------------------------------
Purpose  : Compare automatic storage behavior.
Concepts : auto Variables, Function Calls.
New      : Variable resets on every function invocation.
Change   : Demonstrates temporary local storage.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

void auto_demo()
{
    auto i = 1;
    cout<<"auto_demo : "<<i<<"\n";
    i++;
}

int main()
{
    auto_demo();
    auto_demo();
    auto_demo();
    auto_demo();

    return 0;
}