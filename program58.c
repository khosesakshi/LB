#include<stdio.h>

 int CountOddDigits(int iNo)
 { 
 int iDigit = 0;
   int iCount = 0;
   
   	if(iNo < 0)		//updator
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		if(iDigit % 2 != 0)
	{
	
	iCount++;
    }
	iNo=iNo /10 ;
    }
    
    return iCount;
    
}
 
int main()
{
	int iValue = 0,iRet = 0;
	
	printf("enter number:\n");
	scanf("%d",&iValue);
	
	iRet = CountOddDigits(iValue);
	printf("Number of Odd Digits are:%d\n",iRet);
	
	return 0;
}