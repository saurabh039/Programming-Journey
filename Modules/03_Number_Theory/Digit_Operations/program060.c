// Purpose  : Extract digits from a number.
// Concepts : Modulus Operator, Division Operator
// New      : Digit Extraction
// Change   : Factors → Digit operations.

#include<stdio.h>

int main()
{
    int iNo = 7236;
    int iDigit = 0;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    iDigit = iNo % 10;
    printf("%d\n",iDigit);
    iNo = iNo / 10;

    return 0;
}