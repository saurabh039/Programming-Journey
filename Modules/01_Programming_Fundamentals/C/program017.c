// Purpose  : Check whether a number is Even or Odd.
// Concepts : bool, Functions, Modulus Operator
// New      : Direct Boolean Return
// Change   : Removed temporary variable.

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd( int iNo )
{
        return ((iNo % 2)==0);
}

int main()
{
    int iValue =0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("%d is Even number\n",iValue);

    }
    else
    {
        printf("%d is Odd number\n",iValue);
    }
    return 0;
}