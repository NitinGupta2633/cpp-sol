#include<iostream>
using namespace std;
class x{
	public:
	x()
	{
		cout<<"in constructor"<<endl;
		
	}
	~x()
	{
		cout<<"in destructor"<<endl;
		
	}
};
int main()
{
	 x v;
	cout<<"in main"<<endl;
	}
