#include<iostream>

class arithematic
{
int isum;
double dsum;
public:
int add(int x,int y)
{
isum=x+y;
return isum;
}

double add(double x,double y)
{
dsum=x+y;
return dsum;
}

};
int main()
{
arithematic k;
int a,b,c,d,p,q;

std::cout<<"enter 2 numbers"<<std::endl;
std::cin>>a>>b;
c=k.add(a,b);
std::cout<<c;

}
