#include<stdio.h>

 void Display(int iNo)
 {
	     int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    	printf("Jay Ganesh...\n");
	 
	}
 }
 
int main() 
{
	
    int iFrequency = 0;
    
    printf("enter the frequency:\n");
    scanf("%d",&iFrequency);
    
    Display(iFrequency);
	
	return 0;
	
}