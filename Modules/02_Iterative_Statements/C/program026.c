// Purpose  : Display a message N times.
// Concepts : Functions, for Loop, User Input
// New      : Dynamic Function
// Change   : Fixed count → User-defined count.

#include<stdio.h>
//Dynamic function
void Display(int iFrequency)
{
    int iCnt = 0;
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