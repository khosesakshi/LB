#include<stdio.h>

int main()
{
	int iNo1=0;
	int iNo2=0;
	int iAns=0;
	
	printf("enter the first number:\n");
	scanf("%d",&iNo1);
	
	printf("enter the second number:\n");
	scanf("%d",&iNo2);
	
	iAns=iNo1+iNo2;
	
	printf("addition is :%d",iAns);
	
	return 0;
}


/*

format specifiers

%d->integer		==11
		
%f->float		==11.89	

%c->character	=='S'

*/