#include<stdio.h>

/* 8   9:30;
   9   10:30;
   10   11:30;
*/

int DisplayTimetable(int iStd )
{
	switch(iStd)
	{
		case 8:
			printf("your exam is at 9:30 AM\n");
			break;
			 
			
			case 9:
				printf("your exam is at 10:30 AM\n");
					break;
			 
					
				case 10:
						printf("your exam is at 11:30 AM\n");
							break;
			   
			   
					
	}
	
}

int main()
{
	int iValue=0;

	printf("please enter your standard:\n");
	scanf("%d",&iValue);
	
	DisplayTimetable(iValue);
	
	return 0;
	
}