//input :row:4,col:4
/* 
  * b c d
  a * c d
  a b * d
  a b c *
   
*/
  
#include<stdio.h>

void Display(int iRow,int iCol)
 {
    int i = 0,j = 0;
 
     char ch='a';
  
  for(i =1;i <= iRow; i++)
  
  {
 
 for(j = 1,ch = 'a';j <= iCol ;j++)
   {
   	if(i == j)
	   {
	   	printf("*\t");
	   
      }
      else
      {
	  
 	printf("%c\t",ch);
 	 ch++;
       }
  
  }
   printf("\n"); 
  }
}

int main()
 {
  int iValue1= 0,iValue2 =  0;

	printf("enter the number of Rows :\n");
	scanf("%d",&iValue1);
	
	printf("enter number of columns:\n");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);
	
	return 0;
}