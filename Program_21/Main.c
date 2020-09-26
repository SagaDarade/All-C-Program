/*
Problem statement : 6.4
Accept number from user and count frequency of 4.
 
 Input : 1278   Output : 0
 Input : 45228   Output : 1
 Input : 1078   Output : 0
 Input : 22222   Output : 0
 */

#include<stdio.h>

int CountFour(int iNo)     // 1523     152     15      1       0
{
    int iDigit = 0;
    int iCnt = 0;
    
    // Updator iNo = -iNo;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;      //  3    2   5   1
        if((iDigit == 4) || (iDigit == -4))
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
    
    iRet = CountFour(iValue);
    
    printf("Frequency of 4 is %d \n",iRet);
    
    return 0;       // returns to OS
}












