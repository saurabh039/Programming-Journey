// Purpose  : Create a template for dynamic array programs.
// Concepts : Dynamic Memory Allocation
// New      : Generic Array Template
// Change   : Introduced reusable program structure.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength=0,iCnt=0;
    int *iPtr=NULL;

    printf("Enter the number of elements:");
    scanf("%d",&iLength);

    //Step 1: Allocate the Memory
    iPtr=(int *)malloc(iLength*sizeof(int));

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
    //Call to the function which constains business logic
    // Fun(iPtr,Length);

    //Step3: Free the Memory
    free(iPtr);

    return 0;
}