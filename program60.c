#include<stdio.h>

 int SumEvenDigits(int iNo)
 {
 	int iDigit = 0,iSum = 0;
 	
 	if(iNo < 0) //if input is negative c
 	{
 		iNo = -iNo;  //convert it to positive.
	}
	
	while(iNo > 0)
	{
		
		iDigit = iNo % 10;
		if(iDigit % 2 ==0)
		{
		
		iSum = iSum + iDigit;
	   }
    	iNo =iNo / 10;
	
}
	return iSum;
 }
 
 int main()
{
	int iValue = 0;include<stdio.h>

 int SumEvenDigits(int iNo)
 {
 	int iDigit = 0,iSum = 0;
 	
 	if(iNo < 0) //if input is negative c
 	{
 		iNo = -iNo;  //convert it to positive.
	}
	
	while(iNo > 0)
	{
		
		iDigit = iNo % 10;
		if(iDigit % 2 ==0)
		{
		
		iSum = iSum + iDigit;
	   }
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
	
   iRet = SumEvenDigits(iValue);
	
	printf("summetion of Even digit is:%d\n",iRet);
	
	return 0;
}
	int iRet = 0;
	
	printf("Enter number:\n");
	scanf("%d",&iValue);
	
   iRet = SumEvenDigits(iValue);
	
	printf("summetion of Even digit is:%d\n",iRet);
	
	return 0;
}