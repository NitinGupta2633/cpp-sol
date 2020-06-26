#include<iostream>
using namespace std;
class Account
{
	private:
		float balance;
		public:
			Account()
			{
				balance=0;
          cout<<"base class no args constructor"<<endl;
			}
			Account(float balance)
			{
				(*this).balance=balance;
	           cout<<"base class args constructor"<<endl;
			}
			~Account()
			{
				cout<<"base class destructor"<<endl;
			}
			public:
				void set_balance(float f=0){
					balance=f;
				}
			void show_balance()
			{
				cout<<"balance = "<<balance<<endl;
			}
			
};
class saving : public Account{
	private :
		float balance;
		public:
		saving()
		{
			balance=50000;
			cout<<"no args constructor of dervied class"<<endl;
		}
		saving(float balance)
	{
			Account::Account(balance);
		
		
			cout<<" args constructor of dervied class"<<endl;
		}
		
    ~saving()
	{
		cout<<"destructor of dervied class"<<endl;
	}	
	};
	int main()
	{
		saving f;
	saving g{4564};
		Account s{444.44} ,k;
		s.show_balance();
		
		k.show_balance();
		f.show_balance();
		g.show_balance();
	}
