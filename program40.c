#include<stdio.h>

 void Display(int iNo)
 {
 	int iCnt=0;
	
	for(iCnt=iNo; iCnt>=0;iCnt--)
	{
	printf("%d\n",iCnt);
    }
 }
int main()
{
	 int iFrequency=0;
	 
	 printf("enter the frequecncy");
	 scanf("%d",&iFrequency);
	 
	Display(iFrequency);
   
	return 0;
}