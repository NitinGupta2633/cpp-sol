#include<iostream>
using namespace std;
class test
{
	int num;
	static int count;
	public:
		static int k;
	static	void getdata()
		{
			num=x;
			count++;
		}
		static void display()
		
		{
			cout<<"count is "<<count<<endl;
		}
};
 int test::k;
int test::count;

int main()
{ 
    test t1,t2;
    cout<<test::k;
    t1.getdata(551);
    t2.getdata(5656);
    
		
}
