// 5    4   3   2   1  
// Purpose  : Display numbers in reverse using a loop.
// Concepts : for Loop
// New      : Reverse Counter
// Change   : Repeated statements → Reverse loop.

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    
    printf("\n");
}

int main()
{
    Display();

    return 0;
}