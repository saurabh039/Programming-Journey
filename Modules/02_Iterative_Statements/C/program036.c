// Purpose  : Display numbers in ascending order.
// Concepts : Functions, for Loop
// New      : Counter-controlled Loop
// Change   : Repeated statements → for loop.

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
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