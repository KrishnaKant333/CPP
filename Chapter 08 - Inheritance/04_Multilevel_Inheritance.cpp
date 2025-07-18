#include <iostream>
using namespace std;

class Student{
	protected:
		int roll_number;
	public:
		void set_roll_number(int);
		void get_roll_number(void);
};

void Student :: set_roll_number(int r){
	roll_number = r;
}
void Student :: get_roll_number(void){
	cout<<roll_number<<endl;
}

class Exam : public Student{
	protected:
		float maths, physics;
	public:
		void set_marks(float, float);
		void get_marks();
};

void Exam :: set_marks(float m, float p){
	maths = m;
	physics = p;
}
void Exam :: get_marks(void){
	cout<<"Maths and physics marks are : "<<endl;
	cout<<maths<<endl<<physics<<endl;
}

class Result : public Exam{
	float percentage;
	public:
		void display(void){
			get_roll_number();
			get_marks();
			cout<<"Your percentage is "<<(maths+physics)/2<<"%"<<endl;
		}
};

int main()
{
	Result harry;
	harry.set_roll_number(420);
	harry.set_marks(94,90);
	harry.display();
	return 0;
}
