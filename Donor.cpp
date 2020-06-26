#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Donor
{
private:
 string name;
 int age;
 float height;
 float weight;
 string gender;
 string bloodGroup;
 public:
 string getName()
 {
     return name;
 }
 void setName(string a)
 {
     name=a;
 }
 int getAge()
 {
     return age;
 }
 void setAge(int b)
 {
     age=b;
 }
 float getHeight()
 {
     //fill the code
     return height;
 }
 void setHeight(float c)
 {
     height=c;
 }
 float getWeight()
 {
     //fill the code
     return weight;
 }
 void setWeight(float d)
 {
     weight=d;
 }
 string getGender()
 {
     //fill the code
     return gender;
 }
 void setGender(string e)
 {
     gender=e;
 }
 string getBloodGroup()
 {
    return bloodGroup;
//fill the code
 }
 void setBloodGroup(string f)
 {
     bloodGroup=f;
 }
void search(Donor donor[],string bloodGroup,int n){
// fill the code

}
};

