#include <iostream>
using namespace std;

// Forward Declaration
class Complex;

class Calculator{
	public:
		int add(int a, int b){
			return a+b;
		}
		int sumReComplex(Complex o1, Complex o2);
		int sumImComplex(Complex o1, Complex o2);
};

class Complex{
	int a,b;

	// We can use this individual method declaration but if the number of functions rises then it will become inefficient:
	// friend int Calculator :: sumReComplex(Complex, Complex);
	// friend int Calculator :: sumImComplex(Complex, Complex);

	// Better way : to make the whole class friend :
	friend class Calculator;
	public:
		void setNumber(int n1, int n2){
			a = n1;
			b = n2;
		}
		void printNumber(){
			cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
		}
};

int Calculator :: sumReComplex(Complex o1, Complex o2){
	return o1.a + o2.a;
}

int Calculator :: sumImComplex(Complex o1, Complex o2){
	return o1.b + o2.b;
}

int main()
{
	Complex o1, o2;
	o1.setNumber(1, 4);
	o2.setNumber(5, 7);
	Calculator calc;
	int res = calc.sumReComplex(o1,o2);
	int ims = calc.sumImComplex(o1, o2);
	cout<<"The sum of the two numbers is "<<res<<" + "<<ims<<"i"<<endl;
	return 0;
}
