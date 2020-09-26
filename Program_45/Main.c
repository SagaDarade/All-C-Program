/*
 
 Return the count of perfect numbers from N numbers.
 
 */
#include<stdio.h>
#include<stdlib.h>

int CountPerfectNumbers(int arr[], int iSize)
{
    int iCnt = 0 , iNo = 0, i = 0;
    int iSum = 0, iPerfect = 0;
    
    if(arr == NULL)
    {
        return -1;
    }
    if(iSize <= 0)
    {
        return -2;
    }
    
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
            iPerfect ++;
        }
    }
    
    return iPerfect;
}

int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0, iRet = 0;
    
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
    
    iRet = CountPerfectNumbers(ptr,iValue);
    
    printf("Number of perfect numbers are %d\n", iRet);
    
    free(ptr);
    
    return 0;
    
}







