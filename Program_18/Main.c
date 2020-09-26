/*
Problem statement : 6.1
Accept number from user and display the digits in reverse order
 
 Input : 1278   Output :  8
                                    7
                                    2
                                    1
 */


#include<stdio.h>


void ReverseDisplay(int iNo)
{
    int iDigit = 0;
    
    if(iNo <= 0)    // Updator which is used to convert negative to positive
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
   ReverseDisplay(iValue);
    
    return 0;       // returns to OS
}












