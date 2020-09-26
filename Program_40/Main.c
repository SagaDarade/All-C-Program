/*
 Problem statement :
 Accept N numbers from user and perform the addition of that N numbers.
 
 Input :
 Value of N : 5
 Numbers are :  5   3   7   1   2
 Output : 18

 Input :
 Value of N : 4
 Numbers are :  5   -3   7   1
 Output : 10
 
 Input :
 Value of N : 9
 Numbers are :  5   -3   7   1   0    5     0   -8    1
 Output : 8
 
 */

/*
    Algorithm
 
    START
        Accept the value of N
        Accept all N numbers
        Pass that value of N and N numbers to the function
 
        Function will perform the addition
        Accept the addition from the function
 
        Display the addition
    END
 */

#include<stdio.h>
#include<stdlib.h>

int SumNNumbers(int arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }
    
    return iSum;
}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
    
    int *ptr = NULL;
    
    printf("Enter the value of N : ");
    scanf("%d",&iValue);
    
    ptr = (int *)malloc(4 * iValue);
    
    printf("Enter the values of array\n");
    //      1               2               3
    for(iCnt = 0; iCnt<iValue; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Your entered elements are\n");
    for(iCnt = 0; iCnt < iValue; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    
    iRet = SumNNumbers(ptr,iValue); // SumNNumbers(100,5);
    
    printf("\nAddition of all numbers is :; %d\n",iRet);
    
    return 0;
}
























