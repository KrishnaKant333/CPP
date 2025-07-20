#include <iostream>
#include<functional>
#include<algorithm>
using namespace std;

// Function objects --> Function wrapped inside a class so that it can be accessed as an object. They are inside the functional header file
// otherwise aka Functors


int main()
{
	int arr[] = {1, 74, 2, 4, 56, 23};
	sort(arr, arr+5); // sorts the first 5 elements only
	// by default sorts in ascending order
	for (int i = 0; i < 6; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr, arr+6, greater<int>());
	// greater<int>() is a function object which is used to sort the array in descending order
	for (int i = 0; i < 6; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
