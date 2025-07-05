#include <iostream>
using namespace std;

int factorial(int num){
	int fact;
	if (num == 1 or num == 0)
		return 1;
	fact = num*factorial(num-1);
}

int main(){
	int n;
	cout<<"Enter an integer :"<<endl;
	cin>>n;
	if (n>=0){
		cout<<"The factorial of "<<n<<" is "<<factorial(n)<<"."<<endl;
	}
	else{
		cout<<"Factorial is not defined for negative integers!"<<endl;
	}

	return 0;
}
