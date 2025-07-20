#include <iostream>
#include<list>
// List is bi directional linked list in which traversal can be done in both ways from a particular node
using namespace std;

void display(list<int> &lst){
	cout<<"Displaying a list now : "<<endl;
	list<int> :: iterator iter;
	for (iter = lst.begin(); iter != lst.end(); iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;
}

int main()
{
	list<int> list1; // list of 0 length
	list1.push_back(5);
	list1.push_back(7);
	list1.push_back(1);
	list1.push_back(9);
	list1.push_back(12);

	// used push_back because list did not store memory for any data

	display(list1);

	list1.sort(); // sort the list in ascending order by default
	display(list1);

	list1.reverse(); // reverse a list
	display(list1);

	list<int> list2(3); // empty list of 3 elements
	list<int> :: iterator iter = list2.begin();
	*iter = 45;
	iter++;
	*iter = 34;
	iter++;
	*iter = 71;
	iter++;

	// used iterator to set values because memory was stored for 3 data already

	display(list2);

	list1.pop_back(); // for deletion from the end
	list1.pop_front(); // for deletion from the front
	list1.remove(1); // to remove a particular value from the list

	display(list1);

	list1.merge(list2);
	cout<<"List 1 after merging : "<<endl;
	display(list1);

	return 0;
}
