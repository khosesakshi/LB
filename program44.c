#include<stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo)
{ 
	int iResult = 0;
	iResult = iNo%3;
	
	if (iResult == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
int main()
{

	int iValue = 0;	
	bool bRet = false;			//bFalg (we can declared any name).
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
	bRet = CheckDivisible(iValue);
	if(bRet == true)
	{
		printf("%d is divisible by 3\n",iValue);
	}
	else
	{
		printf("%d is not divisible by 3\n",iValue);
	}
	
	return 0;
}