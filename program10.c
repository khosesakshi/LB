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
///////////////////////////////////////////////////////////
//
//  Function Name: Addition
//  Description:   It is used to perform addition of 2 float values
//	Input:  	   Float,Float
//	Output: 	   Float
//	Author:        Sakshi Sambhaji Khose(MC131)
//	Date:          06/10/2024 
//
///////////////////////////////////////////////////////////

float Addition(float fValue1,float fValue2)
{
	float fAdd=0.0f;						//Local variable for result
	
	//updator
	if(fValue1 < 0.0f)
	{
	    fValue1 = -fValue1;
	}
	if(fValue2 < 0.0f)
	{
		fValue2 = -fValue2;
	}
							
	fAdd=fValue1+fValue2;					//Bussiness Logic
	return fAdd;
}

///////////////////////////////////////////////////////////
//
// This application is used to perform addition of 2 numbers
//
//////////////////////////////////////////////////////////

int main()
{
	float fNo1=0.0f,fNo2=0.0f,fAns=0.0f;		//Local variables for input
	
	printf("Enter first number\n");
	scanf("%f",&fNo1);
	
	printf("Enter seconf number\n");
	scanf("%f",&fNo2);
	
	fAns=Addition(fNo1,fNo2);				//Function call
	
	printf("Adddition is:%f\n",fAns);
	
	return 0;
}

/* 
	step 5 : test the code
	
	Testcase 1:
	
	Enter first number:
	10.0
	Enter second number:
	20.0
	Addition is:30.000000
	
	Testcase 2:
	
	Enter first number:
	-10.0
	Enter second number:
	20.0
	Addition is:30.000000
	
	Testcase 3:
	
	Enter first number:
	10.0
	Enter second number:
	-20.0
	Addition is:30.000000
	
	Testcase 4:
	
	Enter first number:
	-10.0
	Enter second number:
	-20.0
	Addition is:30.000000
*/