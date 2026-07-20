// Language: C
// Concepts: if, Modulus Operator
// New: Even-Odd Logic

/*
    START
        Accept the no as store it as no
        Divide no by 2
        if the remainder is 0
            then display as Even
        otherwise
            display as Odd
    STOP
*/

#include<stdio.h>

void CheckEvenOdd( int iNo )
{
    if ( iNo % 2 == 0 )
    {
        printf("%d is Even number\n", iNo);
    }
    else
    {
        printf("%d is Odd Number\n", iNo);
    }
}

int main()
{
    int iValue =0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return 0;
}