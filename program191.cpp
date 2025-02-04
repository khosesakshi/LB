#include<iostream>
using namespace std;
 
int main()
{
	
	int iLength = 0,iCnt = 0;
	int *arr = NULL;  //Data(Characteristics)
	
	cout<<"enter number of elements that u want to store :\n";
	cin>>iLength;
	
	arr = new int[iLength];  //Resourse allocation(constructor)

	
	cout<<"enter the values\n"; 
	for(iCnt = 0;iCnt < iLength ;iCnt++)  //logic(Function)
	{
		cin>>arr[iCnt];
	}
	
	cout<<"values from the array are:\n";
			for(iCnt = 0;iCnt < iLength ;iCnt++)  //logic(function)
	{
		cout<<arr[iCnt]<<"\n";
	}
	
	delete []arr;   //resource deslloaction(Destructor)
	
	return 0;
}
