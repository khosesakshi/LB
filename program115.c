//Row:4
//Col:3

/*
 	* * * 
 	* * *
 	* * *
 	* * *
*/

#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  for(iCnt = 1;iCnt<=3;iCnt++)
  {
  	printf("*\t");
  }
  printf("\n");
  
  for(iCnt = 1;iCnt<=3;iCnt++)
  {
  	printf("*\t");
  }
  printf("\n");
  
  for(iCnt = 1;iCnt<=3;iCnt++)
  {
  	printf("*\t");
  }
  printf("\n");
  
  for(iCnt = 1;iCnt<=3;iCnt++)
  {
  	printf("*\t");
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