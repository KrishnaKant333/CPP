#include <iostream>
using namespace std;

class Test{
	int a;
	int b;
	public:
	Test(int i, int j) : a(i), b(i+j) { // this is initialization list
		cout<<"Constructor executed"<<endl;
		cout<<"The value of a and b : "<<a<<", "<<b<<endl;
	}
		// Test(int i, int j) : a(i), b(a*j) --> this is valid as value of a will be available while initializing b
		// Test(int i, int j) : a(i+b), b(j) --> this is not valid as value of b will not be available while initializing a

		// NOTE : If we do this :

		// Test(int i, int j) : b(j), a(b+j) --> this is valid but wrong becoz in class Test, variable a is declared first so it will be defined first and as value of b will not be known while assigning a it will assume a garbage value
};

int main()
{
	Test t(4,6);
	return 0;
}
