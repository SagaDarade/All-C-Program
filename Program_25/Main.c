/*
Problem statement : 7.3
Accept number from user and count digits in between 3 to 7.
 
 Input : 1278   Output : 0
 Input : 45228   Output : 2
 Input : 1078   Output : 0
 Input : 22222   Output : 0
 Input : 5379   Output : 1

 */

#include<stdio.h>

/*
 Logical operators :
 1. &&  Logical And         TRUE        TRUE
 2. ||  Logical OR            TRUE        FALSE      /       FALSE       TRUE
 */

int CountRange(int iNo)
{
    int iCnt = 0;
    int iDigit = 0;
    
    if(iNo < 0)     // Updator for negaive number
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit > 3) && (iDigit < 7))    // (iDigit == 4 || iDigit ==5 || iDigit ==6)
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
    
    iRet = CountRange(iValue);
    
    printf("Number of digits in the range : %d\n",iRet);
    
    return 0;   // return to OS
}










