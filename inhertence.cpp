#include<iostream>
#include"ff.cpp"
#include<string>
using namespace std;
int main()
{
	 child y;
	 string na;
	  int x,z;
	 cout<<"enter acc_no"<<endl;
	 cin>>x;
	 cout<<"enter phone no"<<endl;
	 cin>>z;
	 cout<<"enter name"<<endl;
	 cin>>na;
	 y.set_acc_no(x);
	 y.set_phone_no(z);
	 y.set_name(na);
	 y.get_acc_no();
	 y.get_phone_no();
	 y.get_name();
	 return 0;
}

