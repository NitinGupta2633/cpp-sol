#include<iostream>
using namespace std;
class Account
{
	private:
	std::string name;
	double balance;
	public:
		Account()
		{
			name="none";
			balance=0.00;
		}
		Account(std::string val_name,double bal=0)
		{
			name=val_name;
			balance=bal;
		}
		Account (const Account &x)
		{
			(*this).name=x.name;
			this->balance=x.balance;
		}
		~Account()
		{
			cout<<"destructor\n";
		}	
		public:
			void info()
			{
				cout<<"default info ="<<name<<endl;
				cout<<"default info ="<<balance<<endl;
			}
};
int main()
{
	Account x;
	Account y{"Nitin",10000};
	Account z(y);
	x.info();
	y.info();
	z.info();
	return 0;

}
