#include <iostream>
using namespace std;

class Base1{
	public:
	void greet(){
		cout<<"How r u?\n";
	}
};

class Base2{
	public:
	void greet(){
		cout<<"Kaise ho?\n";
	}

};

class Derived : public Base1, public Base2{
	int a;
	public :
	void greet(){
		Base1::greet();
		// this will resolve the ambiguity and be like use Base1 's greet() for the derived class
	}
};

int main()
{
	Base1 obj1;
	Base2 obj2;
	obj1.greet();
	obj2.greet();

	Derived d;
	d.greet(); // this is ambiguity right here as the program doesnt know what greet() function we r talking bout i.e. greet() of base1 or base2
	// To fix this : we have to define a greet() inside derived class and state which greet should it use.
	return 0;
}
