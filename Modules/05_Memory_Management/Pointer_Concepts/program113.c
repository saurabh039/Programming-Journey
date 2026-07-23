// Purpose  : Traverse an array using pointer arithmetic.
// Concepts : Pointers, Pointer Increment
// New      : Pointer Traversal
// Change   : Fixed pointer → Pointer increment.

#include<stdio.h>
 
void Display(int *ptr)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<4;iCnt++,ptr++)
    {
        printf("%d\n",*ptr);
    }

}

int main()
{
    int Arr[] = {10,20,30,40};

    Display(Arr);    //Diplay (100)
    
    return 0;
}