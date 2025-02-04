#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	
	char Name[30];
	char Arr[20] = {'\0'};
     int fd = 0;
     
	printf("please enter the file name that u want to open:\n");
	scanf("%[^'\n']s",Name);
      	
     fd = open(Name,O_RDONLY);
     
     read(fd,Arr,8);
	  	
     printf("Data from the file is : %s\n",Arr);
	
	return 0;
}