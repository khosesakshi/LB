//Input : bscreiou
//output :4


#include<stdio.h>

int CountVowels(char *str) //case sensitive
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if(*str == 'a'  || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
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