#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor=1.04){
	// Setting factor equal to 1.04 is the default argument here it can be overwritten but if not then 1.04 will be used as defualt
	// Always keep default arguments at the end of the arguments in a function
	return currentMoney*factor;
}

int main()
{
	int money;
	cout<<"Enter the amount of money :\n";
	cin>>money;
	cout<<"If you have "<<money<<" Rs invested, you will receive "<<moneyReceived(money)<<" Rs after 1 year"<<endl;
	// Even tho the function moneyReceived() takes 2 arguments, we only gave money as the currentMoney() argument and no factor argument but since it was set as 1.04 by defualt it used that value
	cout<<"VIPs will receive "<<moneyReceived(money, 1.08)<<" Rs after 1 year";
	return 0;
}
