//input :row:4,col:4
/* 
  * * * * 
  & & & & 
  & & & & 
  * * * *
   
*/
  
#include<stdio.h>

void Display(int iRow,int iCol)
 {
    int i = 0,j = 0;
    
  
  for(i =1;i <= iRow; i++)
  {
 
 for(j = 1;j <= iCol ;j++)
   {
   	if(i == 1 || i == iRow)	 //first and lst row
	  {
	   	printf("*\t");
      } 
     
     else    //between first nd last row
      {
      printf("&\t"); 
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