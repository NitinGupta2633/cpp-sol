#include<iostream>
using namespace std;
int main()
{
	int i,a[5];
	int *p;
	p=&a[i];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<5;i++)
	{
		
	
		cout<<p+i<<endl;
	}cout<<"values that you entered"<<endl;
	for(i=0;i<5;i++)
	{
cout<<(a+i)<<endl;
		cout<<*(a+i)<<endl;
	}
	
	
}
