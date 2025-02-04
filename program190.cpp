#include<iostream>
using namespace std;

int main()
{
	
	int iLength = 0,iCnt = 0;
	int *arr = NULL;
	
	cout<<"enter number of elements that u want to store :\n";
	cin>>iLength;
	
	arr = new int[iLength];
	//Ar = (int *)malloc(sizeof(int) *  iLength);
	
	cout<<"enter the values\n"; 
	for(iCnt = 0;iCnt < iLength ;iCnt++)
	{
		cin>>arr[iCnt];
	}
	
	cout<<"values from the array are:\n";
			for(iCnt = 0;iCnt < iLength ;iCnt++)
	{
		cout<<arr[iCnt]<<"\n";
	}
	
	delete []arr;
	
	return 0;
}
