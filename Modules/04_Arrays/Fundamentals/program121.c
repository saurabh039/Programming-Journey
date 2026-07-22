// Purpose  : Demonstrate array overflow.
// Concepts : Arrays
// New      : Out-of-Bounds Access
// Change   : Array size mismatch.

#include<stdio.h>
 
void Display(int Arr[])
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < 7;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[] = {10,20,30,40};

    Display(Brr);    //Diplay (100)

    return 0;
}