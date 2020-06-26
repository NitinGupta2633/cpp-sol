
#include<iostream>
using namespace std;
class X{

private:
	int a,b,c,i;
	private:
		int add()
		{  cin>>a>>b>>c;
		 	 i=a+b+c;
			
		}
		int result()
		{
			return i;
		}
};
int main()
{
	X v;
	
	v.add();
	cout<<v.result();
}
