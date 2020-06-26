#include<iostream>
using namespace std;
class increment{
	private :
		int x;
		public:
			void set_data(int x);
			void get_data();
			int operator ++(int)  //post
			{
				int temp;
				temp= x++;
				return temp;
			}
			int operator ++() //pre
			{
				int temp;
				temp=++x;
				return temp;
			}
};
void increment::set_data(int x)
{
	this->x=x;
}
void increment::get_data()
{
	cout<<x<<endl;
}
class decrement:public increment {
	int operator--() //pre decrement
	{
		int temp;
		
		temp=--x;
		return temp;
	}
	int operator--(int)//post
	{
		int temp;
		temp=x--;
		return temp;
		
	}
};
int main()
{int h.j;
	increment a,b,c;
	decrement d,e,f;
	cout<<"enter the number for increment"<<endl;
	cin>>h;
	a.set_data(h);
	b=++a;
	cout<<"for pre increment the value "<<endl;
	b.get_data();
	c=a++;
	cout<<"for post increment value"<<endl;
	c.get_data();
	d.set_data(h);
	cout<<"for pre decrement"<<endl;
	e=--d;
	e.get_data();
	cout<<"fpr post decrement"<<endl;
	f=d--;
	f.get_data();
	return 0;
	
	
}
