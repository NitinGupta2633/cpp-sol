#include<iostream>
using namespace std;
class Complex
{
	float img,real;
	public:
		void setComplex(float x ,float y )
     {
     	real= x;
     	img=y;
	 }
	 void displayComplex()
	 {
	 	cout<<real<<"+"<<img<<endl;
	 }
	 
};
int main()
{  
    Complex *j;
  
	Complex a,b,c,d;
       j=&a;
	float x,y,e,r;
	cout<<"enter real and img part of a & b"<<endl;
	cin>>x>>y>>e>>r;
	a.setComplex(x,y);
	b.setComplex( e,r);
	a.displayComplex();
	b.displayComplex();
	cout<<j<<endl;
   
}
