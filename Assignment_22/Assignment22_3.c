#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int * IPTR;

bool Check(int Arr[], int iSize)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0)
        {
            bFlag = true;
        }
    }

    return bFlag;
}

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;
    bool bRet = false;

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

    bRet = Check(iPtr, iLength);
    if(bRet == true)
    {
        printf("11 is present\n");
    }
    else
    {
        printf("11 is not present\n");
    }

    free(iPtr);

    return 0;
}