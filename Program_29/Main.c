/*
 Problem statement :
 Write a program which accept number from user and display below patternwill display b:
 
 Input :    5
 Output :   *   *   *   *   *
 
 Input : 2
 Output : *    *
 
 Input : -6
 Output : * *   *       *   *   *
 
 */

/*
        iNo -> 6

        1   2   3   4   5   6

        *   *   *   *   *   *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
  
    if(iNo < 0)         // Updator
    {
        return;
    }
    
    // iNo = 4
    // iCnt = 0     1   2   3   4   5
//            1               2               3
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");      //        4
    }
}   // *    *       *       *

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}

