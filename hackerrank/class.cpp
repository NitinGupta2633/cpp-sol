#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		int x,z;
		string a,y;
	public:
		void info()
		{
			cout<<x<<endl;
			cout<<y<<","<<a<<endl;
			cout<<z<<endl;
			
			cout<<x<<","<<a<<","<<a<<","<<y<<","<<z<<endl;
		}

};
int main()
{
	student my;
	cin>>my.x;
	cin>>my.a;
	cin>>my.y;
	cin>>my.z;
	my.info();
	return 0;
}
