// Purpose  : Extract digits from a larger number.
// Concepts : Modulus Operator, Division Operator
// New      : Multi-digit Processing
// Change   : Increased input size.

#include<stdio.h>

int main()
{
    int iNo = 723614;
    int iDigit = 0;

    printf("--------------------------------------------------\n");
    printf("Original value of iNo is : %d\n",iNo);

    printf("--------------------------------------------------\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("--------------------------------------------------\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("--------------------------------------------------\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("--------------------------------------------------\n");
    iDigit = iNo % 10;
    printf("iDigit is : %d\n",iDigit);
    iNo = iNo / 10;
    printf("iNo is : %d\n",iNo);

    printf("--------------------------------------------------\n");

    return 0;
}