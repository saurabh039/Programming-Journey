// Purpose  : Validate memory allocation.
// Concepts : malloc(), NULL Check
// New      : Memory Validation
// Change   : Added allocation check.

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
    // malloc usally return the base address but if the memomry is not allocated(avaliable) then it return null.
    if (ptr == NULL)
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