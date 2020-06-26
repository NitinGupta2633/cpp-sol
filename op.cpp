#include<iostream>
using namespace std;
int main()
{
	int age;
	char x,y=y,z;
	cout<<"enter your age"<<endl;
	cin>>age;
	cout<<"do you have your parents consent reagading work in y or n"<<endl;
	cin>>x;
	cout<<"do you have a driving license in y or n"<<endl;
	cin>>z;
	if(age>=18&&y==z)
	{
		cout<<"you are elgible"<<endl;
		
	}
	else if(age>15&&y==x)
	{
		cout<<"you are elegible"<<endl;
	}
	
}
