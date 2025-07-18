#include <iostream>
using namespace std;

class Base1{
	protected:
		int base1int;
	public:
		void set_base1int(int b1){
			base1int = b1;
		}
};

class Base2{
	protected:
		int base2int;
	public:
		void set_base2int(int b2){
			base2int = b2;
		}
};

class Derived : public Base1, public Base2{
	public:
		void show(){
			cout<<"The value of base1 and base2 is : "<<endl;
			cout<<base1int<<endl;
			cout<<base2int<<endl;
		}
		void sum(){
			cout<<"The sum of base1 and base2 is : "<<endl;
			cout<<base1int + base2int;
		}
};

int main()
{
	Derived d;
	d.set_base1int(5);
	d.set_base2int(10);
	d.show();
	d.sum();
	return 0;
}
