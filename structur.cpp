#include<iostream>
#include<string>
using namespace std;
class student
{
	string name;
	long int roll_no;
	int marks;
   public:void func()
	{
		cout<<"enter student name"<<endl;
		cin>>name;
		cout<<"enter your roll no"<<endl;
		cin>>roll_no;
		cout<<"enter marks"<<endl;
		cin>>marks;
	};
	
    public: void f2()
	{ 
	cout<<"data you enntered"<<endl;
		cout<<name<<endl;
		cout<<roll_no<<endl;
		cout<<marks<<endl; 
	};
};
int main()
{
	int i;
	student s[3];
	for(i=0;i<3;i++)
	{
		s[i].func();
	}
	for(i=0;i<3;i++)
	{
		s[i].f2();
	}
}
