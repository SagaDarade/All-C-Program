#include "Header.h"

//////////////////////////////////////////////////////////////
//
//  Function name : SumOfFactor
//  Input : Interger
//  Output :    Integer
//  Description :   It is used to perform the addition the factors
//  Autor : Piyush Manohar Khairnar
//  Date :  29th July 2020
//
//////////////////////////////////////////////////////////////

int SumOfFactor(int iNo)
{
    int iSum = 1;       // Used to store the addition of factors
    int iCnt = 0;         // Used for loop counter
    
    // Filter
    if(iNo == 0)        // If the input number is 0
    {
        return 0;
    }
    
    // Input updator
    if(iNo < 0)             // If the input is negative
    {
        iNo = -iNo;         // convert that negative number into positive number
    }
    
    //          1               2               3
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            // 4
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
    }
    
    return iSum;
}

//////////////////////////////////////////////////////////////////////////
//
//  Time complexity : O(N/2)
//  Where N is the input for our applicartion.
//
//////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//
//  Function name : CheckPerfect
//  Input : Interger
//  Output :    Boolean
//  Description :   It is used to whether number is perfect or not
//  Autor : Piyush Manohar Khairnar
//  Date :  30th July 2020
//
//////////////////////////////////////////////////////////////

// Istri wala to dryclealn

BOOL CheckPerfect(int iNo)
{
    int iRet = 0;
    
    if(iNo < 0)             // updator for negative values
    {
        iNo = -iNo;
    }
    
    if((iNo == 1) || (iNo == 0))        // Filter
    {
        return FALSE;
    }
    
    iRet = SumOfFactor(iNo);
    
    if(iRet == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}










