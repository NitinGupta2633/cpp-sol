#include<iostream>
using namespace std;
int main()
{
	int x=0,y,z=1,i,j=0;
	cout<<"enter upto how many terms you want "<<endl;
	cin>>y;
	
	
	for(i=0;i<=y;i++)
	{
		x=z;
		z=j;
		j=x+z;
		
		cout<<j;
	}
}
