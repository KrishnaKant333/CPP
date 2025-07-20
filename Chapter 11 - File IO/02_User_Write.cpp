#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream hout("SampleFile2.txt");
	cout<<"Enter your name :"<<endl;
	string name;
	cin>>name;
	hout<<name;
	hout.close(); // close the file after working with it

	ifstream hin("SampleFile2.txt");
	string content;
	hin>>content;
	cout<<"The contents of the file is : "<<content<<endl;
	hin.close();
	return 0;
}
