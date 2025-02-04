#include<stdio.h>

int Count(char *str,char ch) 
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
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
	 
	iRet = Count(arr,'m');
	
	printf("Number of m:%d\n",iRet);
	
	return 0;
}