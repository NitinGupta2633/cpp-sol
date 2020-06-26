#include<iostream>
#include<iomanip>
using namespace std;
int celsius (double x);
int kelvin (double y);
int celsius (double x)
{
	double c;
	return (5.0/9.0)*(x-32)+273;
}
int kelvin(double y)
{
	double x;
	return  ((5.0/9.0)*(x-32));
}
int main()
{
	cout<<fixed<<setprecision(2);
	double j,y,a;
	cout<<"enter temp in farhenite"<<endl;
	cin>>j;
	a=celsius(j);
	y=kelvin(j);
     	cout<<"temp in celsius = "<< y <<endl;
	cout<<"temp in kelvin="<< a <<endl;
}
