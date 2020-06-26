#include<iostream>
using namespace std;
class A{
	private:
		float x;
		public:
			void balance_in(float x)
	       		{
	       		
				(*this).x=x;
			}
			void balance_out()
			{
				cout<<"entered balance is = "<<x<<endl;
			}
};
class B:public A{
	int x;
};
int main(){
	B y;
	
	float c;
	cin>>c;
	y.balance_in(c);
	y.balance_out();
}
