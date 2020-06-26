#include<iostream>
using namespace std;
class Sample
{
unsigned int a=0,b=0;
	public:
		Sample()
		{
			cout<<"default"<<endl;
			
		}
		~Sample()
		{
			cout<<"destructor"<<endl;
		}
		Sample(int a,int b)
		{
			(*this).a=a;
			(*this).b=b;
		}
		void print()
		{
			cout<<a<<" "<<b<<endl;
		}
		Sample(const Sample &t);
};
Sample::Sample(const Sample &t)
{
	(*this).a=t.b;
	this->b=t.a;
	cout<<"copy"<<endl;
}
int main()
{
	Sample s1{10,30};
	Sample s2;
	Sample s3(s1);
    s1.print();
     s2.print();
     s3.print();
     
     
	
	
}
