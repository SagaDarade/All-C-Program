/*
Problem statement : 7.2
Accept number from user and count odd digits.
 
 Input : 1278   Output : 2
 Input : 45228   Output : 1
 Input : 1078   Output : 2
 Input : 22222   Output : 0
 Input : 5379   Output : 4
 
 */

#include<stdio.h>

int CountOdd(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    
    while(iNo != 0) // 125      125     125         125         125         125         125 .......
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)  // if((iDigit % 2) == 1) -> it affects in case of negative number
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = CountOdd(iValue);
    
    printf("Number of odd digits : %d\n",iRet);
    
    return 0;   // return to OS
}










