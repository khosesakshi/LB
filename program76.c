#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int iLength = 0,iCnt = 0;
	int *ptr = NULL;

	printf("Enter the number of elements:\n");
	scanf("%d",&iLength);

	ptr = (int *)malloc(iLength * sizeof(int));

	printf("enter the elements:\n");

	for(iCnt = 0; iCnt < iLength;iCnt++)
	{
	scanf("%d",&ptr[iCnt]);
	}
	
	printf("elements of the array are:\n");
	
	for(iCnt = 0; iCnt < iLength;iCnt++)
	{
		printf("%d\n",ptr[iCnt]);
	}
	
	free(ptr);

	return 0;

}