#include <iostream>
using namespace std;

class Student{
	protected:
		int roll_no;
	public:
		void set_no(int a){
			roll_no = a;
		}
		void get_no(){
			cout<<"Your roll number is : "<<roll_no<<endl;
		}
};

// as both test and sports are going to inherit from Student so there will be 2 roll_no, 2 set_no(), 2 get_no() and so the inherited class from these two which is result will be ambigious about which function and data members it has to use, for this we add virtual keyword to tell the compiler that both will be same either way

class Test : virtual public Student{
	protected:
		int s1,s2;
	public:
		void set_marks(int s1, int s2){
			this->s1 = s1;
			this->s2 = s2;
		}
		void get_marks(){
			cout<<"Your marks in the two given subjects are : "<<s1<<"\t"<<s2<<endl;
		}
};

class Sports : virtual public Student{
	protected:
	 	float score;
	public:
		void set_score(int score){
			this->score = score;
		}
		void get_score(){
			cout<<"Your score is : "<<score<<endl;
		}
};

class Result : public Test, public Sports{
	private:
		float total;
	public:
		void display(){
			get_no();
			get_marks();
			get_score();
			total = s1 + s2 + score;
			cout<<"Your total score is : "<<total<<endl;
		}

};

int main()
{
	Result harry;
	harry.set_no(1022);
	harry.set_marks(78, 90);
	harry.set_score(8);
	harry.display();

	return 0;
}
