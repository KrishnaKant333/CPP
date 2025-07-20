#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v){
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
		// v[i] same as v.at{i}
	}
	cout<<endl;
}

int main()
{
	vector<int> vec1;
	int element, size;
	cout<<"Enter the size of the vector: "<<endl;
	cin>>size;
	cout<<"Enter elements to add to this vector : "<<endl;
	for (int i = 0; i < size; i++)
	{
		cin>>element;
		vec1.push_back(element); // to push into the vector
	}
	display(vec1);

	vec1.pop_back(); // to delete the last entered value in the vector

	display(vec1);

	vector<int> :: iterator iter = vec1.begin(); // iterator declaration
	vec1.insert(iter, 566); // insert takes in an iterator and a value to store where the iterator points
	// in the declaration, iter is set to point at vec1.begin() so points at the beginning and inserts there

	display(vec1);

	vector<int> :: iterator iter2 = vec1.end();
	// here iter2 iterator is set to point at end
	vec1.insert(iter2, 400);
	// so insert will insert 400 where iter2 points i.e. at the end

	display(vec1);

	// to change the index manually starting from beginning
	vector<int> :: iterator iter3 = vec1.begin();
	vec1.insert(iter3+1, 5); // at 2nd place (1st index)

	display(vec1);

	// to insert multiple copies of same number at the specified index :
	vector<int> :: iterator iter4 = vec1.begin();
	vec1.insert(iter4+3, 4, 90);
	// this will insert 4 copies of 90 at index 3

	display(vec1);

	return 0;
}
