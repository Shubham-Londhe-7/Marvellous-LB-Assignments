#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void Digits(int Arr[], int iSize)
{
    int iCnt = 0;
    int iValue = 0;

    printf("Three digit numbers are:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iValue = Arr[iCnt];
        if(iValue < 0)
        {
            iValue = -iValue;
        }

        if(iValue >= 100 && iValue <= 999)
        {
            printf("%d\n", Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;
    
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

    Digits(iPtr, iLength);

    free(iPtr);

    return 0;
}