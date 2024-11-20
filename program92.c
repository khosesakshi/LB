#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[],int iSize)
{
	int iSum = 0,iCnt = 0,iAvg = 0;
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		iSum=iSum+Arr[iCnt];
		
	}
	return (iSum/iSize);
}

int main() 
{
	int *ptr = NULL;
	int iLength = 0,iCnt = 0;
	float fRet = 0;

	//	step 1: Accept the number of elements from user
	printf("enter number of elements:\n");
	scanf("%d",&iLength);

	//step 2:Allocate that memory dynamically
	ptr=(int *) malloc(iLength * sizeof(int));

	//step 3:Accept the values and store into the dynamic memory
	printf("enter the elements:\n");
	for(iCnt = 0; iCnt < iLength; iCnt++) 
	{
		scanf("%d",&ptr[iCnt]);
	}

	//step 4:Perform the operations
   fRet = Average(ptr,iLength);
    printf("Addition is:%f\n",fRet);
	
	//	step 5: Deallocate that memory
	free(ptr);

	return 0;
}

/*

	step 1: Accept the number of elements from user
	step 2:Allocate that memory dynamically
	step 3:Accept the values and store into the dynamic memory
	step 4:Perform the operations
	step 5: Deallocate that memory

*/