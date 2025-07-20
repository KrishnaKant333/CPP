#include <iostream>
using namespace std;


template <class T1, class T2>
class myClass{
	T1 data1;
	T2 data2;
	public:
		myClass(T1 a, T2 b){
			data1 = a;
			data2 = b;
		}
		void display(){
			cout<<this->data1<<endl<<this->data2<<endl;
		}
};

int main()
{
	myClass<int, char> obj(72, 'a');
	obj.display();

	myClass<double, int> obj2(3.1415, 420);
	obj2.display();
	return 0;
}
