// Purpose  : Calculate the frequency of an element.
// Concepts : Arrays, Counting
// New      : Frequency Count
// Change   : Fixed value frequency.

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FrequencyCalculate(int Arr[], int iSize)
{
    int iCount = 0, iCnt = 0;
    for ( iCnt = 0; iCnt< iSize; iCnt++)
    {
        if (Arr[iCnt] == 11)
        {
            iCount++;
        }
    }
    return iCount;

}

int main()
{
    int iLength = 0, iCnt = 0, iRet = 0;
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
    iRet = FrequencyCalculate(iPtr,iLength);
    printf("Frequency of 11 is %d\n",iRet);

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}