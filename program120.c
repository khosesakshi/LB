//Row = 4,Col = 4

/*
  1 1 1 1
  2 2 2 2
  3 3 3 3
  4 4 4 4
  
*/

#include<stdio.h>

void Display(int iRow,int iCol)
{
  int i = 0;
  int j = 0;
  //    1      2      3
  for(i = 1;i<=iRow;i++)   	//outer (Rows)
  {    
  //     1      2     3
  	for(j = 1;j<=iCol;j++)    //Inner(Columns)
	  {
	  	 //     4
	    printf("%d\t",i);
      }
      printf("\n");
    }
}

int main()
 {
  int iValue1 = 0,iValue2 = 0;

	printf("enter the number of rows:\n");
	scanf("%d",&iValue1);
	
	printf("enter the number of columns:\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);


	return 0;
}