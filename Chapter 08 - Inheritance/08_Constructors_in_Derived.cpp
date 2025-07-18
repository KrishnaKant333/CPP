#include <iostream>
using namespace std;

class Base1{
	int data1;
	public:
		Base1(int i){
			data1 = i;
			cout<<"Base class1 constructor called"<<endl;
		}
		void printData1(){
			cout<<"The value of data1 is : "<<data1<<endl;
		}
};

class Base2{
	int data2;
	public:
		Base2(int i){
			data2 = i;
			cout<<"Base class2 constructor called"<<endl;
		}
		void printData2(){
			cout<<"The value of data2 is : "<<data2<<endl;
		}
};

class Derived : public Base1, public Base2{
	int derived1, derived2;
	public :
	Derived(int a, int b, int c, int d) : Base1(a), Base2(b){ // the constructors will be called in the order of the class which are declared here so firstly base1 constructor and then base2 and then derived
		derived1 = c;
		derived2 = d;
		cout<<"Derived class constructor called"<<endl;
	}
	void printData(){
		cout<<"The value of derived1 and derived2 is : "<<derived1<<", "<<derived2<<endl;
	}
};

int main()
{
	Derived d(1,2,3,4);
	d.printData1();
	d.printData2();
	d.printData();
	return 0;
}
