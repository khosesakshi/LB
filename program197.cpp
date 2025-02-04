#include<iostream>
using namespace std;
 
 class Array
 {
 	public :
 		int *Arr;
 		int iSize;
 		
 		Array(int A)
 		{
 			iSize = A;
 			Arr = new int[iSize];
		 }
		 ~Array()
		 {
		 	delete []Arr;
		 }
		 
 void Accept()
  {
	int iCnt = 0;
	
	cout<<"enter the values\n"; 
	for(iCnt = 0;iCnt < iSize ;iCnt++) 
	{
		cin>>Arr[iCnt];
	}
	
}
void Display()
 {
	int iCnt = 0;
	
	cout<<"values from the array are:\n";
	for(iCnt = 0;iCnt < iSize ;iCnt++) 
	{
		cout<<Arr[iCnt]<<"\n";
	}
}

void Reverse()
{
	 int iStart = 0;
	 int iEnd = iSize - 1;
	 int temp = 0;
	 
	 while(iStart < iEnd)
	 {
	 	temp = Arr[iStart];
	 	Arr[iStart] = Arr[iEnd];
	 	Arr[iEnd] = temp;
	 	
	 	iStart++;
	 	iEnd--;
	 }
 }

};
 
int main()
{
	
	int iLength = 0,iRet = 0;
	
	cout<<"enter number of elements that u want to store :\n";
	cin>>iLength;
	
	Array aobj(iLength);
	
	aobj.Accept();
	aobj.Display();
	 
	 aobj.Reverse();
	 
	 cout<<"elements of array after reversal:\n";
	 aobj.Display();
	
	return 0;
}
