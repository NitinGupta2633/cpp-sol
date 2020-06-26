#include<iostream>
using namespace std;

int main()
{
	int i,x,y[50],z;
	cin>>x;
	for(i=0;i<x;i++)
	{
		cin>>z;
		y[i]=z;
	}
	for(i=x;i>0;i--)
	{
		cout<<y[i];
	}
	return 0;
}
