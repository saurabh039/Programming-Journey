// 1    2   3   4   5
// Purpose  : Display numbers using a for loop.
// Concepts : for Loop
// New      : Counter Variable
// Change   : Repeated statements → Loop.

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <=5; iCnt++)
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