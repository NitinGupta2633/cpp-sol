#include<iostream>
using namespace std;
int main()
{ int a,b;
cin>>a>>b;
cout<<"initial value " <<a<<" " <<b<<endl;
a=a+b;
b=a-b;
a=a-b;
cout<<"final value "<<a<<" " <<b<<endl;												
}
