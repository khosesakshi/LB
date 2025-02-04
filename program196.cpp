#include<iostream>
using namespace std;
 
 void swap (int *p,int *q)
 {
 	int temp = 0;
 	temp = *p;
 	*p = *q;
 	*q = temp;
 	
 }
 
int main()
{
	int no1=0,no2=0;
	
	cout<<"enter first number\n";
	cin>>no1;
	
	cout<<"enter secod number\n";
	cin>>no2;
	
	swap(&no1,&no2);  	//swap(100,200)
	
	cout<<"value of no1 after swapping:"<<no1<<"\n";
	cout<<"value of no2 after swapping:"<<no2<<"\n";

	return 0;
}
