// 5
// 5 4 3 2 1

#include<stdio.h>

void DisplayR(int iNo)
{

	if(iNo >= 1)
	{
		printf("%d\n",iNo);
		iNo--;
		DisplayR(iNo);
	}
	printf("End of DisplayR\n");
	
}

int main()
{
	int iValue = 0;
	
	printf("enter the frequency :\n");
	scanf("%d",&iValue);
	
	DisplayR(iValue);
	
	printf("end of main:\n");
	
	return 0;
}
