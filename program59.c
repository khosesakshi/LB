#include<stdio.h>

 int SumDigits(int iNo)
 {
 	int iDigit = 0,iSum = 0;
 	
 	if(iNo < 0) //if input is negative c
 	{
 		iNo = -iNo;  //convert it to positive.
	}
	
	while(iNo > 0)
	{
		iDigit = iNo % 10;
		iSum = iSum + iDigit;
		iNo =iNo / 10;
	}
	return iSum;
 }
 
 int main()
{
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
   iRet = SumDigits(iValue);
	
	printf("summetion of digit is:%d\n",iRet);
	
	return 0;
}