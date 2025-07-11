#include <iostream>
using namespace std;

class Complex{
	int a,b;
	public:
	//  Constructor is a function which has the same name as the class name and is automatically invoked during execution of the program
	//  It is used to initialise an object of the class
	//  It does not have a return type not even void
	Complex(void); // --> default constructor

	Complex(int x, int y); // --> parameterised constructor
	// Now Complex is an overloaded constructor

	// We cannot refer to the address of a constructor

	void printNumber(void){
		cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
	}
};

Complex :: Complex(void){
	cout<<"Default constructor values are : "<<endl;
	a = 10;
	b = 0;
}

Complex :: Complex(int x, int y){
	cout<<"Parameterised constructor values are : "<<endl;
	a = x;
	b = y;
}

int main()
{
	Complex c;
	c.printNumber();

	int x,y;
	cout<<"Enter 2 numbers : "<<endl;
	cin>>x>>y;
	Complex c1(x, y);
	// Can also be defined as :
	// Complex c2 = Complex(5,6);
	c1.printNumber();

	return 0;
}
