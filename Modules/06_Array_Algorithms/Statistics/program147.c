// Purpose  : Find the minimum element.
// Concepts : Arrays
// New      : Minimum Algorithm
// Change   : Maximum → Minimum.

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Minimum(int Arr[], int iSize)
{
    int iCnt = 0 ;
    int iMin=0;
    
    for (iMin = Arr[0], iCnt = 0; iCnt< iSize; iCnt++)
    {
        if (iMin > Arr[iCnt] )
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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
    iRet = Minimum(iPtr,iLength);

    printf("The minimum value is : %d",iRet);
    

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}