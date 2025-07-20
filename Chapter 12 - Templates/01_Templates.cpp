#include <iostream>
using namespace std;

template <class T>
// just like classes are templates/blue prints of an object
// templates are actual templates of a class, we can use a template to create a class which can represent many different classes depending on the data type provided
class vector{
	public :
		T * arr;
		int size;
		vector(int m){
			size = m;
			arr = new T[size];
		}
		T dotProduct(vector &v){
			T d = 0;
			for (int i = 0; i < size; i++)
			{
				d += this->arr[i] * v.arr[i];
			}
			return d;
		}
};

// without the use of templates, we would need to make separate classes for int, float, and any other data type

int main()
{
	vector <int> v1(3);
	v1.arr[0] = 4;
	v1.arr[1] = 3;
	v1.arr[2] = 1;

	vector <float> v2(3);
	v2.arr[0] = 1.3;
	v2.arr[1] = 0.9;
	v2.arr[2] = 1.4;

	vector <float> v3(3);
	v3.arr[0] = 5.7;
	v3.arr[1] = 2.6;
	v3.arr[2] = 1.5;


	int a = v1.dotProduct(v1);
	cout<<"Dot product of vector 1 with itself : "<<a<<endl;
	float b = v2.dotProduct(v2);
	cout<<"Dot product of vector 2 with itself : "<<b<<endl;
	float c = v2.dotProduct(v3);
	cout<<"Dot product of vector 2 with vector 3 is : "<<c<<endl;
	return 0;
}
