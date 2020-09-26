/*
Problem statement : 6.2
Accept number from user and check whether it contsins 0 in it or not
 
 Input : 1278   Output : FALSE
 Input : 45678   Output : FALSE
 Input : 1078   Output : TRUE
 Input : 1278450   Output : TRUE
 */

#include<stdio.h>
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckZero(int iNo)     // 1523     152     15      1       0
{
    int iDigit = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;      //  3    2   5   1
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    
    if(iDigit == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = CheckZero(iValue);
    
    if(bRet == TRUE)
    {
        printf("It contsins 0 in it\n");
    }
    else
    {
        printf("It not contsins 0 in it\n");
    }
    return 0;       // returns to OS
}












