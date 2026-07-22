// Purpose  : Display array using array notation.
// Concepts : Arrays
// New      : Array Syntax
// Change   : Pointer notation → Array notation.

#include<stdio.h>
 
void Display(int Arr[])
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<4;iCnt++)
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