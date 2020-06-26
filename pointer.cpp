#include<iostream>
using namespace std;
int main()
{
	int *p;
	cout<<&p<<endl;
	cout<<"after increment pointer by 1"<<endl;
	(*p++);
	cout<<&p<<endl;
}
