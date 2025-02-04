//5
//1 2 3 4 5

#include<stdio.h>

void DisplayI(int iNo)
{
   int iCnt = 0;
	 
	 iCnt = 1;
	while(iCnt <= iNo)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}
	
}

int main()
{
	int iValue = 0;
	
	printf("enter the frequency :\n");
	scanf("%d",&iValue);
	
	DisplayI(iValue);
	
	printf("end of main:\n");
	
	return 0;
}
