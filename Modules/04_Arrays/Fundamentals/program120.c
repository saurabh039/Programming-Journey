// Purpose  : Update traversal for larger arrays.
// Concepts : Arrays
// New      : Loop Size Update
// Change   : Corrected iteration limit.

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
    int Brr[] = {10,20,30,40,50,60,70};   //Change

    Display(Brr);    //Diplay (100)

    return 0;
}