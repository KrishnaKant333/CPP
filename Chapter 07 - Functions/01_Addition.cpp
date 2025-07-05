#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int num1, num2;
    cout<<"Enter two numbers :\n";
    cin>>num1>>num2;
    cout<<"The sum is : "<<sum(num1,num2);
    return 0;

}