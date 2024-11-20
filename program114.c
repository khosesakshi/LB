//Row:4
//Col:3

/*
 	* * * 
 	* * *
 	* * *
 	* * *
*/

#include<stdio.h>

void Display(int iNo)
{
  printf("*\t");
   printf("*\t");
    printf("*\t");
    
    printf("\n");
    
     printf("*\t");
      printf("*\t");
       printf("*\t");
       
       printf("\n");
       
        printf("*\t");
         printf("*\t");
          printf("*\t");
          
          printf("\n");
          
           printf("*\t");
            printf("*\t");
             printf("*\t");
				
				printf("\n");
}

int main()
 {
	int iValue = 0;

	printf("enter the number:");
	scanf("%d",&iValue);

	Display(iValue);


	return 0;
}