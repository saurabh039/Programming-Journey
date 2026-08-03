/*
---------------------------------------------------------
Purpose  : Calculate the sum of floating arrays.
Concepts : Arrays, Floating Point Numbers.
New      : Summation for float arrays.
Change   : Extends array processing to float values.
---------------------------------------------------------
*/

#include<iostream>
using namespace std;

float Summation(float Arr[], int iSize)
{
    int iCnt = 0;
    float iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return iSum;
}

int main()
{
    float Brr[] = {10.1f,20.2f,30.3f,40.4f,50.5f};
    float iRet = 0.0f;

    iRet = Summation(Brr,5);

    cout<<"Summation is : "<<iRet<<"\n";

    return 0;
}