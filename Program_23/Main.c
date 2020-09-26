/*
Problem statement : 7.1
Accept number from user and count even digits.
 
 Input : 1278   Output : 2
 Input : 45228   Output : 4
 Input : 1078   Output : 2
 Input : 22222   Output : 5
 Input : 5379   Output : 0
 
 */

#include<stdio.h>

int CountEven(int iNo)     // 1523     152     15      1       0
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo<=0)
    {
      iNo=-iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;      //  3    2   5   1
        
        if((iDigit % 2) == 0)   // Check for even
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
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountEven(iValue);
    
    printf("Frequency of even digits: %d \n",iRet);
    
    return 0;       // returns to OS
}












