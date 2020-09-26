/*
 Problem statement :
 Accept N numbers from user and return the frequency of even numbers.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 1

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   1
 Output : 0
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : 5
 
 */

#include<stdio.h>   // printf & scanf
#include<stdlib.h>  // for malloc

#define ERRMEMORY -1
#define ERRSIZE -2

// int CountEven(int *arr, int iSize)
int CountEven(int arr [], int iSize) // arr -> 100    iSize -> 5
{
    int iCnt =0;
    int iEven = 0;
    
    if(arr == NULL)         // If the pointer is NULL means there is no memory
    {
        return ERRMEMORY;       // return -1
    }
    if(iSize <= 0)          // If the size of array is invalid
    {
        return ERRSIZE;         // return -2
    }
    
    for(iCnt = 0; iCnt < iSize; iCnt++)     // Loop to travel the array
    {
            if((arr[iCnt] % 2) == 0)        // Check whether number is even or not
            {
                iEven++;                            // Increment the counter
            }
    }
    
    return iEven;                                  // Return the counter
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
    
    iRet = CountEven(ptr,iValue);       // CountEven(100,5);
    if(iRet == ERRSIZE)                    // Return due to invalid size
    {
        printf("Error : Invalid size\n");
    }
    else if (iRet == ERRMEMORY)     // Return due to invalid memory
    {
        printf("Error : Invalid memory address\n");
    }
    else                                           // Return due to success
    {
        printf("Number of even numbers are : %d\n",iRet);
    }
    
    free(ptr);                      // Deallocate the dynamic memory which was allocated by malloc
    
    return 0;               // Return Successfull termination signal to OS
}
