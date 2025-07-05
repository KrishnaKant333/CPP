#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a = 69420;
    int * b = &a;

    // & --> address of operator
    // * --> value at (deference) operator

    cout<<"The value of a is "<<setw(9)<<a<<endl;
    cout<<"The value of a is "<<setw(9)<<*b<<endl;

    cout<<"The address of a is "<<setw(9)<<&a<<endl;
    cout<<"The address of a is "<<setw(9)<<b<<endl;

    int ** c = &b;

    cout<<"The value of b is "<<setw(9)<<b<<endl;
    cout<<"The value of b is "<<setw(9)<<*c<<endl;

    cout<<"The address of b is "<<setw(9)<<&b<<endl;
    cout<<"The address of b is "<<setw(9)<<c<<endl;

    cout<<"The value of a is "<<setw(9)<<**c<<endl;

    return 0;
}