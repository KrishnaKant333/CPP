#include <iostream>
#include <fstream>
using namespace std;

/*
	C++ provides a variety of in built classes for working with files unlike C, we can use these classes by including the fstream library
	1. fstreambase
	2. ifstream
	3. ofstream
	ifstream and ofstream --> derived from fstreambase
*/

// To open a file : there are 2 ways :
// 1. using the constructor
// 2. using the member function open() of the class

int main()
{
	string s = "Harry bhai";
	string s2;

	// Using constructors :

	ofstream out("SampleFile.txt"); // write operation
	out<<s;

	ifstream in("SampleFile2.txt"); // read operation
	// in>>s2; // ifstream object reads until a new line or space is met
	// cout<<s2; // prints "This" only

	// to get a whole string from a file we can use the getline() function
	getline(in, s2); // getline(input stream object eg: an ifstream object, where u want to store)
	cout<<s2;
	return 0;
}
