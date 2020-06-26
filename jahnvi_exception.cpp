#include<iostream>
#include<stdio.h>
#include<string>
#include <cstdlib>
#include<ctype.h>
using namespace std;

int main()
{
    int n;
    while(1)
    {
        try
        {
            cout<<"Enter the number of t-shirts you want to order: "<<endl;
            cin>>n;
            if(!(isdigit(n)) || n<0)
            {
                throw 3;
            }
            cout<<"Your order for: "<<n<<" t-shirts has been successfully placed"<<endl;
            break;
        }
            
        catch(int )
        {
            cout<<"Please enter an Integer only."<<endl;
        }
        
        
    }
	return 0;
}
