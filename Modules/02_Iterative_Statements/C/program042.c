// Input 10
// 2    4   6   8   10
// Purpose  : Display even numbers up to N.
// Concepts : for Loop, if Statement
// New      : Conditional Filtering
// Change   : Display all numbers → Display only even numbers.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if( iCnt % 2 == 0)
        {
            printf("%d\t",iCnt);
        }
    }
    printf("\n");
}

// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Please enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}