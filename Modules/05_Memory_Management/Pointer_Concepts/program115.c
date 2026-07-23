// Purpose  : Traverse an array using pointer notation.
// Concepts : Pointer Arithmetic
// New      : Pointer Variable Naming
// Change   : ptr → Arr pointer.

#include<stdio.h>
 
void Display(int *Arr)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<4;iCnt++,Arr++)
    {
        printf("%d\n",*Arr);
    }

}

int main()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);    //Diplay (100)
    
    return 0;
}