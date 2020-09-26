/*
 Problem statement :
 Write a program which accept number from user and display below patternwill display b:
 
 Input :    4
Output :   -4   -3  -2  -1  0   1   2   3   4
 
 Input :      2
 Output :   -2  -1  0   1   2
 
 */

/*
        iNo -> 4

        -4  -3  -2  -1  0
         1  2   3   4
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }
    
    for(iCnt = -iNo; iCnt <= 0; iCnt++ )
    {
        printf("%d",iCnt);
    }
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d ",iCnt);
    }
}

// Time Complexity O(2N)

void PatternX(int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)         // Updator
    {
        iNo = -iNo;
    }

    // -3-2-101
    for(iCnt = -iNo; iCnt <= iNo; iCnt++ )
    {
        printf("%d",iCnt);
    }
}

// Time complexity O(2N)

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    PatternX(iValue);
    
    return 0;
}

