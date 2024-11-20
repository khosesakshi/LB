//TEMPLATE FOR EVERY PROGRAM'S

#include<stdio.h>
#include<stdlib.h>

void _______(int Arr[],int iSize)
{
	//logic
}

int main() {
	int iLength = 0,iCnt = 0;
	int *ptr = NULL;

	printf("Enter the number of elements:\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("enter the elements:\n");

	for(iCnt = 0; iCnt < iLength; iCnt++) 
	{
		scanf("%d",&ptr[iCnt]);
	}
     
     ____________(ptr,iLength);
	
	free(ptr);

	return 0;

}