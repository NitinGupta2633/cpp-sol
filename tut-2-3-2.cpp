#include<iostream>
using namespace std;
int main()
{
	int y,z=1;
	cout<<"enter a number whose factorial you want "<<endl;
	cin>>y;
	while(y>=1)
	{
		z=z*y;
		y--;
	}
		cout<<"factorial of "<< z;
	
}

