#include<stdio.h>
#include<stdlib.h>

  int Frequency(int Arr[],int iSize,int iNo )
   {
	int iCnt = 0,iFrequency = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
	 {
	if(Arr[iCnt]==iNo)
	{
		iFrequency++;
	}


	}
	return iFrequency;

}

int main() {
	int *ptr = NULL;
	int iLength = 0,iCnt = 0,iRet=0,iValue =0;

	printf("enter number of elements:\n");
	scanf("%d",&iLength);

	ptr=(int *) malloc(iLength * sizeof(int));

	printf("enter the elements:\n");
	for(iCnt = 0; iCnt < iLength; iCnt++) 
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("enter the number that u want to search\n");
	scanf("%d",&iValue);

	iRet=Frequency(ptr,iLength,iValue);
	printf("Frequency is :%d\n",iRet);


	free(ptr);

	return 0;
}
