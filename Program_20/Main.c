/*
Problem statement : 6.3
Accept number from user and count frequency of 2.
 
 Input : 1278   Output : 1
 Input : 45228   Output : 2
 Input : 1078   Output : 0
 Input : 22222   Output : 5
 */

#include<stdio.h>

int CountTwo(int iNo)     // 1523     152     15      1       0
{
    int iDigit = 0;
    int iCnt = 0;
    
    // Updator iNo = -iNo;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;      //  3    2   5   1
        if((iDigit == 2) || (iDigit == -2))
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
    
    iRet = CountTwo(iValue);
    
    printf("Frequency of 2 is %d \n",iRet);
    
    return 0;       // returns to OS
}












