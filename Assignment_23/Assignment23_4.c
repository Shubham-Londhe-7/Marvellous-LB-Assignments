#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void Range(int Arr[], int iSize, int iStart, int iEnd)
{
    int iCnt = 0;

    printf("Elements in Range %d and %d are :\n",iStart,iEnd);
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength = 0, iCnt = 0;
    IPTR iPtr = NULL;
    int iStart = 0, iEnd = 0;

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

    printf("Enter start of range : \n");
    scanf("%d",&iStart);

    printf("Enter end of range : \n");
    scanf("%d",&iEnd);
    
    Range(iPtr, iLength, iStart, iEnd);

    free(iPtr);

    return 0;
}