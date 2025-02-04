#include<stdio.h>

int Count(char *str) 
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == 'm')
		{	
		iCnt++;
	    }
 	   str++;
	}
	return iCnt;
}

int main()
{
	 char arr[30];
	 int iRet = 0;
	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	 
	iRet = Count(arr);
	
	printf("Number of m:%d\n",iRet);
	
	return 0;
}