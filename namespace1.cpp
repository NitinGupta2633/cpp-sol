#include<iostream>
namespace A{
	void print() {
	std::cout<<"i am in a"<<std::endl;
}
}
namespace b{
		void print() {
	std::cout<<"i am in b"<<std::endl;
}
	
}

int main()
{
	A::print();
}
