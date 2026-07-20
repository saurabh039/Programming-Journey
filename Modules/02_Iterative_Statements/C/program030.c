// 1    2   3   4   5
// Purpose  : Display numbers using a while loop.
// Concepts : while Loop
// New      : while Loop
// Change   : for Loop → while Loop.

#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    iCnt = 1;
    while(iCnt <= 5)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }

    printf("\n");
}

int main()
{      
    Display();  
    
    return 0;
}