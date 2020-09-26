#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CountEvenDigits
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to count number of even digits
//  Autor : Piyush Manohar Khairnar
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

int CountEvenDigits(int iNo)                //      2547      254   25      2   0
{
    int iCnt = 0;                           //  0   1   2
    int iDigit = 0;                          //     7   4   5     2
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        
        if((iDigit % 2) == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}









