#include <iostream>
using namespace std;

class Complex{
	int real, imaginary;
	public:
		void setData(int a, int b){
			real = a;
			imaginary = b;
		}
		void getData(){
			cout<<"The real part is : "<<real<<endl;
			cout<<"The imaginary part is : "<<imaginary<<endl;
		}
};

int main()
{
	Complex *ptr = new Complex;

	// (*ptr).setData(1, 53);
	// (*ptr).getData();

	// now instead of using star to de reference a pointer we can use the arrow operator:
	ptr->setData(1,53);
	ptr->getData();
	return 0;
}
