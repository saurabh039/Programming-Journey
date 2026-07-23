// Purpose  : Demonstrate assignment bug.
// Concepts : Assignment vs Comparison
// New      : Common Programming Mistake
// Change   : Introduced logical error.

#include<stdio.h>
#include<stdlib.h>
 
void Display(int Arr[] , int iSize)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt=0;

    printf("Enter the Number of element:");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength * sizeof(int));

    if (ptr = NULL)                                        //Major issue
    {
        printf("UNable to allocate memory\n");
        return -1;
    }

    printf("Enter the elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

    free(ptr);
    return 0;
}