#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
float find_area(float x);
float find_area(float a,float b);
float find_area(float x)
{
	return x*x;
}
float find_area(float a,float b )
{
	return a*b;
}
int main()
{   
cout<<fixed<<setprecision(2);
	int i;
	float j,k,l;
	cout<<"enter 1 for area of square & 2 for area of rectangle"<<endl;
	cin>>i;
	if(i==1)
	{
		cout<<"enter side of square"<<endl;
		cin>>j;
		k=find_area(j);
		cout<<"area of square ="<<k<<endl;
	}
	else if(i==2)
	{
		cout<<"enter lenght and bredthe of rectangle"<<endl;
		cin>>k>>l;
		j=find_area(k,l);
		cout<<"area of rectangle="<<j<<endl;
	}
	else 
	{
		cout<<"wrong choice entered"<<endl;
	}
	
}

