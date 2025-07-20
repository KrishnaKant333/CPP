#include <iostream>
using namespace std;

class Shop{
	int id;
	float price;
	public:
		void setData(int a, float b){
			id = a;
			price = b;
		}
		void getData(){
			cout<<"The id is : "<<id<<endl
				<<"The price is : "<<price<<endl;
		}
};

int main()
{
	int size = 3;
	Shop *ptr = new Shop[size];
	Shop *ptrTemp = ptr;
	int p;
	float q;
	for (int i = 0; i < size; i++)
	{
		cout<<"Enter the id and price of item no."<<i+1<<" :"<<endl;
		cin>>p>>q;
		ptr->setData(p,q);
		ptr++;
	}

	for (int i = 0; i < size; i++)
	{
		cout<<"Item no. and price : "<<endl;
		ptrTemp->getData();
		ptrTemp++;
	}


	return 0;
}
