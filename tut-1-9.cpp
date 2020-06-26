#include<iostream>
using namespace std;
int main()
{
	int x;
	float y;
	cout<<"enter no of days of late return"<<endl;
	cin>>x;
	if(x<=5)
	{   y=x*.50;
		cout<<"fine = "<< y<<"rupee"<<endl;
		
	}
	 else if(x>=6||x<=10)
	{
		y=2.5+((x-5)*1);
		cout<<"fine = "<<y<<"rupee"<<endl;
	}
	else if(x>10)
	{
		y=7.5+((x-10)*5);
		cout<<"fine = "<<y<<endl;
	
	}
		if(x>=30)
		{
			cout<<"your membership has been cancelled";
		}
}
