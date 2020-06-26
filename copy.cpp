#include<iostream>
#include<string>
using namespace std;
class dog
{
	private:
		unsigned int age;
		string name;
		string breed;
		public:
		 dog()
		 {name="none";
		 age=0;
		 breed="none";
		      cout<<name<<endl;
			  cout<<age<<endl;
			  cout<<breed<<endl;
			  
		}
		dog(const dog &source);

				
			
};
	dog::dog(const dog &source)
		{
			name=source.name;
			breed=source.breed;
			age=source.age;
			cout<<"from copy constructor"<<endl;
			
			
		}
int main()
{
	dog k;
	dog();
}

