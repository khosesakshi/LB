#include<iostream>
using namespace std;

class Array
{
	public:
		float *Arr;
		int iSize;
		
		Array(float length);
	    ~Array();
		void Accept();
		void Display();
		float Addition();
		
		
};

	Array :: Array(float length)
		{
			iSize = length;
			Arr = new float[iSize];
		}
		
		Array :: ~Array()
		{
			delete []Arr;
		}
		
		void Array :: Accept()
		{
			int i = 0;
			cout<<"please enter the value:\n";
			for( i = 0; i < iSize ;i++)
			{
			cin>>Arr[i];
			}
		}
		
		void Array:: Display()
		{
			int i = 0;
			cout<<"Elements of the array are:\n";
			for( i = 0; i < iSize ;i++)
			{
			cout<<Arr[i]<<"\n";
			}
		}
		
		float Array :: Addition()
		{
			int i =0;
			float iSum =0.0f;
			
			for(i= 0 ;i <= iSize ;i++)
			{
				iSum = iSum + Arr[i];
			}
			return iSum;
	}
		
int main()
{
     Array aobj(5);
     float iRet = 0.0f;
     
     aobj.Accept();
     aobj.Display();
     
     iRet = aobj.Addition();
     
     cout<<"Addition is :"<<iRet<<"\n";
     return 0;
}