/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :    6
Output :   1    *   3   *   5   *
 
 Input :      9
 Output :   1   *   3   *   5   *   7   *   9
 
 */

/*
        iNo -> 6

_____________________________________
Loop            1   2   3    4   5   6    7   8   9
_____________________________________
Output         1   *   3    *   5   *    7   *   9
_____________________________________
  
 Concllusion
 
    Even loop counter -> #
    Odd loop conunter -> *
 
 */

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
                if((iCnt % 2) == 0)     // If counter is even
                {
                    printf("*\t");
                }
                else                        // If counter is odd
                {
                    printf("%d\t",iCnt);
                }
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter one number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}

