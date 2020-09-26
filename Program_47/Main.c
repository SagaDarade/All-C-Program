/*
    Accept N numbers from user and one number, return the frequency of that number.
 */

/*
Input :
N : 8
Array :         12     45    -56      55       45       85      45      96
Number :      45
Output :        3
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      55
 Output :        1
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      58
 Output :        0
 
 */
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize,int iNo)
{
    int iCnt = 0, iFrequency = 0;
    
    if(Arr == NULL)
    {
        return -1;
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    
    return iFrequency;
}

int main()
{
    int *ptr = NULL;
    int iValue = 0, iRet = 0;
    int iCnt = 0, iNo = 0;
    
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
    
    printf("Enter the number that we want to search\n");
    scanf("%d",&iNo);
    
    iRet = Frequency(ptr,iValue,iNo);
    
    printf("Frequency of the number is %d\n",iRet);
    free(ptr);
    
    return 0;
    
}







