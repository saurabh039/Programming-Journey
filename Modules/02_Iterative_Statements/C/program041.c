// Input 10
// 2    4   6   8   10
// Purpose  : Display even numbers up to N.
// Concepts : for Loop
// New      : Optimized Loop Increment
// Change   : Condition check → Step increment by 2.


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt+=2)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

// Time Complexity : O(N/2)

int main()
{
    int iValue = 0;

    printf("Please enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}