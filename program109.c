//Input:4
//Output: 0 -1 -2 -3 -4

#include<stdio.h>

void Display(int iNo)
 {
	int iCnt = 0;

	for(iCnt = 0; iCnt >= -iNo ; iCnt--) 
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