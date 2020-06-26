#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0,z=1,a,X=0;
	cout<<"how many terms you want to print"<<endl;
	cin>>a;
	while(x<=a)
	{
		y=z;
		z=X;
		X=y+z;
        cout<<X;
       	x++;
	}
}
