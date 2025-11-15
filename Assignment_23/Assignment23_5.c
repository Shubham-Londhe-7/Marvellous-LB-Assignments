#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Product(int Arr[], int iSize)
{
    int iCnt = 0; int iProduct = 0;

    for(iCnt = 0, iProduct = 1; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iProduct = iProduct * Arr[iCnt];
        }
    }

    return iProduct;
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

    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Product(iPtr, iLength);
    printf("Product of all elements is : %d",iRet);

    free(iPtr);

    return 0;
}