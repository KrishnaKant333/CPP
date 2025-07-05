#include <iostream>
using namespace std;

int main()
{
    int a = 45;
    cout<<"Initial value of a is "<<a<<endl;
    a = 69;
    cout<<"Final value of a is "<<a<<endl;
    // Value can be changed 

    const int b = 45;
    cout<<"Initial value of b is "<<b<<endl;
    //b = 69; // not possible
    cout<<"Final value of b is "<<b<<endl;
    // Value can not be changed 
    return 0;
}