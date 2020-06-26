#include<iostream>
using namespace std;
class integer{
	private:
		int x,y;
		public:
			integer()
			{
			}
			integer(int x, int y)
			{
				(*this).x=x;
				(*this).y=y;
			}
			void show()
			{
				cout<<"value of x is = "<<x<<endl;
				cout<<"value of y is = "<<y<<endl;
			}
			void operator=( const integer &m)
			{
				x=m.x;
				y=m.y;
			}
			
};
int main()
{
	integer u(10,20);
	integer v;
	v=u;
	v.show();
	int a=2;
	cout<<"a"<<++a<<endl;
	
}
