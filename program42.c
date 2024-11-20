#include<stdio.h>

void display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);
	}
}
int main()
{
	int iValue = 0;
	
	printf("enter the number");
	scanf("%d",&iValue);
	
	display(iValue);
	
	return 0;
}