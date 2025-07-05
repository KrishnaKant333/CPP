#include <iostream>
using namespace std;

int fib(int n){
	if (n<2){
		return 1;
	}
	return fib(n-2) + fib(n-1);
}

int main()
{
	int num;
	cout<<"Enter the term of the Fibonacci series you want to know :\n";
	cin>>num;
	cout<<"The "<<num<<"th term of the Fibonacci series is "<<fib(num)<<endl;
	return 0;
}
