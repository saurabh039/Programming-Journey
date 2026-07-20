// factors of 6
// Purpose  : Display all factors of a number.
// Concepts : for Loop, Modulus Operator
// New      : Factor Iteration
// Change   : Multiple if statements → for loop.

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}