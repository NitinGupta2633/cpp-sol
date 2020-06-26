#include<iostream>
#include<vector>
using namespace std;
int main()
{  
vector<int>number;
    float x,y,z,d;
    char b;
    int large,small;
do

{

    
    cout<<"P-Print number"<<endl;
    cout<<"A- Add a number"<<endl;
    cout<<"M-Display mean of the number"<<endl;
    cout<<"S- Display the smallest number"<<endl;
    cout<<"L- Display the largest number"<<endl;
    cout<<"Q- Quit"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>b;
    
     if(b=='p'||b=='P')
    {
        if(number.size()==0)
        {
            cout<<"list is empty"<<endl;
            
            
           } 
		   else
               {
               	cout<<"the elements are:-"<<endl;
				 for(int i: number)
            {
                
                
                cout<<"[";
                cout<<i;
                cout<<"]"<<endl;
            }
            
        }
       
    }
    else if(b=='a'||b=='A')
    {
        cout<<"Add a number to the list"<<endl;
        cin>>x;
		number.push_back(x);
        
        
    }
    else if(b=='m'||b=='M')
    {
        
    {
        
     for(int i:number)
     {
	 
            y+=i;
            z++;
    }
    d=y/z;
    cout<<"mean = "<<d<<endl;
    }
    
	}else if(b=='s'||b=='S')
    {
        small=number.at(0);
        for( auto i:number)
        {  
            if(small>i)
            {
                
                small=i;
            }
        }
        cout<<"The smallest number is " <<small<<endl;
        
    }
    else if(b=='l'||b=='L')
    {
        
        large=number.at(0);
        for(auto i:number)
        {  
            if(large<i)
            {
                
                large=i;
            }
        }
        cout<<"The largest number is " <<large<<endl;
        
    }
    
    
        
        
    }
   while(b!='Q'||b!='q');
    return 0;
}

