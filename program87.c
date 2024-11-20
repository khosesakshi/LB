#include<stdio.h>
#include<stdlib.h>

  void AdditionEvenOdd(int Arr[],int iSize)
   {
	int iCnt = 0,iESum=0,iOSum=0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++) 
	{
		if((Arr[iCnt]) %2 == 0)
		{
			iESum=iESum+Arr[iCnt] ;
		}
		else
		{
			iOSum=iOSum+Arr[iCnt];
		}
	
	
    }
		printf("Addition of even elements :%d\n",iESum);
			printf("Addition of odd elements :%d\n",iOSum);	

}

int main() {
	int *ptr = NULL;
	int iLength = 0,iCnt = 0;

	printf("enter number of elements:\n");
	scanf("%d",&iLength);

	ptr=(int *) malloc(iLength * sizeof(int));

	printf("enter the elements:\n");
	for(iCnt = 0; iCnt < iLength; iCnt++) {
		scanf("%d",&ptr[iCnt]);
	}

     AdditionEvenOdd(ptr,iLength);
    

	free(ptr);

	return 0;
}
