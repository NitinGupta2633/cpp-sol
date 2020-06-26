#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	float y; char z;
	cout<<fixed<< setprecision(2);
	cout<<"enter an intger"<<endl;
	cin>>x;
	cout<<"enter a decimal number"<<endl;
	cin>>y;
	cout<<"enter a character"<<endl;
	cin>>z;
	cout<<"the data you have entered"<<endl;
	cout<<"entered integer is ="<<x<<endl;
	cout<<"entered decimal is ="<<y<<endl;
	cout<<"entered character is ="<<z<<endl;
}
