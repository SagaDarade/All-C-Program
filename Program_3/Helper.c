
#include "Header.h"

////////////////////////////////////////////////////////////////////
//
//  Function Name : DisplayNumber
//  Input : None
//  Output : None
//  Description : It is used to display 1 to 5
//  Autor : Piyush Manohar Khairnar
//  Date : 22 July 2020
//
////////////////////////////////////////////////////////////////////

void DisplayNumber()
{
    // Sequance
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
}

void DisplayNumberX()
{
    // Iteration
    int iCnt = 0;
    
    //      1                 2             3
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iCnt);           // 4
    }
}

//Flow of above for loop  1   2   4  3  2  4   3  2  4    3   2   4   3   2 -> FALSE
