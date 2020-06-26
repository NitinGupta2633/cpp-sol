#include<iostream>
#include<string>
using namespace std;
class Account
{
	private:
     int phone_no, acc_no;
	string name;
	public:
  void set_acc_no( int x);
  void set_phone_no( int y);
  void set_name( string name);
  void	get_phone_no();
  void get_acc_no();
  void get_name();
		
};
void Account::set_acc_no( int x)
{
	acc_no=x;
}
void Account::set_phone_no( int y)
{
	phone_no=y;
}

void Account::get_phone_no()
{
	cout<<"phone_no = "<<phone_no<<endl;
}

void Account::get_acc_no()
{
	cout<<"name = " <<name<<endl;
}


/*-----------------------------------------------------*/
class child:public Account
{   private:
    string name;
   public:

  void set_name( string name)
{
	(*this).name=name;

} 
    void get_name()
{
	cout<<"Name= "<<name<<endl;
}
	
};
