#include<iostream>
using namespace std;
int main()
{
	int x,y,z=1;
	cout<<"enter a number whose factorial you want "<<endl;
	cin>>x;
	for(y=x;y>=1;y--)
	{
		z=z*y;
	}
	cout<<"factorial of "<< z;
}
