#include "Header.h"

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

// Optimised program with forword traversal

BOOL CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 1;
    
    if(iNo < 0)             // updator for negative values
    {
        iNo = -iNo;
    }
    
    if((iNo == 1) || (iNo == 0))        // Filter
    {
        return FALSE;
    }
    
    //    iRet = SumOfFactor(iNo);
    
    // Dukanat dryclean karana baher na deta
    for(iCnt = 2; iCnt <= iNo/2 ; iCnt++)
    {
            // 4
            if((iNo % iCnt) == 0)
            {
                iSum = iSum + iCnt;             // 16
            }
        
            if(iSum > iNo)
            {
                break;
            }
    }
    
    if(iSum == iNo)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

//////////////////////////////////////////////////////////////////////////
//
//  Time complexity : O(N/2)
//  Where N is the input for our applicartion.
//
//////////////////////////////////////////////////////////////////////////









