/*
Problem statement :
Accept number from user and return the reverse number.
 
 Input : 1278   Output : 8721
 Input : 127    Output : 721
 Input : 27   Output : 72
 Input : 2   Output : 2
 Input : -56    Output : 65
 Input : 0      Output : 0
 Input : 1005   Output : 5001
 Input : 1200   Output : 21
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
 
        return the value from reverse variable
    END
 
 */

#include<stdio.h>

//////////////////////////////////////////////////////////////
//
//  Function name : ReverseNumber
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to reverse the number
//  Autor : Piyush Manohar Khairnar
//  Date :  4th August 2020
//
//////////////////////////////////////////////////////////////

int ReverseNumber(int iNo)      // 1507     150     15      1       0
{
    int iDigit = 0;     //      0   7   0       5       1
    int iRev = 0;       //      0   7   70      705     7051
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
    }
    
    return iRev;
}

// Entry point function
int main()
{
    int iValue = 0;          // 1507
    int iRet = 0;              // 7051
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = ReverseNumber(iValue);   // ReverseNumber(1507)
    
    printf("Reverse Number is : %d\n",iRet);
    
    return 0;       // Sucess to OS
}
