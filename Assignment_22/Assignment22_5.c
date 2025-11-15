#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Frequency(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iCount = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return (iCount);
}

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;
    int iRet = 0, iValue = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    iPtr = (IPTR)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the element to search : \n");
    scanf("%d",&iValue);

    iRet = Frequency(iPtr, iLength, iValue);
    printf("Frequency of %d is : %d", iValue, iRet);

    free(iPtr);

    return 0;
}