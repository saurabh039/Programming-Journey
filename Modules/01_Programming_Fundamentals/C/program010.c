// Language: C
// Concepts: Functions, Documentation
// New: Code Documentation

/*
    Algorithm

    START
        Accept first number as no1
        Accept second number as no2
        If the input is negative then convert it into positive
        Perform addition of no1 and no2
        Display the addition on screen 
    END   
*/

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
///////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float,float
//  Output :        Float
//  Author :        Saurabh Ashok Nichit
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;

    // Updator
    if(fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if(fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1 + fNo2;   //Business logic
    
    return fSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
// Entry point function for the application
//
///////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter first number : \n");
    scanf("%f",&fValue1);
    
    printf("Enter second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2);

    printf("Addition is : %f\n ", fRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the appplication
//
//  Input : 10.5        Input : 3.2         Output : 13.7
//  Input : -10.5       Input : 3.2         Output : 13.7
//  Input : 10.5        Input : -3.2        Output : 13.7
//  Input : -10.5       Input : -3.2        Output : 13.7
//  Input : 10.5        Input : 0.0         Output : 10.5
//
///////////////////////////////////////////////////////////////////////////////////////////