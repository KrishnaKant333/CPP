#include <iostream>
using namespace std;

class Base{
	public:
	int var_b;
		void display(){
			cout<<"Displaying base class variable : "<<var_b<<endl;
		}
};

class Derived : public Base{
	public:
	int var_d;
		void display(){
			cout<<"Displaying derived class variable : "<<var_d<<endl;
		}
};

int main()
{
	Base *b;
	Base obj_b;
	Derived obj_d;
	b = &obj_d; // Base class pointer pointing to derived class object

	b->var_b = 3400;
	b->display();
	// as pointer is base class's so we can only use things of base class and not derived's

	Derived *d;
	d->var_b = 9448;
	d->var_d = 98;
	d->display();
	// as display is overwritten in derived class so it's display will be used and not base's
	return 0;
}
