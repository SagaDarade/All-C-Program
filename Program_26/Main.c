/*
Problem statement : 7.4
Accept number from user and return multilication of digits.
 
 Input : 127   Output : 14
 Input : 4522   Output : 80
 Input : 1075   Output : 35
 Input : -2205  Output : 20

 */

#include<stdio.h>

int MultiplyDigits(int iNo)
{
    int iMult = 1;      // Importnat in case of initialisation
    int iDigit = 0;
    
    if(iNo == 0)        // Filter to handle 0 as a input
    {
        return 0;
    }
    
    if(iNo < 0)     // Updator for negaive number
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        
        iNo = iNo / 10;
    }
    
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    iRet = MultiplyDigits(iValue);
    
    printf("Multiplication of digits is : %d\n",iRet);
    
    return 0;   // return to OS
}










