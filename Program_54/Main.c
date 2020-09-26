/*
    Problem statement : Accept tring from user and return the length of that string.
    
 Input : "Hello"
 Output : 5

 Input : "Hello World"
 Output : 11
 
 Input : "A"
 Output : 1
 
 Input : "India_ _is_ _my country"
 Output : 21
 */
#include<stdio.h>
int StrlenX(char str[])
{
    int iCnt = 0,i = 0;
    while(str[i] != '\0')
    {
        iCnt++;
        i++;
    }
    return iCnt;
}

int main()
{
    char arr[30];       // Static memory allocation of array
    int iRet = 0;
    
    printf("Enter the string\n");
    //scanf("%s",arr);             // Accept the input till user eneters space
    scanf("%[^'\n']_s",arr);     // Accept the input till user enerets enter key
    // Input : "Jay Ganesh"
    
    iRet = StrlenX(arr);           // StrlenX(100);
    
    printf("String length is %d\n",iRet);       // 10
    return 0;
}
