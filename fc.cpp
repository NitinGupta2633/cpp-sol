#include<iostream>
#include "class.h" 
using namespace std;
int main()
{
	dog x;
	cout<<"enter your name"<<endl;
	cin>>x.name;
	cout<<"enter your age"<<endl;
	cin>>x.age;
	x.info();
	return 0;
	
}
