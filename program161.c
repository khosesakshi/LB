#include<stdio.h>

void Display(char str[])
{
	int i = 0;
	
	printf("Entered string is:\n ");
	
     for( i = 0; str[i] != '\0';i++)
	{
		printf("%c\n",str[i]);
		
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