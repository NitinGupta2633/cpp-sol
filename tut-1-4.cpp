#include<iostream>
using namespace std;
int main()
{
    int i,n;
	for(i=2;i<=300;i++)
	{
		for(n=2;n<=i-1)
		{
			if(i%n!=0)
		       continue;
		}
			cout<<i<<endl;
		
	}	
}
