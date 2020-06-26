#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x,y;
	cout<<fixed<<setprecision(2);
	cout<<"enter the temp in *celsius"<<endl;
	cin>>x;
	y=(9*x/5)+32;
	cout<<"temp in farenhite = "<<y<<endl;
}
