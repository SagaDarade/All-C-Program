#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//          Input : B       -> 66
BOOL CheckCapital(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))             //((cValue >= 65) && (cValue <= 90))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char ch = '\0';
    BOOL bRet = FALSE;
    printf("Enter character\n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);
    
    if(bRet == TRUE)
    {
        printf("Charcter is capital\n");
    }
    else
    {
        printf("Character is not capital\n");
    }
    
    return 0;
}
