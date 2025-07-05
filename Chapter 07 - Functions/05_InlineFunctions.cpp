#include <iostream>
using namespace std;

inline int product(int a, int b){
	return a*b;
}

int dontInline(int a, int b){
	static int c = 0; // This executes only once
	c++; // The next time this command is called, the value of c will be retained
	return a*b+c;
}

int main(){
	int a,b;
	cout<<"Enter two numbers:\n";
	cin>>a>>b;
	cout<<"The product of the numbers is "<<product(a,b);
//  In normal function call the actual arguments are copied into formal arguments of function and then evaluated and then returned

// Doing so for a small operation like multiplication is quite inefficient so we make such functions an inline function using the inline keyword so that program execution will be faster and efficient

//  When not to use inline declaration : 1. When function is big and contains more code, 2. when function contains static variables in its defintion, 3. when function has loops and switch cases in it..
	return 0;
}
