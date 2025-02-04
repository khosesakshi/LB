#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Name[30];
	
	printf("please enter the file name that u want to create:\n");
	scanf("%[^'\n']s",Name);
	
	fd = creat(Name,0777);
	
	if(fd == -1)
	{
		printf("unable to create file\n");
	}
	else
	{
		printf("file successfully created with FD %d\n",fd);
	}
	
	return 0;
}