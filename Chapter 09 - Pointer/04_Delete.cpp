#include <iostream>
using namespace std;

int main()
{
	int * arr = new int[3];
	cout<<"Enter array elements : "<<endl;
	for (int i = 0; i < 3; i++){
		cin>>arr[i];
	}
	delete [] arr;

	// only dynamically allocated variables can be destroyed using delete operator
	for (int i = 0; i < 3; i++){
		cout<<"The value of arr[i] is : "<<arr[i]<<endl;
	}
	return 0;
}
