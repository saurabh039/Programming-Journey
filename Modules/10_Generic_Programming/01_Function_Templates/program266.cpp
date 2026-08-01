/*
---------------------------------------------------------
Purpose  : Find the maximum using templates.
Concepts : Function Templates, Generic Programming.
New      : Generic maximum algorithm.
Change   : Supports multiple data types.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2)
{
    if(No1 > No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    double dValue1 = 10.0, dValue2 = 11.0, dRet = 0.0;

    dRet = Maximum(dValue1, dValue2);
    cout<<"Maximum : "<<dRet<<"\n";

    return 0;
}