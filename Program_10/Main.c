/*
Problem statement :
 Accept number from user and check whether that number is perfect or not.
 
Input : 12         Output :   Not a perfect number
Input : 6           Output :   Perfect number   (1+2+3)
Input : 28         Output :   Perfect number    (1+2+4+7+14)
 */

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
            Create one variable to store the addtion as ans
 
            Iterate till the counter is less than the number/2 ie no/2
                check whether the cnt divides the no completetly
                    if yes
                        then add the value of cnt into the ans
                incremnet the value of counter by 1
 
            continue to the iteration
 
            if the ans is same as the no
                then no is the perfect number
            otherwise
                no is not a perfect number
    END
*/

#include "Header.h"

int main()          // Entry point function
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    bRet = CheckPerfect(iValue);      // Function call    Dukanat ja
    
    if(bRet == TRUE)
    {
        printf("It is Perfect number\n");
    }
    else
    {
        printf("It is not a perfect number\n");
    }
    
    return 0;
}















