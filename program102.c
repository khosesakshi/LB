//Input : 5
//output : * * * * *

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("*\n");
	}	
	printf("\n");
}

int main()
{
	int iValue = 0;
	
	printf("enter the number:");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}