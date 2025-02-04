#include<stdio.h>

int CountSmall(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
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
	 
	iRet = CountSmall(arr);
	
	printf("Number of small character is:%d\n",iRet);
	
	return 0;
}