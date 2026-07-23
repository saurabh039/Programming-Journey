// Purpose  : Calculate average of array elements.
// Concepts : Arrays
// New      : Average
// Change   : Count → Average.

#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[] , int iSize)
{
    int iCnt = 0,iSum=0;

    for(iCnt = 0;iCnt < iSize ;iCnt++)
    {
        iSum+=Arr[iCnt];
    }
    return (iSum/iSize);            //Issue   100/3=33.000 is eror
}

int main()
{
    int iLength = 0;
    float fRet = 0.0f;
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

    fRet=Average(ptr,iLength);
    printf("Average of elements is:%f\n",fRet);

    free(ptr);
    return 0;
}