#include<iostream>
using namespace std;

int OnBit(int iNo,int iPos) 
{
	int iMask = 0x1;
	int iResult = 0;
     
     iMask = iMask << (iPos-1);
     
	 iResult = iNo | iMask;
     
	return iResult;
}

int main()
 {
	int iValue = 0, iRet = 0,iLocation;

	cout<<"enter the number :\n";
	cin>>iValue;

	cout<<"enter the position :\n";
	cin>>iLocation;

	iRet = OnBit(iValue,iLocation);

	cout<<"Number after bit On :"<<iRet<<"\n";

	return 0;
}

