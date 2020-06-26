#include<iostream>
using namespace std;
int main()
{   int x[]{43,56,435,5,54,54,5,5};
	int *int_ptr{nullptr};
	int *int_ptr1{nullptr};
	int n;
int_ptr=&x[2];
int_ptr1=&x[6];
n=int_ptr-int_ptr1;
cout<<n<<endl;
	
}
