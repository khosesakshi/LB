/*
	START
	accept the percentage from user
	if percentage are less than 40 then display FAIL
    and if it is greater than or equal to 40 then display PASS
    STOP
*/


#include<stdio.h>

void DisplayResult(float fPercentage)
{					//logical or operator
	if(fPercentage < 0.0f || fPercentage >100.0f ) //filter
	{
		printf("invalid percentage.plese enter in the range 0 to 100\n");
		return 0;
	}

	if(fPercentage >=40.00f )
	{
		printf("you are PASS\n");
	}
	else
	{
		printf("you are FAIL\n");
	}
}

int main()
{
	float fValue=0.0f;
	
	printf("enter the percentage\n");
	scanf("%f",&fValue);
	
	DisplayResult(fValue);
	
	return 0;
}
