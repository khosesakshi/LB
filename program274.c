//5
//1 2 3 4 5

#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt = 1;
	 
	if(iCnt <= iNo)
	{
		printf("%d\n",iCnt);
		iCnt++;
		DisplayR(iNo);
	}
	
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
