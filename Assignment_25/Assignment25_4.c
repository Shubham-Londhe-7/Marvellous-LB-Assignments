#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void Display(int Arr[], int iSize)
{
    int iCnt = 0;

    printf("Numbers which are divisible by 3 and 5 : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 3) == 0))
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iCnt = 0, iLength = 0;
    IPTR iPtr = NULL;
    
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

    Display(iPtr, iLength);

    free(iPtr);

    return 0;
}