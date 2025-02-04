#include<stdio.h>

int main()
{
	 char arr[30];
	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	 
	 printf("entered string is :%s\n",arr);
	
	
	return 0;
}