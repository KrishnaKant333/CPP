#include <iostream>
using namespace std;

int main()
{
	int *p = new int(40);
	cout<<"The value at address p is : "<<*(p)<<endl;

	int *arr = new int[3];
	cout<<"Enter array elements : "<<endl;
	for (int i = 0; i < 3; i++){

		// cin>>arr[i];
		cin>>*(arr+i);
		// both are same
	}
	for (int i = 0; i < 3; i++){
		cout<<"The value of arr[i] is : "<<arr[i]<<endl;
	}



	return 0;
}
