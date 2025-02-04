#include<iostream>
using namespace std;

template<class T>
T AdditionD(T Arr[],int iSize)
{
	T dSum = 0.0;
	int i = 0;
	
	for( i = 0; i < iSize ;i++)
	{
		dSum = dSum + Arr[i];
	}
	return dSum;
}

int main()
{
     double Brr[] = { 10.123,20.231,30.056,40.042};
	 double dRet = 0.0f;
     
     dRet = AdditionD(Brr,4);
     
     cout<<"AdditionD is :"<<dRet<<"\n";
	
	return 0;
}