#include<stdio.h>
#include<stdbool.h>

bool Count(char *str,char ch) 
{
	int iCnt = 0;
	bool bFlag = false;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{	
	    bFlag = true;
		  break;
	    }
 	   str++;
	}
     return bFlag;
}

int main()
{
	 char arr[30];
	 bool bRet = false;
	 char cValue = '\0';
	 	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	 
	 printf("Enter the character:\n");
	 scanf(" %c",&cValue);
	 
	bRet = Count(arr,cValue);
	
     if(bRet == true)
     {
     	printf("character is present:");
	 }
	 else
	 {
	 	printf("There is no such character \n");
	 }
	
	return 0;
}