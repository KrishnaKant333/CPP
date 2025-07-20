#include <iostream>
using namespace std;

class Base{
	public:
	int var_b = 1;
		virtual void display(){
			cout<<"Displaying base class variable : "<<var_b<<endl;
		}
};

class Derived : public Base{
	public:
	int var_d = 2;
		void display(){
			cout<<"Displaying derived class variable : "<<var_d<<endl;
		}
};

int main()
{
	Base *b;
	Base obj_b;
	Derived obj_d;
	b = &obj_d;
	b->display();
	return 0;
}
