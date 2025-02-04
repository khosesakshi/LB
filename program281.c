#include<stdio.h>

int CountDigitsR(int iNo)
 {
	static int iCount=1;
	if(iNo != 0)
	{
		iCount++;
		iNo = iNo / 10;
		CountDigitsR(iNo);
	}
	return iCount;
}


int main()
 {
	int iValue = 0,iRet = 0;

	printf("enter the number :\n");
	scanf("%d",&iValue);

	iRet = CountDigitsR(iValue);

	printf("Number of digits are:%d\n",iRet);

	return 0;
}
