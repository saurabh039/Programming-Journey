// Purpose  : Pass array size as a parameter.
// Concepts : Arrays, Function Parameters
// New      : Dynamic Traversal
// Change   : Hardcoded size → Parameterized size.

#include<stdio.h>
 
void Display(int Arr[] , int iSize)
{
    int iCnt = 0;
    
    // sizeof(Arr)/sizeof(int)  here we can you this but is valid only for int not for float,char array
    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Brr[] = {10,20,30,40};

    Display(Brr,4);    //Array is called by address while size is called by value.

    return 0;
}