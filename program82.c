#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[],int iSize) {
	int iCnt = 0;
	
	printf("Even elments from the array are:\n");
	
	for(iCnt = 0; iCnt < iSize; iCnt++) 
	{
		if((Arr[iCnt] % 2) == 0)
		{
		printf("addition of:%d\n",Arr[iCnt]);
		}
		
	}

}

int main() {
	int *ptr = NULL;
	int iLength = 0,iCnt = 0,iRet = 0;

	printf("enter number of elements:\n");
	scanf("%d",&iLength);

	ptr=(int *) malloc(iLength * sizeof(int));

	printf("enter the elements:\n");
	for(iCnt = 0; iCnt < iLength; iCnt++) {
		scanf("%d",&ptr[iCnt]);
	}

	EvenDisplay(ptr,iLength);


	free(ptr);

	return 0;
}
