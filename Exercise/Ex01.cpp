#include <iostream>
#include <math.h>
using namespace std;

float divi(float a, float b);

class Number{
	protected:
		float a, b;
	public:
		void setNumber(float a, float b=0){
			this->a = a;
			this->b = b;
		}
		void getNumber(void){
			cout<<a<<endl<<b<<endl;
		}
};

class SimpleCalculator : public Number{
	public:
		float add(){
			return a+b;
		}
		float sub(){
			return a-b;
		}
		float mul(){
			return a*b;
		}
		float div(){
			return divi(a,b);
		}
		void ChoiceCalc1();
};

class ScientificCalculator : public Number{
	public:
		float pow(){
			return powf(a,b);
		}
		float square(){
			return powf(a,2);
		}
		float sqroot(){
			return sqrtf(a);
		}

		float ln(){
			return log(a);
		}

		float logb10(){
			return log10(a);
		}

		float expo(){
			return exp(a);
		}

		float degreetoRadians(){
			return a*M_PI/180;
		}
		void ChoiceCalc2();
};

float divi(float a, float b){
	if(b!=0){
		return a/b;
	}
	else{
		cout<<"Undefined"<<endl;
		return NAN;
	}
}

class Trig : public Number{
	private:
	float toRad(){
		return a*M_PI/180;
	}
	public:
		float sine(){
			float val = sin(toRad());
			return fabs(val) < 1e-6 ? 0 : val;
		}
		float cosine(){
			float val =  cos(toRad());
			return fabs(val) < 1e-6 ? 0 : val;
		}
		float tangent(){
			float val =  tan(toRad());
			return fabs(val) < 1e-6 ? 0 : val;
		}
		float cosecant(){
			float val =  divi(1,sin(toRad()));
			return fabs(val) < 1e-6 ? 0 : val;
		}
		float secant(){
			float val =  divi(1,cos(toRad()));
			return fabs(val) < 1e-6 ? 0 : val;
		}
		float cotangent(){
			float val =  divi(1,tan(toRad()));
			return fabs(val) < 1e-6 ? 0 : val;
		}
};

int CalcType(){
	int i;
	cout<<"\n----------------------\nScreen 1/3\n----------------------\n"<<endl;
	cout<<"Enter 1 for Simple calculator."<<endl;
	cout<<"Enter 2 for Scientific calculator."<<endl;
	cout<<"Enter 0 to exit."<<endl;
	cout<<"Enter your choice :"<<endl;
	cin>>i;
	return i;
}

int ChoiceInput(){
	int choice;
	cout<<"Enter the operation you would like to perform : "<<endl;
	cin>>choice;
	return choice;
}

void OneNumberInput(Number &sc){
	float a;
	cout<<"Enter the number:"<<endl;
	cin>>a;
	sc.setNumber(a);
}

void TwoNumberInput2(Number &sc){
	float a,b;
	cout<<"Enter two numbers:"<<endl;
	cin>>a>>b;
	sc.setNumber(a,b);
}

void Menu();

void ChoiceCalc1(){
	SimpleCalculator sc1;
	cout<<"\n----------------------\nScreen 2/3\n----------------------\n"<<endl;
	cout<<"Enter 1 for addition :"<<endl;
	cout<<"Enter 2 for subtraction :"<<endl;
	cout<<"Enter 3 for multiplication:"<<endl;
	cout<<"Enter 4 for division :"<<endl;
	cout<<"Enter 0 for previous page : "<<endl;
	int choice = ChoiceInput();
	switch (choice)
	{
		case 1 :
			TwoNumberInput2(sc1);
			cout<<sc1.add()<<endl;
			break;

		case 2 :
			TwoNumberInput2(sc1);
			cout<<sc1.sub()<<endl;
			break;

		case 3 :
			TwoNumberInput2(sc1);
			cout<<sc1.mul()<<endl;
			break;

		case 4 :
			TwoNumberInput2(sc1);
			cout<<sc1.div()<<endl;
			break;

		case 0 :
			Menu();
			break;

		default :
			cout<<"Enter a valid operation!"<<endl;
			return;
	}
}

void ChoiceCalc3();

void ChoiceCalc2(){
	ScientificCalculator sc2;
	cout<<"\n----------------------\nScreen 2/3\n----------------------\n"<<endl;
	cout<<"Enter 1 for the power operator : "<<endl;
	cout<<"Enter 2 for finding the square : "<<endl;
	cout<<"Enter 3 for finding the square root : "<<endl;
	cout<<"Enter 4 for Trigonometric Functions : "<<endl;
	cout<<"Enter 5 for finding the natural log :"<<endl;
	cout<<"Enter 6 for finding log with base 10 :"<<endl;
	cout<<"Enter 7 for finding the exponential :"<<endl;
	cout<<"Enter 8 for converting from degree to radians :"<<endl;
	cout<<"Enter 0 for previous page : "<<endl;
	int choice = ChoiceInput();
	switch (choice)
	{
		case 1 :
			TwoNumberInput2(sc2);
			cout<<sc2.pow()<<endl;
			break;

		case 2 :
			OneNumberInput(sc2);
			cout<<sc2.square()<<endl;
			break;

		case 3 :
			OneNumberInput(sc2);
			cout<<sc2.sqroot()<<endl;
			break;

		case 4 :
			ChoiceCalc3();
			break;

		case 5 :
			OneNumberInput(sc2);
			cout<<sc2.ln()<<endl;
			break;

		case 6 :
			OneNumberInput(sc2);
			cout<<sc2.logb10()<<endl;
			break;

		case 7 :
			OneNumberInput(sc2);
			cout<<sc2.expo()<<endl;
			break;

		case 8 :
			OneNumberInput(sc2);
			cout<<sc2.degreetoRadians()<<endl;
			break;

		case 0 :
			Menu();
			break;

		default:
			cout<<"Enter a valid operation!"<<endl;
			return;
	}
}

void ChoiceCalc3(){
	Trig sc3;
	while (true){
		cout<<"\n----------------------\nScreen 3/3\n----------------------\n"<<endl;
		cout<<"Enter 1 for sine"<<endl;
		cout<<"Enter 2 for cosine"<<endl;
		cout<<"Enter 3 for tangent"<<endl;
		cout<<"Enter 4 for cosecant"<<endl;
		cout<<"Enter 5 for secant"<<endl;
		cout<<"Enter 6 for cotangent"<<endl;
		cout<<"Enter 0 for previous page : "<<endl;
		int choice = ChoiceInput();

		switch (choice)
		{
			case 1:
				OneNumberInput(sc3);
				cout<<sc3.sine()<<endl;
				break;
			case 2:
				OneNumberInput(sc3);
				cout<<sc3.cosine()<<endl;
				break;
			case 3:
				OneNumberInput(sc3);
				cout<<sc3.tangent()<<endl;
				break;
			case 4:
				OneNumberInput(sc3);
				cout<<sc3.cosecant()<<endl;
				break;
			case 5:
				OneNumberInput(sc3);
				cout<<sc3.secant()<<endl;
				break;
			case 6:
				OneNumberInput(sc3);
				cout<<sc3.cotangent()<<endl;
				break;
			case 0:
				ChoiceCalc2();
				break;
			default:
				cout<<"Enter a valid Trig Operation!"<<endl;
				return;
		}
	}
}

void Menu(){
	int i = CalcType();
	while (true)
	{
		if (i == 1){
			ChoiceCalc1();

		}
		else if (i == 2){
			ChoiceCalc2();
		}
		else if(i == 0){
			exit(1);
		}
		else{
			cout<<"Enter the correct type of the calculator!"<<endl;
			Menu();
		}
	}
}

int main()
{
	Menu();
	return 0;
}
