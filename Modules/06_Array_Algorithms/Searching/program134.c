// Purpose  : Simplify pointer declarations.
// Concepts : typedef
// New      : User Defined Data Type
// Change   : int* → IPTR.

#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;
//after typedef we write the original word then with the word with which we have to replace it.

int main()
{
    int iLength=0,iCnt=0;
    IPTR iPtr=NULL;

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
    //Call to the function which constains business logic
    // Fun(iPtr,Length);

    //Step3: Free the Memory
    free(iPtr);
    
    return 0;
}