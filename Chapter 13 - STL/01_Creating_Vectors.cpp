#include <iostream>
#include<vector>
// vector is kinda like a resizable array
using namespace std;

template <class T>
void display(vector<T> &v){
	cout<<"Displaying a vector now : "<<endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v.at(i)<<" ";
	}
	cout<<endl;
}

int main()
{
	// Multiple ways to create a vector in C++ :
	vector<int> vec1; // zero length integer vector
	display(vec1);

	vector<char> vec2(4); // 4 element character vector
	vec2.push_back('5');
	vec2.push_back('1');
	vec2.push_back('4');
	vec2.push_back('5');
	display(vec2);

	vector<char> vec3(vec2); // character vector created from vec2
	display(vec3);

	vector<int> vec4(6, 3); // 6 element vector of 3s
	display(vec4);
	
	return 0;
}
