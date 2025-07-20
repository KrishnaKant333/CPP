#include <iostream>
using namespace std;

void func(int a){
	cout<<"I am normal function "<<a<<endl;
}

template <class T>
void func(T a){
	cout<<"I am function of template "<<a<<endl;
}

int main()
{
	func(4); // exact match of argument type takes priority over template of generic type

	func('c'); // on exact match so function from template will be called
	return 0;
}
