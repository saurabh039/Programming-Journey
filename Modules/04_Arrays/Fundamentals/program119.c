// Purpose  : Demonstrate array size mismatch.
// Concepts : Arrays
// New      : Fixed Loop Limitation
// Change   : Changed array size.

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
    int Brr[] = {10,20,30,40,50,60,70};   //Change

    Display(Brr);    //Diplay (100)
    
    return 0;
}