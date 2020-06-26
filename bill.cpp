#include<iostream>
using namespace std;
int main()
{   
    int x,y, cost;
    const int a=25; const int b=35;
    float tax=0.06; float total=0;
	cout<<"How many small rooms would you like cleaned?"<<endl;
	cin>> x;
	cout<<"How many large rooms would you like cleaned? "<<endl;
	cin>>y;
	cout<<"\nEstimation for carpet cleaning service"<<endl;
	cout<<"Number of small rooms: "<<x<< endl;
	cout<<"Number of large rooms:"<<y<<endl;
	cout<<"Price per small room: $ "<<a<<endl;
	cout<<"Price per large room: $"<<b<<endl;
    cost=x*a+y*b;
	cout<<"cost: "<<cost<<endl;
    tax=tax*cost;
    cout<<"tax="<<tax<<endl;
    cout<<"================================"<<endl;
	  
   total=cost+tax;
   cout<<"Total Estimate: $"<<total<<endl;
   cout<<"This estimate is valid for  30 days"<<endl;
	
}
