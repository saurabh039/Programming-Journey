// Purpose  : Allocate memory dynamically.
// Concepts : malloc(), Dynamic Memory
// New      : Dynamic Arrays
// Change   : Static array → Dynamic allocation.

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
    //malloac will return the no of bytes which we have store in pointer ptr.

    printf("Enter the elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iLength);

    free(ptr);
    return 0;
}