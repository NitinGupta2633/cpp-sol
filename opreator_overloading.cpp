#include<iostream>
using namespace std;
class complex
{
 private:
 int x,y;
 public:
 void set_data(int a,int b);
 void  get_data();
 

 void operator +(complex c )
 {
 	complex a;
 	a.x=x+c.x;
 	a.y=y+c.y;
 	return a;
 }
};
void complex::get_data()
{
	cout<<"a="<<x<<"  b= "<<y<<endl;
}
void complex::set_data(int a,int b)
{
	(*this).x=a;
	(*this).y=b;
}
int main()
{
	int v,b;
	complex c1,c2,c3;
	cin>>v>>b;
	c1.set_data(v,b);
	cin>>v>>b;
	c2.set_data(v,b);
	c3=c1+c2;
	c3.get_data();
	
// just for checking 
	int n,m;
	n=4;
	m=6;
	m=m+n;
	cout<<m<<endl;
	
	
}
