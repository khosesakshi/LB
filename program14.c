/*
	START
		accept the total marks
		accept the obtained marks
		calculate the percentage as(obtained/total) * 100
		display the calulated percentage
	STOP
*/


#include<stdio.h>

float CalculatePercentage(int iObtained,int iTotal)
{
	float fPercentage=0.0f;
	fPercentage=((float)iObtained /(float) iTotal) * 100;
	return fPercentage;
}

int main()
{
	int iValue1=0,iValue2=0;
	float fResult=0.0f;
	
	printf("please enter obtained marks in your exam:\n");
	scanf("%d",&iValue1);
	
	printf("please enter the total marks:\n");
	scanf("%d",&iValue2);
	
	fResult=CalculatePercentage(iValue1,iValue2);
	
	printf("your percentage is:%f\n",fResult);
	
	return 0;
}