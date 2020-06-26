#include<iostream>
#include<string>
using namespace std;
class account
{
int bal;
string name;
public:
account()
{
name="none";
bal=0;
}
account(std::string name,int bal)
{
this->name=name;
this->bal=bal;
}
account(const account &x)
{
this->name=x.name;
this->bal=x.bal;
}

void output()
{
std::cout<<"name = "<<name<<std::endl;
std::cout<<"balance = "<<bal;
}
};

int main()
{
account x;
account y{"himanshu",10000};
account z(y);
    x.output();
    y.output();
    z.output();
}
