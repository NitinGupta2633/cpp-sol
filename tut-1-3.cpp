#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float x,y;
	float result;
	cout<<fixed<<setprecision(2);
	cout<<"enter 2 number"<<endl;
	cin>>x>>y;
	result=x+y;
	cout<<"add = "<<result<<endl;
	result=x-y;
	cout<<"diff = "<<result<<endl;
	result=x*y;
	cout<<"product = "<<result<<endl;
	result=x/y;
	cout<<"divide = "<<result<<endl;
	
}
