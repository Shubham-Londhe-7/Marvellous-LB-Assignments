#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iMin = 0, iMax = 0;

    for(iCnt = 0, iMin = Arr[iCnt], iMax = Arr[iCnt]; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        else if (Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
        
    }

    return (iMax - iMin);
}

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;
    int iRet = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    iPtr = (IPTR)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory.\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter the element %d :\n",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Difference(iPtr, iLength);
    printf("Difference between samllest and largest elements is : %d",iRet);

    free(iPtr);

    return 0;
}