/*
Problem statement :
Accept number from user and return the number of even digits from that numvber.

 Input : 1278   Output : 2
 Input : 127    Output : 1
 Input : 27   Output : 1
 Input : 2   Output : 1
 Input : -56    Output : 1
 Input : 0      Output : 1
 Input : 1005   Output : 2
 */

/*
    Algorithm:
 
    START
        Accept one number as no
        Create one counter as cnt and initialise to 0
 
        Iterate till the no is not equal to 0
            Perform the mod operation to seperate out the digit
            if the digit is even then
                increament the counter by 1
            divide the no by 10 and store the result in no itself
        Continue
 
        return the value of counter
    END
 
 */

#include "Header.h"

// Entry point function
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountEvenDigits(iValue);
    
    printf("Number of even digits are : %d\n",iRet);
    
    return 0;       // Sucess to OS
}














/*
Input : 1547

1547 / 10   ->      154         1
154 / 10    ->       15           2
15 / 10      ->        1            3
1 / 10          ->      0            4
*/
