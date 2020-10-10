#include<iostream>
using namespace std;

#define PI 3.141592
float reactance(float c,float f);
int main(void)
{
float frq,cap,xc;

std::cout<<"Enter frequency => ";
std:: cin>>frq;
std::cout<<"Enter capacitance => ";
 std::cin>>cap;
xc = reactance(cap,frq); 
std::cout<<"XC="<<xc<< " Ohm"; 

return(0);
}
float reactance(float c,float f)
{
return 1/(2*PI*f*c);
}

