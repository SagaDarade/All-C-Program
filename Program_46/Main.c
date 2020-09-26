/*
    Accept N numbers from user and diplsay addition of digits of each number separately
 */

/*
    Input :
    N : 5
    Array :     152     4545    -56      5       78
    Output :    8           18      11      5       15
 
 */
#include<stdio.h>
#include<stdlib.h>

void SumDigits(int arr[], int iSize)
{
    int iCnt = 0 , iNo = 0, i = 0;
    int iSum = 0, iDigit = 0;
    
    if(arr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
    
    printf("Addition of digits : \n");
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iNo = arr[iCnt];
        iSum = 0;
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        
        printf("%d -> %d \n",arr[iCnt],iSum);
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
    
    SumDigits(ptr,iValue);
    
    free(ptr);
    
    return 0;
    
}







