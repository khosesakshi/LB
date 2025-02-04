#include<stdio.h>

int strlenX(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		str++;
		iCnt++;
	}
	return iCnt;
}

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