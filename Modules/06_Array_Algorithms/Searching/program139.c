// Purpose  : Improve search result logic.
// Concepts : Loop Index
// New      : Loop Index Verification
// Change   : Counter → Index comparison.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

// < O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0 ;
    for ( iCnt = 0; iCnt< iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if (iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0, iCnt = 0,iValue = 0;
    bool bRet = false;
    IPTR iPtr = NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iLength);

    //Step 1: Allocate the Memory
    iPtr=( IPTR )malloc(iLength*sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate memory\n"); 
        return -1;
    }

    printf("Enter the elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to Search:");
    scanf("%d",&iValue);

    //Step 2: Use the Memory
    bRet = LinearSearch(iPtr,iLength,iValue);
    if (bRet == true)
    {
        printf("The %d element is present in the array",iValue);
    }
    else
    {
        printf("The %d element is not present in the array",iValue);
    }

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}