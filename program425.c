#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Name[30];
	int iRet = 0;
	char Arr[50] = {'\0'};
	
	printf("please enter the file name that u want to open:\n");
	scanf("%[^'\n']s",Name);
	
	fd = open(Name,O_RDWR);
	
	if(fd == -1)
	{
		printf("unable to open file\n");
	}
	else
	{
		printf("file successfully opened with FD %d\n",fd);
        
		 iRet = read(fd,Arr,5);
		 
		 printf("%d bytes gets sucessfully read from the file\n",iRet);
		 
		 printf("data from the file is :%s\n",Arr);
		 
		 close(fd);	
	}
	
	return 0;
}