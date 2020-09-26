/*
 Problem statement :
 Write a program which accept number of rows and coluns from user and display below pattern:
 
Input :   (Row = 4 Columns = 4)
Output :
 
*   #    #   #
$   *    #   #
$   $    *   #
$   $    $    *
 
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    
    if(iRow < 0)            // Updator for negative value
    {
        iRow = -iRow;
    }
    if(iCol < 0)            // Updator for negative value
    {
        iCol = -iCol;
    }
    
    if(iRow != iCol)    // Filter for the non square matrix
    {
        printf("Error : Invalid arguments\n");
        
        return;
    }
    // i        1                       2                       3                    4
    // j        1   2   3   4   5   1   2   3   4   5   1   2   3   4   5   1   2   3   4   5
    for(i = 1; i<= iRow; i++)
    {
        for(j = 1; j<= iCol; j++)
        {
                if(i == j)  // For diagonal elements
                {
                    printf("*\t");
                }
                else if(i > j)        // For lower triangle
                {
                    printf("$\t");
                }
                else
                {
                    printf("#\t");  // for upper triangle
                }
        }
        printf("\n");
    }
    /*
        *   #   #   #
        $   *   #   #
     */
}
int main()
 {
     int iValue1 = 0, iValue2 = 0;
     
     printf("Enter first number\n");
     scanf("%d",&iValue1);
     
     printf("Enter second number\n");
     scanf("%d",&iValue2);
     
     Pattern(iValue1, iValue2);
     
     return 0;
 }









