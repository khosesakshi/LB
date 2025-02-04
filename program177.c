#include<stdio.h>

void Update(char *str) 
{
	while(*str != '\0')
	{
		if(*str == 'a')
		{
			*str ='d';
		}
		str++;
	}
}

int main()
{
	 char arr[30];
	 	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	
	 Update(arr);
	
     printf("String after updation is : %s\n",arr);
	 
	
	return 0;
}