#include<stdio.h>

void struprX(char *str) 
{
	while(*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		str++;
	}
}

int main()
{
	 char arr[30];
	 	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	
	 struprX(arr);
	
     printf("String after updation is : %s\n",arr);
	 
	
	return 0;
}