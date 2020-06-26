#include<iostream>
using namespace std;
class b;
class a{
	private: int x;
	public:
		void get_data()
		{
			cout<<"enter the first number"<<endl;
			cin>>x;
			
		}
		friend void compare(a,b);
};
class b:public a{
	private:
		int y;
		public:
			void get_data()
			{
				cout<<"enter the second number"<<endl;
				cin>>y;
			}
			friend void compare(a,b);
};
void compare( a c, b h)
{
	if(c.x>h.y)
	{
		cout<<"a is greater"<<endl;
		
	}
	else if(h.y>c.x)
	{
		cout<<"b is greater"<<endl;
	}
	else cout<<"both are equal"<<endl;
	
}
int main()
{
	a f;
	b g;
	f.get_data();
	g.get_data();
	compare(f,g);
	
}
