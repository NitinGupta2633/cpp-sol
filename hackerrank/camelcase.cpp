#include<iostream>
using namespace std;

int get_value(string s)
{
	   
    int v=1,m;
    for( int i=0;s[i]!='\0';i++)
        {
               
             if(isupper(s[i]))
                {
                    v=v+1;
                }
        }    
          
return v;
}


int main()
{int x;
	string s={"saveChangesInTheEditor"};
//cin>>s;
	x=get_value(s);
	cout<<x<<endl;
	
}
