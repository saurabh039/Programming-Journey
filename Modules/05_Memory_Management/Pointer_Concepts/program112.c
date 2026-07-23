// Purpose  : Pass an array using a pointer.
// Concepts : Arrays, Pointers
// New      : Array as Pointer
// Change   : Array parameter → Pointer parameter.

#include<stdio.h>
 
void Display(int *ptr)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt<4;iCnt++)
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