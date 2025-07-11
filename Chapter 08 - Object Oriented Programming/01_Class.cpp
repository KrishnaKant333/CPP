#include <iostream>
using namespace std;

// Class --> Extension of structures(in C)

class Employee
{
	private:
		int a, b, c;
	public:
		int d, e;
		void setData(int a1, int b1, int c1);
		void getData(){
			cout<<"The value of a is "<<a<<endl;
			cout<<"The value of b is "<<b<<endl;
			cout<<"The value of c is "<<c<<endl;
			cout<<"The value of d is "<<d<<endl;
			cout<<"The value of e is "<<e<<endl;
		}
};

void Employee :: setData(int a1, int b1, int c1){
	a = a1;
	b = b1;
	c = c1;
}

int main()
{
	Employee harry;
	harry.setData(1, 3, 4);
	harry.d = 4;
	harry.e = 6;
	harry.getData();
	return 0;
}
