#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

int FirstOccurance(int Arr[], int iSize, int iNo)
{
    int iCnt = 0, iIndex = 0;
    iIndex = -1;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;
            break;
        }
    }

    return iIndex;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
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

    printf("Enter the element to get index : \n");
    scanf("%d",&iValue);

    iRet = FirstOccurance(iPtr, iLength, iValue);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("First occurance of %d is at %dst index\n", iValue, iRet);
    }
    

    free(iPtr);

    return 0;
}