// Purpose  : Display a message N times.
// Concepts : Functions, Input Validation
// New      : Filter
// Change   : Added invalid input handling.

#include<stdio.h>
//Dynamic function

void Display(int iFrequency)
{
    int iCnt = 0;
    // Filter
    if(iFrequency < 0)
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{     
    int iCount = 0;
    printf("Enter frequency : \n");
    scanf("%d",&iCount);

    Display(iCount);  

    return 0;
}