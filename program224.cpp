#include<iostream>
using namespace std;

int OffBit(int iNo,int iPos) 
{
	int iMask = 0xffffffef;
	int iResult = 0;
	
	 iResult = iNo & iMask;
	 return iResult;
}

int main()
 {
	int iValue = 0, iRet = 0,iLocation;

	cout<<"enter the number :\n";
	cin>>iValue;
	
	cout<<"enter the position :\n";
	cin>>iLocation;

	iRet = OffBit(iValue,iLocation);

	cout<<"Number after bit toggle :"<<iRet<<"\n";

	return 0;
}

