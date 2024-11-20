#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

  bool Search(int Arr[],int iSize,int iNo )
 {
	int iCnt = 0;

	for(iCnt = 0; iCnt < iSize; iCnt++)
    {
	   if(Arr[iCnt] == iNo)
    	{
     
          break;
		  }
       }
       if(iCnt == iSize)
       {
       	return false;
	   }
	   else
	   {
	   	return true;
	   }
	

}

int main()
 {
	int *ptr = NULL;
	int iLength = 0,iCnt = 0,iRet=0,iValue =0;
	bool bRet=false;

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

	iRet=Search(ptr,iLength,iValue);
	if(bRet == true)
	{
		printf("Element is present\n");
	}
	else
	{
		printf("element is not present:;\n");
	}

	free(ptr);

	return 0;
}
