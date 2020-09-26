



/*
    Accept N numbers from user and one number, and check whether that number is present in that array or not.
 */

/*
Input :
N : 8
Array :         12     45    -56      55       45       85      45      96
Number :      45
Output :        TRUE
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      55
 Output :        TRUE
 
 Input :
 N : 8
 Array :         12     45    -56      55       45       85      45      96
 Number :      58
 Output :        FALSE
 
 */
#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL SearchBI(int Arr[], int iSize,int iNo)
{
    int iCnt = 0;
    int iStart = 0, iEnd = 0;
    
    //                  1                    ;          2           ;          3
    for(iStart = 0, iEnd = iSize-1; iStart <= iEnd ; iStart++, iEnd--)
    {
        if(Arr[iStart] == iNo)                      // 4
        {
            break;
        }
        if(Arr[iEnd] == iNo)                        // 4
        {
            break;
        }
    }
    
    if((Arr[iStart]== iNo) || (Arr[iEnd] == iNo))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int *ptr = NULL;
    int iValue = 0;
    int iCnt = 0, iNo = 0;
    BOOL bRet = FALSE;
    
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
    
    bRet = SearchBI(ptr,iValue,iNo);
    
    if(bRet == TRUE)
    {
        printf("Element found.....\n");
    }
    else
    {
        printf("There is no such element....\n");
    }
    
    free(ptr);
    
    return 0;
    
}
































