#include<iostream>
using namespace std;
int main()
{
	int x[5],i=0,y;
	cout<<"enter 5 number in array"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>x[i];
		
	}
	y=x[0];
	for(i=0;i<=4;i++)
	{
		if(y<x[i])
		{
			y=x[i];
		}
	}
	cout<<"largest no is "<<y;
}

