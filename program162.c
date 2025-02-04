#include<stdio.h>
#include<string.h>

int main()
{
	 char arr[30];
	 int iRet = 0;
	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	 
	iRet = strlen(arr);
	
	printf("String length is : %d\n",iRet);
	
	return 0;
}