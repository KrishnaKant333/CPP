#include <iostream>
using namespace std;

template <class T>
class Harry{
	public:
		T data;
		Harry(T a) : data(a){}
		void display();
};

template <class T>
void Harry<T> :: display(){
	cout<<data<<endl;
}

int main()
{
	Harry <float> g(5.7);
	cout<<g.data<<endl;
	g.display();
	return 0;
}
