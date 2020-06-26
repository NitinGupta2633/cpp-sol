#include<iostream>
using namespace std;
int main()
{
	bool x;
	int y=200,z=200;
	cout<<boolalpha;
	x=(y==z);
	
	{
		cout<<"result=" <<x<<endl;
	}
	x=(y!=z);
	{
		cout<<"result is ="<<x<<endl;
	}
}
