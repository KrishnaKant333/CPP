#include <iostream>
using namespace std;

class Employee{
	int id;
	int salary;
	public:
		void setId(void){
			salary = 122;
			cout<<"Enter the id of the employee:"<<endl;
			cin>>id;
		}

		void getId(void){
			cout<<"The id of this employee is "<<id<<endl;
		}
};

int main()
{
	// Employee harry, rohan, lovish, shruti;
	// harry.setId();
	// harry.getId();
	// This is okay when the number of employee is less, if there are more than doing so will be inefficient.. it will be better to store them in an array so as to make a array of objects :

	Employee fb[4];
	for (int i = 0; i < 4; i++)
	{
		fb[i].setId();
		fb[i].getId();
	}
	return 0;
}
