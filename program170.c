//Input : bscreiou
//output :4


#include<stdio.h>

int CountVowels(char *str)
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == 'A'  || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
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
	 
	iRet = CountVowels(arr);
	
	printf("Count of vowels are:%d\n",iRet);
	
	return 0;
}