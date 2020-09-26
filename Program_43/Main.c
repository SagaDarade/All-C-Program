/*
 Steps to solve the N numbers applications
 
 Step 1 : (Inside main)
 Accept the value of N from user
 
 Step 2: (Inside main)
 Allocate the memory for that N numbers (Dynamically)
 
 Step 3: (Inside main)
 Accept the values in that allocated memory
 
 Step 4: (Pass to the helper function : Shop)
 Pass the address and the size to the function
 
 Step 5: (Operations inside the shop)
 Function will perform the operation on that memory without any alteration.
 
 Step 6: (Inside main)
 After returning to the main function deallocate that memory of N numbers.
 
 Problem statement :
 Accept N numbers from user and return the smallest (Minimum) number.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 1

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   11
 Output : -3
 
 Input :
 Value of N : 9
 Numbers are :  5   -4   7   8   0    5     0   -8    1
 Output : -8
 
 Input :
 Value of N : 9
 Numbers are :  -5   -4   -7   -8    -5     -8    -1
 Output : -8
 
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

// int Minimum(int *arr, int iSize)
int Minimum(int arr [], int iSize) // arr -> 100    iSize -> 5      // Step 5
{
    int iCnt =0;
    int iMin = 0;
    
    printf("\n_________________________________\n");
    printf("Step 5 : Perform the operation inside helper function : Inside helper function ");
    printf("\n_________________________________\n");
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
    
    iMin = arr[0];      // Lakshat thewaleli value : pahili value
    
    for(iCnt = 1; iCnt < iSize; iCnt++)     // Loop to travel the array
    {
        if(arr[iCnt] < iMin)    // Sapadalela no jar lakshat asalelya value peksha motha asel tar
        {
            iMin = arr[iCnt];   // Lakshat thewaleli value badala with the new value
        }
    }
    
    return iMin;                                  // Return the counter
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;
    
        printf("\n_________________________________\n");
    printf("Step 1 :  Accept the value of N from user : Inside main \n");
        printf("\n_________________________________\n");
    printf("Enter the value of N\n");           // Step 1
    scanf("%d",&iValue);                // 5
    
    if(iValue == 0)
    {
        printf("Error : Inavlid Input\n");
        return -1;
    }
    // ptr = (int*) malloc(4 * 5);      // Allocates 20 bytes of memory
    // (int *) is typecasting which is used to break the 20 bytes memory into 4 bytes chunk
        printf("\n_________________________________\n");
    printf("Step 2 : Alocate the dynamic memory : Inside main \n");
        printf("_________________________________\n");
    ptr = (int *)malloc(sizeof(int) * iValue);      // Step 2
    if(ptr == NULL)     // malloc returns NULL if memory allocation fails
    {
        printf("Error : Unable to allocate memory\n");
        return -1;      // Return erronious termination signal to the OS
    }
    
        printf("\n_________________________________\n");
    printf("Step 3: Accept the values from user : Inside main ");
        printf("\n_________________________________\n");
    printf("Enter the values\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)            // Step 3
    {
        scanf("%d",&ptr[iCnt]);     // Accept the calues from user and store into the array
    }
    
        printf("\n_________________________________\n");
    printf("Step 4: Call to the helper function : Inside main ");
        printf("\n_________________________________\n");
    
    iRet = Minimum(ptr,iValue);       // CountEven(100,5);      // Step 4
    
    printf("Minimum number is : %d\n",iRet);
    
        printf("\n_________________________________\n");
    printf("Step 6 : Deallocate the dynamic memory : Inside main ");
        printf("\n_________________________________\n");
    // Step 6
    free(ptr);                      // Deallocate the dynamic memory which was allocated by malloc
    
    return 0;               // Return Successfull termination signal to OS
}




























