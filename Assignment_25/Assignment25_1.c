#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int Difference(int Arr[], int iSize)
{
    int iCnt = 0, iEven = 0, iOdd = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEven = iEven + Arr[iCnt];
        }
        else
        {
            iOdd = iOdd + Arr[iCnt];
        }
    }

    return(iEven - iOdd);
}

int main()
{
    int iCnt = 0, iLength = 0;
    IPTR iPtr = NULL;
    int iRet = 0;

    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    iPtr = (IPTR)malloc(iLength * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&iPtr[iCnt]);
    }

    iRet = Difference(iPtr, iLength);
    printf("Difference between summation of even and odd nummbers is : %d\n",iRet);

    free(iPtr);

    return 0;
}