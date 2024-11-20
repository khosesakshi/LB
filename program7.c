/*

	step 1: understand the problem statement.

	step 2: write the algorithm

	step 3: decide the programming language

	step 4: write the program

	step 5: test the program

*/

/*
 	problem statement :
 	write a program which is used to perform ADDITION of two numbers.
*/ 

/*
   	step 1 : understand the problem statement.
   	user is going to enter the data in decimal format.
   	If enterde data is negative we have to convert it to positive data.
*/

/*
	step 2 : write the algorithm
	
	START
			Accept first input 
			Accept second input
			If any of the input is negative then convert it into positive
			perform the addition of that accepted values
			Display the addition
	STOP	
*/

/*
	step 3: decide the programming language
	According to the problem statement we select C programming.
*/

/*
	step 4: write the program
*/

#include<stdio.h>

float Addition(float fValue1,float fValue2)
{
	float fAdd=0.0f;
	fAdd=fValue1+fValue2;
	return fAdd;
}

int main()
{
float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;
	
	printf("Enter first number\n");
	scanf("%f",&fNo1);
	
	printf("Enter seconf number\n");
	scanf("%f",&fNo2);
	
	fAns=Addition(fNo1,fNo2);
	
	printf("Adddition is:%f\n",fAns);
	
	return 0;
}
