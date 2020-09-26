/*
    Problem statement : Accept number from user and check whether the
    number is even or odd.
*/

/*
    Step 1 : Undesrtand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
 */

/*
    START
            Accept number as no
            Divide the no by 2 and store the remainder into result
            If the result is zero
                Then return Even
            Otherwise
                Return odd
    END
*/

#include "Header.h"     // Header file inclusion

// Entry point function from where execution starts
int main()
{
    int iValue = 0;                             // Local variable
    BOOLEAN iAnswer = FALSE;         // Local variable
    
    printf("Enter number\n");       // Display on screen
    scanf("%d",&iValue);              // Accept the input from keyboard
    
    iAnswer = ChkEvenOdd(iValue);   // Function call
    // iAnswer = ChkEvenOdd(22);
                           
    if(iAnswer == TRUE)                     // If number is even
    {
        printf("Number is even\n");
    }
    else                                              // If number is odd
    {
        printf("Number is odd\n");
    }
    
    return 0;                               // It indicates successfull termination.
}

/*
 
 Return value of main
 0      Success
 1      Failure
 -1     Erronious exit
 
 */




















