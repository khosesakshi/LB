#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	
	char Name[30];

	printf("please enter the file name that u want to Delete:\n");
	scanf("%[^'\n']s",Name);
      	
    unlink(Name);
	
	return 0;
}