#include<iostream>
using namespace std;
#include<vector>
int main()
{

 	int add{0};
	vector<int>vector1; 
	vector<int>vector2;
	vector<vector<int> >vector_2d;
	add=10;
	vector1.push_back(add);
	add=20;
	vector1.push_back(add);
	cout<<"first element at index 0 ="<<vector1.at(0)<<endl;
	cout<<"second element at index 1="<<vector1.at(1)<<endl;
	cout<<"no of elements in vector1 are=  "<<vector1.size()<<endl;
	add=100;
	vector2.push_back(add);
	add=200;
	vector2.push_back(add);
	cout<<"first element at index 0 = "<<vector2.at(0)<<endl;
	cout<<"secoond element at index 1= "<<vector2.at(1)<<endl;
	cout<<"no of elements in vector2 are = "<<vector2.size()<<endl;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	cout<<"elments in first row of vector_2d are=="<<vector_2d.at(0).at(0)<<" , "<<vector_2d.at(0).at(1)<<endl;
	cout<<"elements in second row of vector_2d are=="<< vector_2d.at(1).at(0)<<" , "<<vector_2d.at(1).at(1)<<endl;
	vector1.at(0)=1000;
	cout<<"after changes"<<endl;
	cout<<"elments in first row of vector_2d are=="<<vector_2d.at(0).at(0)<<" , "<<vector_2d.at(0).at(1)<<endl;
	cout<<"elements in second row of vector_2d are=="<<vector_2d.at(1).at(0)<<" , "<<vector_2d.at(1).at(1)<<endl;
	cout<<"first element index 0 ="<<vector1.at(0)<<endl;
	cout<<"second element index 1="<<vector1.at(1)<<endl;
	return 0;
}
