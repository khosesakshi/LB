//5
// 5 4 3 2 1

#include<stdio.h>

void DisplayI(int iNo)
{
   
	while(iNo >= 1)
	{
		printf("%d\n",iNo);
		iNo--;
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
