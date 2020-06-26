#include<iostream>
#include <cstdio>
using namespace std;

int main() 
{
    int i,j=0,k=0;
    cin>>i>>j;
    for(k=i;k<=j;k++)
    {
        if(k>0||k<=9)
        {
            if(k==1)
            {
                cout<<"one"<<endl;
            }
            else if (k==2)
            {
                cout<<"two"<<endl;
            }
            else if(k==3)
            {
                cout<<"three"<<endl;
            }
            else if(k==4)
            {
                cout<<"four"<<endl;
            }
            else if(k==5)
            {
                cout<<"five"<<endl;
            }
            else if (k==6)
            {
                cout<<"six"<<endl;
            }
            else if(k==7)
            {
                cout<<"seven"<<endl;
            }
            else if(k==8)
            {
                cout<<"eight"<<endl;
            }
            else if(k==9)
            {
                cout<<"nine"<<endl;
            }

        
        else if (k>9)
        {
            if(k%2==0)
            {
                cout<<"even"<<endl;
            }
            else
            {
                cout<<"odd"<<endl;
            }
        }
    }}

    
    return 0;
}

   
    

