// Purpose  : Calculate frequency of any element.
// Concepts : Arrays, Parameters
// New      : Generic Frequency Algorithm
// Change   : Fixed value → User-defined value.

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize, int iNo)
{
    int iCount = 0, iCnt = 0 ;
    for ( iCnt = 0; iCnt< iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0 ,iValue = 0;
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

    printf("Enter the number to calculate frequency:");
    scanf("%d",&iValue);

    //Step 2: Use the Memory
    iRet = FrequencyCalculate(iPtr,iLength,iValue);
    printf("Frequency of %d is %d\n",iValue,iRet);

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}