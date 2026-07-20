/*
File     : program16.c

Purpose  : Check whether a number is Even or Odd.
Concepts : bool, Functions, if-else
New      : Documentation
Change   : Removed temporary variable (bRet).
*/


/////////////////////////////////////////////////////////////
//
// Required Header files
//
/////////////////////////////////////////////////////////////

#include<stdio.h>               // For Input Output
#include<stdbool.h>             // For bool datatype

/////////////////////////////////////////////////////////////
//
//  Function Name :     CheckEvenOdd
//  Description :       It is used to check even or odd
//  Input :             Integer
//  Output :            Boolean
//  Author :            Saurabh Ashok Nichit
//  Date :              20/10/2025
//
/////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else
    {   return false;   }
}

/////////////////////////////////////////////////////////////
//
//  Entry point function of the application
//  
/////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {   printf("%d is Even number\n",iValue);   }
    else
    {   printf("%d is Odd number\n",iValue);    }

    return 0;
}