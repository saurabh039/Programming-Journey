// 1    2   3   4   5
// Purpose  : Display numbers in ascending order.
// Concepts : Functions, for Loop
// New      : Ascending Sequence
// Change   : Fixed range → Dynamic range.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Please enter frequency : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}