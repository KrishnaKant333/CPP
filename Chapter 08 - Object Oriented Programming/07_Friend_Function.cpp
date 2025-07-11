#include <iostream>
using namespace std;

class Complex{
	int a,b;
	public:
		void setNumber(int n1, int n2){
			a = n1;
			b = n2;
		}
		void printNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}

		friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2){
	Complex o3;
	o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
	return o3; // We can not do this because a and b are private data members and the scope of sumComplex function is outside the class Complex, we can not access them.
	// To make the private data members accessible to a function outside the scope of a class, we can use the friend keyword
	// The friend function's declaration can be put inside the public or private section of the class
	// It cannot access members direcly but through object.member only.
	// Friend function (usually) takes object as arguments
}

int main(){
	Complex c1, c2, csum;
	c1.setNumber(1,4);
	c1.printNumber();

	c2.setNumber(5,8);
	c2.printNumber();

	csum = sumComplex(c1, c2);
	csum.printNumber();

	return 0;
}
