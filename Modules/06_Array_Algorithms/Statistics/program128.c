// Purpose  : Calculate the sum of array elements.
// Concepts : Dynamic Arrays
// New      : Array Summation
// Change   : Display → Summation.

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[] , int iSize)
{
    int iCnt = 0,iSum=0;

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        iSum+=Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iLength = 0,iRet = 0;
    int *ptr = NULL;
    int iCnt=0;

    printf("Enter the Number of element:");
    scanf("%d",&iLength);

    ptr=(int *)malloc(iLength * sizeof(int));

    if (NULL == ptr)
    {
        printf("Unable to allocate memory\n"); 
        return -1;
    }

    printf("Enter the elements:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=Summation(ptr,iLength);
    printf("The Summation is:%d\n",iRet);

    free(ptr);
    return 0;
}