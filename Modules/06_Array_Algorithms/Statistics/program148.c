// Purpose  : Update every array element.
// Concepts : Arrays
// New      : In-place Modification
// Change   : Read operation → Update operation.

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void Update(int Arr[],int iSize)
{   
    int iCnt = 0;
    for(int iCnt = 0; iCnt < iSize; iCnt++)
    {
        Arr[iCnt]++;
    }

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
    Update(iPtr,iLength);

    printf("Updated data from array is : ");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",iPtr[iCnt]);
    }
    

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}