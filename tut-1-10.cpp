#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x;
	float y,z,a;
	cout<<fixed<<setprecision(2);
	cout<<"select one operator\n 1.add\n2.sub\n3.multiply\n4.divide"<<endl;
	cin>>x;
	cout<<"enter 2 number for the operation"<<endl;
	cin>>y>>z;
	switch (x)
	{
	
	case 1 :  a=y+z;
	        cout<<"add = "<<a;
	         break;
	case 2 :  a=y-z;
	        cout<<"sub = "<<a;
	        break;
	case 3 :  a=y*z;
	        cout<<"multiplication = "<<a;
	        break;
	case 4 : a=y/z;
	        cout<<"divide = "<<a;
	        break;
    default : cout<<"you have entered wrong choice";
    
}
}
