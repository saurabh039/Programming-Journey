// Purpose  : Display all non-factors of a number.
// Concepts : for Loop, Modulus Operator
// New      : Non-Factors
// Change   : Factors → Non-factors.

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d\n",iCnt);
        }   
    }
}
 
// Time Complexity : O(N)

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}