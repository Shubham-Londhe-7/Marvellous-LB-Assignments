#include<stdio.h>
#include<stdlib.h>

typedef int * IPTR;

void DigitsSum(int Arr[], int iSize)
{
    int iCnt = 0, iDigit = 0, iSum = 0, iValue = 0;;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iValue = Arr[iCnt];
        iSum = 0;
        
        if(iValue < 0)
        {
            iValue = -iValue;
        }   

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            iSum = iSum + iDigit;
            iValue = iValue / 10;
        }

        printf("%d\n",iSum);
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

    DigitsSum(iPtr, iLength);

    free(iPtr);

    return 0;
}