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

// Outpout : 1  2   3   4
/*
 
 Session Discussion

Input   : 8     store into iNo
 
// Sequance approach
if(iNo % 1 == 0)        -> printf(1)
if(iNo % 2 == 0)        -> printf(2)
if(iNo % 3 == 0)        ->
if(iNo % 4 == 0)        -> printf(4)
if(iNo % 5 == 0)        ->
if(iNo % 6 == 0)        ->
if(iNo % 7 == 0)        ->
 
1       start kuthun karayecha?                         1
2       Kuthparynta loop iterate karayecha?        7
3       kiti kiti ne loop pudhe nyecha?                 1
4       loop madhe kay karayecha?                   Factor ahe ka nai te baghayecha

 int iCnt = 0;
            1              2            3
 for( iCnt = 1 ; iCnt < iNo ; iCnt++ )
 {
    if(iNo % iCnt == 0)        // 4
    {
            printf("%d\n",iCnt);
    }
 }
 
 

*/














