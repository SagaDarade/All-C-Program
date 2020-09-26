#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0
//          Input : B       -> 66
BOOL CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))             //((cValue >= 97) && (cValue <= 122))
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

    bRet = CheckSmall(ch);
    
    if(bRet == TRUE)
    {
        printf("Charcter is small\n");
    }
    else
    {
        printf("Character is not small\n");
    }
    
    return 0;
}
