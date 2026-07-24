// Purpose  : Find the maximum element in an array.
// Concepts : Arrays, Comparison
// New      : Maximum Element Search
// Change   : Demonstrates limitation with negative values.

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Maximum(int Arr[], int iSize)
{
    int iCnt = 0 ;
    int iMax=0;                           //Unable to handle negative inputs

    for ( iCnt = 0; iCnt< iSize; iCnt++)
    {
        if (iMax < Arr[iCnt] )
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength = 0, iCnt = 0;
    int iRet = 0;
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

    //Step 2: Use the Memory
    iRet = Maximum(iPtr,iLength);

    printf("The maximum value is : %d",iRet);
    

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}