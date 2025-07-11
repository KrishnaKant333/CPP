#include <iostream>
using namespace std;

class Number{
	int a;
	public:
		Number(){a=0;}
		Number(int a){
			this->a = a;
		}
		// Copy constructor:
		Number(Number &obj){
			cout<<"Copy constructor called"<<endl;
			a = obj.a;
		}

		// Even if there is no copy constructor, the compiler provides its own copy constructor
		
		void display(){
			cout<<"The number for this object is : "<<a<<endl;
		}
};

int main()
{
	Number x, y, z(46);
	x.display();
	y.display();
	z.display();

	Number z1(x);
	z1.display();
	return 0;
}
