#include <iostream>
using namespace std;

template <class T1, class T2>

float funcAvg(T1 a, T2 b){
	float avg = (a+b)/2.0;
	return avg;
}


int main()
{
	float a, b, c;
	a = funcAvg(5, 3); // both int
	cout<<a<<endl;
	b = funcAvg(2.5, 54.3); // both float
	cout<<b<<endl;
	c = funcAvg(5, 3.3); // one int one float
	cout<<c<<endl;
	return 0;
}
