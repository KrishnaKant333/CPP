#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Using member function open() :
	ofstream out;
	out.open("SampleFile.txt");
	out<<"This is me";
	out.close();

	ifstream in;
	string st, st2;
	in.open("SampleFile.txt");
	// in>>st>>st2;
	// cout<<st<<st2;

	while(in.eof()==0){ // eof() --> end of file
		getline(in, st);
		cout<<st<<endl;
	}
	return 0;
}
