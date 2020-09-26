#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : CountDigits
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to count number of digits
//  Autor : Piyush Manohar Khairnar
//  Date :  3rd August 2020
//
//////////////////////////////////////////////////////////////

int CountDigits(int iNo)                //      0
{
    int iCnt = 0;                           //  4
    
    while(iNo != 0)
    {
        iNo = iNo / 10;
        iCnt++;
    }
    
    return iCnt;
}









