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
	 char cValue = '\0';
	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	 
	 printf("Enter the character:\n");
	 scanf("%c",&cValue);
	 
	iRet = Count(arr,cValue);
	
	printf("Number of character value:%d\n",iRet);
	
	return 0;
}