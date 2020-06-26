#include<iostream>
#include<cstring>
#include<conio.h>
#include<string>
using namespace std;
class abc{
	private:
int x;
	public:
		void set_data(int x);
		void get_data();
		
		int operator -() const
		{
			int temp;
			temp=x-1;
			return temp;
		}
};
void abc::set_data(int x)
{
	(*this).x=x;
}
void abc::get_data()
{
   cout<<x<<endl;
}
int main()
{ int  s;
  abc s1,s2;
  cout<<"enter the string"<<endl;
  cin>>s;
  s1.set_data(s);
  s2=-s1;
  s2.get_data();	
}
