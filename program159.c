#include<stdio.h>

void Display(char *str)
{
	
	printf("Entered string is:\n ");
	
	while(*str != '\0')
	{
		printf("%c\n",*str);
		str++;
	}
	
}

int main()
{
	 char arr[30];
	 
	 printf("enter a string:\n");
	 scanf("%[^'\n']s",arr);
	 
	Display(arr);
	
	
	return 0;
}