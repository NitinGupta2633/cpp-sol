#include <iostream>
using namespace std;
int  max_of_four(int h, int z, int y, int x);

int  max_of_four (int a, int b, int c, int d)
{
    
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                return a;
            }
            else
           return d;
         }
    }
    else if(b>a)
    {
     if(b>c)
     {
         if(b>d)
         {
             return b;
         }
         else return d; 
        
     }   
    }
    else if (c>a)
    {
        if(c>b)
        {
            if(c>d)
            {
                return c;
            }
            else
             return d;
        }
    }
    else if (d>a)
    {
        if(d>b)
        {
            
                if(d>c)
                {
                    return d;
                }
                else 
                return c;
             
        }
    }
    
}
int main() 
{
    int ans, h=0,x=0,y=0,z=0;
    cin>>h>>x>>y>>z;
     ans = max_of_four(h, z, y, x);
    cout<<ans<<endl;
    
    return 0;
}





