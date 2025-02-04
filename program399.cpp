#include<iostream>
using namespace std;

float AdditionF(float Arr[],int iSize)
{
	float fSum = 0.0f;
	int i = 0;
	
	for( i = 0; i < iSize ;i++)
	{
		fSum = fSum + Arr[i];
	}
	return fSum;
}

int main()
{
     float Brr[] = { 10.1f,20.2f,30.0f,40.0f};
	 float fRet = 0.0f;
     
     fRet = AdditionF(Brr,4);
     
     cout<<"AdditionF is :"<<fRet<<"\n";
	
	return 0;
}