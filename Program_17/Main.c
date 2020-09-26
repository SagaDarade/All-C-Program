/*
Problem statement :
Accept number from user and check whether number is pallindrome or not. (Logic without using any helper function - Using one function)
 
 Input : 1278   Output : FALSE
 Input : 121    Output : TRUE
 Input : 272   Output : TRUE
 Input : 202   Output : TRUE
 Input : -56    Output : FALSE
 */

/*
    Algorithm:
 
    START
        Accept number as no
        create one variable as reverse and initialise it to 0
        create one variable as digit and initialilse it to 0
 
        iterate till no is not equal to zero
            perform no % 10 and store the result into digit
            store the result of reverse * 10 + digit into the reverse variable again
            perform / 10 with the no
        continue
 
        if the reverse number and original number is same
            then return TRUE
        otherwise
            return FALSE

 END

 */

typedef int BOOL;

#define TRUE 1
#define FALSE 0

#include<stdio.h>

BOOL CheckPallindromeX(int iNo)     // 151      15      1       0
{
    int iDigit = 0;                             //  0   1   5      1
    inti Rev = 0;                               //  0   1   15      151
    int iBackup = iNo;                      //  151
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10)+iDigit;
        iNo = iNo / 10;
    }
        
    if(iBackup == iRev)         // Important
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
    
    bRet = CheckPallindromeX(iValue);
    
    if(bRet == TRUE)
    {
        printf("Number is pallindrome\n");
    }
    else
    {
        printf("Number is not pallindrome\n");
    }
    
    return 0;       // returns to OS
}












