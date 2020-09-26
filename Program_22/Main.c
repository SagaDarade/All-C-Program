/*
Problem statement : 6.5
Accept number from user and count frequency of digits less than 6.
 
 Input : 1278   Output : 2
 Input : 45228   Output : 4
 Input : 1078   Output : 2
 Input : 22222   Output : 5
 */

#include<stdio.h>

int Count(int iNo)     // 1523     152     15      1       0
{
    int iDigit = 0;
    int iCnt = 0;
    
    if(iNo < 0)// Updator iNo = -iNo;
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;      //  3    2   5   1
        if(iDigit < 6)
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
    
    iRet = Count(iValue);
    
    printf("Frequency of digits less than 6 : %d \n",iRet);
    
    return 0;       // returns to OS
}












