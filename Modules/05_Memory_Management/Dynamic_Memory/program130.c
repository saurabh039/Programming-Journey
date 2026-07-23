// Purpose  : Count odd elements in an array.
// Concepts : Arrays
// New      : Odd Element Count
// Change   : Even count → Odd count.

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[] , int iSize)
{
    int iCnt = 0,iCount=0;

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        if(Arr[iCnt] % 2 == 1)
        {
            iCount++;
        }
    }
    return iCount;
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

    iRet=CountOdd(ptr,iLength);
    printf("Number of Odd elements are :%d\n",iRet);

    free(ptr);
    return 0;
}