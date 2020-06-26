#include <iostream>
#include <string>
#include<cstring>
using namespace std;

int main() 
{
	int z,t, x,y,i;
    string a,b,q,n;
    cin>>a>>b;
    q=b;
    n=a;
    z=a.length();
    t=b.length();
    cout<<a.length()<<" "<<q.length()<<endl;

   
    a=a+q;
    cout<<a<<endl;
   
    for(i=0;i<z;i++)
    {
    	if(i==0)
    	{
    		n[i]=b[i];
		}
		
	}
	for(i=0;i<t;i++)
{
	if(i==0)
	{
		b[i]=a[i];
	}
	
}
 cout<<n<<" "<<b<<endl;    
   return 0;
}


