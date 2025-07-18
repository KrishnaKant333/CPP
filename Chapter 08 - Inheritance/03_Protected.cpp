#include <iostream>
using namespace std;

class Base{
	public:
		int a;
		Base(){a=7634;}
	protected: // protected --> private for others, public for derived class
	// TL;DR --> private which can be inherited
		int b;
};

class Derived1 : protected Base{};
class Derived2 : public Base{};

int main()
{
	Base base;
	// cout<<base.b; // not possible as protected data member
	Derived1 d1;
	// cout<<d1.a; // not possible as inherited in protected access specifier
	// cout<<d1.b; // not possible as inherited in protected access specifier and protected data member

	Derived2 d2;
	cout<<d2.a; // possible as inherited in public access specifier and public data member
	// cout<<d2.b; // not possible although inherited in public access specifer but protected data member
	return 0;
}
