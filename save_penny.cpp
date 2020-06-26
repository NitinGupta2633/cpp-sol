#include<iostream>
#include<iomanip>
using namespace std;
double save(float x,int y);
double save(float x,int y)
{
	if(y<=1)
	{
		return x;
	}
	return  save(2*x,y-1);
}
int main()
{
	cout<<fixed<<setprecision(2);
	int a;
	float t,z{0.01};
	cout<<"enter days"<<endl;
	cin>>a;
	t= save(z,a);
	cout<<"money saved = "<<t<<endl;
	
}
