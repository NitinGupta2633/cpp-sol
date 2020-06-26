#include<iostream>
using namespace std;
#include<cstring>
class donor
{ 
    private:
   std::string name,gender,bloodgroup;
    int age;
    float height, weight;
    public:
  void    get_data(string name,int age, float height,float  weight, string gender,string bloodgroup)
    {
        (*this).name=name;
        (*this).age=age;
        (*this).height=height;
        (*this).weight=weight;
        (*this).gender=gender;
        (*this).bloodgroup=bloodgroup;
    }
  void   display_data()
  {
   cout<<" Name :"<<name<<endl;
cout<<"Age :"<<age<<endl; 
cout<<"height :"<<height<<endl;
cout<<"weight :"<<weight<<endl;
cout<<"Gender :"<<gender<<endl;
cout<<"Blood Group :"<<bloodgroup<<endl;
  }
};
int main()
{
donor d;   
string name,gender,bloodgroup;
    int age;
    float height, weight;

cout<<"Enter the donor details"<<endl;
cout<<"Enter the name :"<<endl;
cin>>name;
cout<<"Enter the age :"<<endl;
cin>>age;
cout<<"Enter the height :"<<endl;
cin>>height;
cout<<"Enter the weight :"<<endl;
cin>>weight;
cout<<"Enter the gender :"<<endl;
cin>>gender;
cout<<"Enter the blood group :"<<endl;
cin>>bloodgroup;
d.get_data( name,age, height, weight, gender, bloodgroup);
cout<<"Donor details are:";
d.display_data();

}
