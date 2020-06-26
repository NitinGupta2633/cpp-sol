#include<iostream>
using namespace std;
namespace ns1{
	int value()
	
{
		return 4;
}}
namespace ns2{
	int x=44;
	int y()
	{
		return 4;
	}
}
int main()
{
	cout<<ns1::value()<<endl;
	cout<<ns2::x<<endl;
	cout<<ns2::y()<<endl;
}
