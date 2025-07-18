#include <iostream>
using namespace std;

class Employee{ // --> base class
	public:
		int id;
		float salary;
		Employee(){}
		Employee(int empid, float salary){
			id = empid;
			this->salary = salary;
		}
		void displaySalary(void){
			cout<<salary<<endl;
		}
};

class Programmer : public Employee{ // --> derived class
	public:
	Programmer(int id, float salary){
		this->id = id;
		this->salary = salary;
	}
	int languageCode = 9;
	void getData(){
		cout<<id<<endl;
	}
};

// here public in derived class declaration states that the public members of Employee class will be public in Programmer class as well
// if it was private then public members of Employee class will be treated as private members in Programmer class

// By default the visibility mode would be private

// Note : private members of base class are never inherited

int main()
{
	Employee harry(1, 50000), rohan(2, 50000);
	harry.displaySalary();
	rohan.displaySalary();

	Programmer skillF(3, 50000);
	cout<<skillF.languageCode<<endl;
	skillF.getData();
	cout<<skillF.id; // because visibility mode during inheritance is public
	return 0;
}
