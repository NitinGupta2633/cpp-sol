#include<iostream>
using namespace std;
int x( int y, int a);
int x(int y, int a)
{  int g;
	g=y+a;
	return g;
}
int main()
{ int a,b,c;
cin>>a>>b;
	
	c = int x(int y,int a);
	cout<<c<<endl;
	return 0;
}
