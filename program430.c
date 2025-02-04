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
     
    lseek(fd,5,0);
    
    read(fd,Arr,10);
    
    printf("data from file is : %s\n",Arr);
    
    close(fd);
	
	return 0;
}

//SEEK_SET suruwatipasun			0
//SEEK_CUR  aata jithe aahe tithun  1
//SEEK_END  shevtapasun				2