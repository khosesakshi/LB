//INPUT :4
//Output:4 3 2 1 1 2 3 4

#include<stdio.h>

void Display(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = iNo;iCnt >= 1;iCnt--)
	{
		printf("%d\t",iCnt);
	}
	for(iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%d\t",iCnt);
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