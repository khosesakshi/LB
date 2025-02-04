#include<iostream>
using namespace std;

void DisplayFactors(int iNo)    //o(N/2)
{
	int iCnt = 0;
	for(iCnt = 1; iCnt <= iNo/2 ;iCnt++)  
	{
		if(iNo % iCnt == 0)
		{
			cout<<iCnt<<"\n";
		}
	}
}

int main()
{
	int iValue = 0;
	
	cout<<"enter number:\n";
	cin>>iValue;
	
	DisplayFactors(iValue);
	
	return 0;
}


/* 
	problems on numbers
	problems on digit
	problems on N numbers
	problems on pattern printing
	problems on String
*/
