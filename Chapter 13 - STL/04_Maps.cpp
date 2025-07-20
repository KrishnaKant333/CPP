#include <iostream>
#include<map>
#include<string>
// map is used to store key value pair
// it is kinda like an associative array
using namespace std;

int main()
{
	map<string, int> marksMap;
	marksMap["Harry"] = 98;
	marksMap["Jack"] = 59;
	marksMap["Rohan"] = 2;

	marksMap.insert({{"Kks", 24}, {"Yks", 180}});

	map<string, int> :: iterator iter;
	for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
	{
		cout<<(*iter).first<<" "<<(*iter).second<<endl;
		// first refers to key and second refers to value associated with that key
	}

	cout<<marksMap.size()<<endl;
	cout<<marksMap.max_size()<<endl;
	cout<<marksMap.empty()<<endl;

	return 0;
}
