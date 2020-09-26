//Accept two numbers from user as X and Y and return XY

#include<stdio.h>

int Power(int X,int Y)
{
	int iAns=1;
	
	while(Y!=0)
	{
		
		iAns=iAns * X;
		Y--;
		
		
	}
	return iAns;
}

int PowerR(int X,int Y)
{
	static int iAns=1;
	
	if(Y!=0)
	{
		
		iAns=iAns*X;
		Y--;
		PowerR(X,Y);
	}
	return iAns;
}

int main()
{
	int no1=0,no2=0,iRet=0;
	
	printf("Enter First number\n");
	scanf("%d",&no1);
	
	printf("Enter second number\n");
	scanf("%d",&no2);
	
	iRet=PowerR(no1,no2);
	printf("Power of two numbers %d ",iRet);
	
}