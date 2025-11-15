#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int * IPTR;
typedef int BOOL;

BOOL Check(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = TRUE;
            break;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0, iValue = 0;
    IPTR iPtr = NULL;
    BOOL bRet = FALSE;

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

    bRet = Check(iPtr, iLength, iValue);
    if(bRet == TRUE)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    free(iPtr);

    return 0;
}