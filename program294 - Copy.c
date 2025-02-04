#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
 static int i = 0;
 
 if(i < iSize)
 {
 	printf("%d\n",Arr[i]);
 	i++;
 	Display(Arr,iSize);
 }
 
}

int main()
{
   int *ptr = NULL;
   int iLength = 0,i = 0;
   
   printf("enter the number of lements:\n");
   scanf("%d",&iLength);
   
   ptr = (int *)malloc(sizeof(int) * iLength);
   
   printf("enter the values:\n");
   for(i = 0;i < iLength;i++)
   {
   	scanf("%d",&ptr[i]);
   }
   Display(ptr,iLength);
   
   free(ptr);
   
	return 0;
}
