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
  int i = 0;
  int j = 0;
  for(i = 1;i<=4;i++)
  {
  	
  		for(j = 1;j<=3;j++)
	  {
	  
  	printf("*\t");
}

  printf("\n");
  
}
}

int main()
 {
  int iValue = 0;

	printf("enter the number:");
	scanf("%d",&iValue);
	
	Display(iValue);


	return 0;
}