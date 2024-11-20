#include<stdio.h>

void Display(iNo)
{
	int iCnt=0;
	iCnt=1;
		while(iCnt<=iNo)
	{
		
		printf(" %d jay ganesh...\n",iCnt);
		iCnt++;
	}
	
}
int main()
{
  int iFrequency=0;
	
	printf("enter the frequency");
	scanf("%d",&iFrequency);
	
	Display(iFrequency);
	
	return 0;
}