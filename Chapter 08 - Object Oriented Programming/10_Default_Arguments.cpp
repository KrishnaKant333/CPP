#include <iostream>
using namespace std;

class Simple{
	int data1;
	int data2;
	public:
		Simple(int a, int b=9){ // This b = 9 is the default value of b if any value is given during object creation then it will be overwrite b = 9 otherwise b = 9 will be used
			data1 = a;
			data2 = b;
		}
		void printData(void){
			cout<<"The value of the 2 data are : "<<data1<<" and "<<data2<<endl;
		}
};

int main()
{
	Simple s(5); // Default value of b will be used
	s.printData();

	Simple s1(5,10); // Default value will not be used instead b = 10 will be shown
	s1.printData();
	return 0;
}
