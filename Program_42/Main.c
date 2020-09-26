/*
 Problem statement :
 Accept N numbers from user and return the largest (Maximum) number.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 7

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   11
 Output : 11
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : 8
 
 Input :
 Value of N : 9
 Numbers are :  -5   -4   -7   -8    -5     -8    -1
 Output : -1
 
 Input :
 Value of N : 9
 Numbers are :  11  11  11  11    11      11  11  11  11
 Output : 11

 Input :
 Value of N : 5
 Numbers are :  0   0   0   0   0
 Output : 0
 */

#include<stdio.h>   // printf & scanf
#include<stdlib.h>  // for malloc

// int Maximum(int *arr, int iSize)
int Maximum(int arr [], int iSize) // arr -> 100    iSize -> 5
{
    int iCnt =0;
    int iMax = 0;
    
    if(arr == NULL)         // If the pointer is NULL means there is no memory
    {
        printf("Invalid address");
        return 0;       // return -1
    }
    if(iSize <= 0)          // If the size of array is invalid
    {
        printf("Invalid size\n");
        return 0;         // return -2
    }
    
    iMax = arr[0];      // Lakshat thewaleli value : pahili value
    
    for(iCnt = 1; iCnt < iSize; iCnt++)     // Loop to travel the array
    {
        if(arr[iCnt] > iMax)    // Sapadalela no jar lakshat asalelya value peksha motha asel tar
        {
            iMax = arr[iCnt];   // Lakshat thewaleli value badala with the new value
        }
    }
    
    return iMax;                                  // Return the counter
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;
    
    printf("Enter the value of N\n");
    scanf("%d",&iValue);                // 5
    
    if(iValue == 0)
    {
        printf("Error : Inavlid Input\n");
        return -1;
    }
    // ptr = (int*) malloc(4 * 5);      // Allocates 20 bytes of memory
    // (int *) is typecasting which is used to break the 20 bytes memory into 4 bytes chunk
    ptr = (int *)malloc(sizeof(int) * iValue);      // Return value of malloc is 100
    if(ptr == NULL)     // malloc returns NULL if memory allocation fails
    {
        printf("Error : Unable to allocate memory\n");
        return -1;      // Return erronious termination signal to the OS
    }
    
    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);     // Accept the calues from user and store into the array
    }
    
    iRet = Maximum(ptr,iValue);       // CountEven(100,5);
    
    printf("Maximum number is : %d\n",iRet);
    
    free(ptr);                      // Deallocate the dynamic memory which was allocated by malloc
    
    return 0;               // Return Successfull termination signal to OS
}
