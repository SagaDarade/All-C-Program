/*
 Problem statement :
 Write a program which accept number from user and display below pattern:
 
 Input :    6
Output :   2    4   6   8   10  12
 
 Input :      9
 Output :   2   4   6   8   10  12  14  16  18
 
 */

/*
        iNo -> 9

_____________________________________
Loop            1   2   3    4    5    6    7   8     9
_____________________________________
Output :       2   4   6    8   10  12  14  16  18
_____________________________________
  
 Concllusion

 Display the value -> iCnt * 2

 */

#include<stdio.h>

void Pattern(int iNo)       // 5
{
    int iCnt = 0;               // 0    1   2   3   4   5   6
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
//              1           2                 3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt*2);      // 4
    }
    // Output ->     2      4       6       8       10
}

int main()
{
    int iValue = 0;
    
    printf("Enter one number\n");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}













