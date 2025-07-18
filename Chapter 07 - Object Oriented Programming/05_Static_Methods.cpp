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
		static void getCount(void){
			// A static function can only access the static data member of the class under consideration
			// cout<<id; // this will throw an error
			cout<<"The value of count is "<<count<<endl;
		}
};

int Employee :: count;

int main()
{
	Employee harry, rohan, lovish;
	harry.setData();
	harry.getData();
	Employee :: getCount();

	rohan.setData();
	rohan.getData();
	Employee :: getCount();

	lovish.setData();
	lovish.getData();
	Employee :: getCount();
	return 0;
}
