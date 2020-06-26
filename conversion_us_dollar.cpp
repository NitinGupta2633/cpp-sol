#include<iostream>

int main()
{
	int x,y,z,a,b,c;
   std::cout<<"enter the amount in cents"<<std::endl;
	std::cin>>x;
	y=x/100;
	std::cout<<"no of dollars= "<<y<<std::endl;
	y=x%100;
	z=y/25;
	std::cout<<"no of quater="<< z<<std::endl;
	z=y%25;
	a=z/10;
	std::cout<<"no of dimes="<<a<<std::endl;
	b=z%10;
	c=b/5;
	std::cout<<"no of nickel= "<<c<<std::endl;
    y=y%5;
	y=b/1;
    std::cout<<"no of pennies="<<y<<std::endl;
}
