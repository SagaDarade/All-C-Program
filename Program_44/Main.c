/*
 Display perfect numbers from N numbers.
 */


#include<stdio.h>
#include<stdlib.h>

void PerfectNumbers(int arr[], int iSize)
{
    int iCnt = 0 , iNo = 0, i = 0;
    int iSum = 0;
    
    if(arr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
    
    printf("Perfect numbers are : \n ");
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iNo = arr[iCnt];
        iSum = 0;
        
        for(i = 1; i<= iNo /2; i++)
        {
            if((iNo % i) == 0)
            {
                iSum = iSum + i;
            }
        }
        
        if(iSum == iNo)
        {
            printf("%d\n",iNo);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0;
    
    printf("Enter the number of elemnts\n");
    scanf("%d",&iValue);
    
    if(iValue == 0)
    {
        return -1;
    }
    
    ptr = (int *)malloc(sizeof(int) * iValue);
    if(ptr == NULL)
    {
        return -1;
    }

    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    PerfectNumbers(ptr,iValue);
    
    free(ptr);
    
    return 0;
    
}
























