#include<stdio.h>

void DisplayFactor(int iNo)
{
  int iCnt = 0;
  
  printf("Factors of %d are :\n",iNo);
  
  for(iCnt = 1;iCnt < iNo; iCnt++)
  {
  	if(iNo % iCnt == 0)
  	{
  		printf("%d\n",iCnt);
	}
	  	
  }
	
}

int main()
{
	int iValue = 0;
	
	printf("enter number:\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}

/*
--------------------------------------------------------------



      iNo =8
		
		if(iNo % 1 == 0)
		{}
		
		if(iNo % 2 == 0)
		{}
		
		if(iNo % 3 == 0)
		{}
		
		if(iNo % 4 == 0)		
		{}
		
		if(iNo %5 == 0)
		{}
		
		if(iNo % 6 == 0)
		{}
		
		if(iNo % 7 == 0)
		{}
		
*/