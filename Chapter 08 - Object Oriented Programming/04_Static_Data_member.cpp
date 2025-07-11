#include <iostream>
using namespace std;

class Employee{
	static int count; // static keyword makes the variable count shared between every object of the class under consideration
	// The initial value of a static variable is 0.
	// A static variable is also called class variable becoz it is linked to a class and not its individual objects
	int id;
	public:
		void setData(void){
			cout<<"Enter the id :"<<endl;
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"Employee no. = "<<count<<endl<<"Employee ID = "<<id<<endl;
		}
};

int Employee :: count;

int main()
{
	Employee harry, rohan, lovish;
	harry.setData();
	harry.getData();

	rohan.setData();
	rohan.getData();

	lovish.setData();
	lovish.getData();
	return 0;
}
