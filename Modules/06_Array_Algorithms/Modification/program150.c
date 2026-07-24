// Purpose  : Display array elements in reverse order.
// Concepts : Reverse Traversal
// New      : Reverse Display
// Change   : Forward → Reverse iteration.

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void ReverseDisplay(int Arr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = iSize-1;iCnt >= 0 ;iCnt--)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
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
    ReverseDisplay(iPtr,iLength);

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}